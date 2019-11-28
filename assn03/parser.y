/*
 * parser.y -- bison rules to generate parser for P-
 *
 * Ziad Sakr
 * Department of Computer Science
 * Trinity College 
 *
 * Date: 10-16-2019 
 * Modification History:
 * 10-4-2019
 *  10-5-2019
 *  10-6-2019
 * 	10-9-2019
 * 	10-10-2019
 * 	10-11-2019
 * 	10-12-2019
 * 	10-13-2019
 * 	10-14-2019
 * 	10-15-2019
 * 10-16-2019
 */

%{
#include "msg.h"
%}

%start program

%union {
    int w;                 /* ICONST */
    double r;              /* FCONST */
    char *sb;              /* SCONST */
    struct he *phe;        /* IDENT  */

    /* more to be added during Phase 3 */
    char op;
}

%token AMP ASGN BANG COLON COMMA DAMP DBAR DIV DOT EQ GE GT LBRACK LE 
%token LPAREN LT MINUS NE PLUS RBRACK RPAREN SEMI STAR ARRAY BEGINN BOOL  
%token ELSE ELIF END FALSE FOR FLOAT FUNCTION IF IN INT OF PROCEDURE PROGRAM
%token READ RECORD RETURN THEN TRUE WHILE WRITE
%token FCONST    
%token ICONST
%token IDENT
%token SCONST
%nonassoc ASGN
%nonassoc DBAR
%nonassoc DAMP
%nonassoc EQ GE GT LE LT NE
%left PLUS MINUS
%left STAR DIV
%right BANG

%%
program        :    PROGRAM IDENT decl_part body  

               |    PROGRAM error
                    {
                       yyerror(message[mnMissingIdent]);
                    }
                    decl_part body
                    {
                       yyerrok;
                    }
                
               
               ;


decl_part      : {;} 
			   | varaibledecl decl_part
			   | decl_part  error
                    {
                       yyerror(message[mnMissingdecl]);
                    }
                   decl_part body   
                    {
                       yyerrok;
                    }
			   | procedure decl_part
			   | function decl_part
			   ;
			   			   
			   
body           : BEGINN statement END 			
			   | BEGINN stat END
			   |  error
                    {
                       yyerror(message[mnMissingbody]);
                    }
                    statement END 
                    {
                       yyerrok;
                    }		     
               ;
               
stat 			: {;}  
				| statement stat
				;
				               
varaibledecl   : IDENT COLON TYPE 
			   | IDENT error
                    {
                       yyerror(message[mnMissingColon]);
                    }
                   COLON TYPE   
                    {
                       yyerrok;
                    }
			   | IDENT COMMA varaibledecl
			   | IDENT EQ TYPE
			   ;
			   
TYPE		   : simpleType
			   | IDENT 
			   | ICONST
			   | ARRAY LBRACK INDEX RBRACK OF TYPE	
			   | RECORD fieldlist END 
			   | TYPE error
                    {
                       yyerror(message[mnMissingtype]);
                    }
                   TYPE   
                    {
                       yyerrok;
                    }
			   ;
			   
procedure      : PROCEDURE IDENT LPAREN RPAREN decl_part body
				| PROCEDURE IDENT LPAREN error
                    {
                       yyerror(message[mnMissingproceduer]);
                    }
                  RPAREN decl_part body    
                    {
                       yyerrok;
                    } 			
			   | PROCEDURE IDENT LPAREN paramter RPAREN	decl_part body      
			   ;

paramter       : IDENT COLON parametertype
			   | AMP paramter
			   | IDENT COMMA paramter
			   | AMP IDENT paramter
			   | paramter SEMI paramter  
			   | PROCEDURE IDENT LPAREN paramter RPAREN	decl_part body 
			   | paramter error
                    {
                       yyerror(message[mnMissingPARAMTER]);
                    }
                  RPAREN decl_part body    
                    {
                       yyerrok;
                    } 
			   ;

parametertype  : simpleType
			   | IDENT   	
			   ;
			   
simpleType     : INT 
			   | FLOAT 
			   | BOOL 
			    | simpleType error
                    {
                       yyerror(message[mnMissingtype]);
                    }
                   decl_part body   
                    {
                       yyerrok;
                    }
			   ;


INDEX 			: ICONST COLON ICONST 
				| ICONST COLON ICONST COMMA INDEX
				;
				        
fieldlist		: IDENT COLON TYPE 
				| IDENT COMMA fieldlist
				| IDENT fieldlist
				;

function		: FUNCTION IDENT LPAREN paramter RPAREN COLON simpleType decl_part body
				| FUNCTION IDENT LPAREN RPAREN COLON simpleType decl_part body 
				  | function error
                    {
                       yyerror(message[mnMissingfunc]);
                    }
                   simpleType decl_part body   
                    {
                       yyerrok;
                    }
			    ;		        
			   
statement 		: {;}
				| assignment 
				| subroutinecall 
				| return 
				| for 
				| while 
				| if
				| read 
				| write 
				;
				
assignment     	: variable EQ exprssion
				 | variable error
                    {
                       yyerror(message[mnMissingdecl]);
                    }
                  EQ exprssion  
                    {
                       yyerrok;
                    } 
				;

subroutinecall	: IDENT LPAREN RPAREN
				| IDENT LPAREN exprssion RPAREN
				| IDENT LPAREN exprssion COMMA subroutinecall
				;

return 			: RETURN exprssion
				;

for				: FOR IDENT IN exprssion COLON exprssion statement END
                | FOR IDENT IN exprssion COLON exprssion statement stat END
				;
				

while			: WHILE LPAREN exprssion RPAREN statement END
				| WHILE LPAREN exprssion RPAREN statement stat END  	
				;								

if				: IF LPAREN exprssion RPAREN THEN statement END
				| IF LPAREN exprssion RPAREN THEN statement stat END
				| IF LPAREN exprssion RPAREN THEN stat elif END
				| IF LPAREN exprssion RPAREN THEN stat else END
				| IF LPAREN exprssion RPAREN THEN stat elif else END
				;
				 
else 			: ELSE stat 
				;


elif			: ELIF LPAREN exprssion RPAREN THEN stat
				| ELIF LPAREN exprssion RPAREN THEN stat elif
				;


write			: WRITE LPAREN SCONST RPAREN
				| write SCONST exprloop RPAREN
				;				
				
exprloop       : COMMA exprssion exprloop
			   | {;}
			   ;

read 			: READ LPAREN SCONST COMMA exprloop RPAREN	
				;		

exprssion       : and 
				| and DBAR and 
				| ICONST
				| IDENT PLUS IDENT  
				;
				
and             : logic 
				| logic DAMP logic 
				;					 												   

logic			: simple 
				| simple GT simple
				| simple GE simple
				| simple ASGN simple
				| simple NE simple
				| simple LE simple
				| simple LT simple 
				;

simple          : PLUS term
				| MINUS term 
				| simple condition 
				;
				
condition 		: PLUS | MINUS term condition
				;

term           : factor 
			   | factor termcond
			   ;				

termcond       : STAR factor 
			   | DIV factor 
			   ;	

factor 			: constant
				| variable
				| subroutinecall
				| LPAREN exprssion RPAREN
				| BANG factor 
				;
				
variable 		: IDENT
				| IDENT arrayvar
				| IDENT arrayvar recvar
				| IDENT recvar
				;
				
arrayvar 		: LBRACK exprssion RBRACK
				| LBRACK avarcond	
				;	
						 							   										
avarcond       : exprssion COMMA avarcond
			   | 
			   ;
			   
			   
recvar			: DOT variable
			    | DOT variable recvar
			    ;			   

constant       : ICONST
			   | FCONST
			   | TRUE
			   | FALSE
			   ;										   
%%
