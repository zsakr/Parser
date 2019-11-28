/*
 * scanner.l -- a lexical analyzer for P-
 *
 * Ziad Sakr
 * Department of Computer Science
 * Trinity College 
 *
 * Date: 10-16-2019 
 * Modification History:
 * 10-3-2019
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

#include "scanner.h"

%}

DIGIT                        [0-9]
IDENT 				[a-zA-Z_][a-zA-Z0-9_]*
%x 				    comment

%%
						
                        struct he *phe;
                        char msg[MAX_MSG_LEN];
                        char ch;
                        int ret;

" "                     |
"\t"                    |
"\f"                    ;
"\n"                    cLine++;
array|ARRAY             return(ARRAY);
begin|BEGIN				return(BEGINN);
bool|BOOL				return(BOOL);
else|ELSE				return(ELSE);
elif|ELIF				return(ELIF);
end|END					return(END);
false|FALSE				return(FALSE);
for|FOR					return(FOR);
read|READ				return(READ);
record|RECORD			return(RECORD);
return|RETURN			return(RETURN);
then|THEN				return(THEN);
true|TRUE				return(TRUE);
while|WHILE				return(WHILE);
write|WRITE				return(WHILE);
float|FLOAT				return(FLOAT);
function|FUNCTION		return(FUNCTION);
if|IF					return(IF);
int|INT					return(INT);
of|OF					return(OF);
procedure|PROCEDURE		return(PROCEDURE);
program|PROGRAM			return(PROGRAM);

                        
\"(\\.|[^"\\])*\"        {    
                            yylval.sb = MakeString(yytext);
                            return(SCONST);
                        }

{IDENT}    				{
                            if ((phe = Lookup(yytext)) == NULL) {
                                phe = Insert(yytext);
                                yylval.phe = phe;
                            }
                            return(IDENT);
                        }
{DIGIT}+                        {
					       yylval.w = atoi(yytext);
                            return(ICONST);
                          
                          }
                          
{DIGIT}+"."{DIGIT}*        {
 						yylval.r = atof(yytext);
                            return(FCONST);
                                       
                          }
                                                  
                          
":"                          {
				yylval.sb = MakeString(yytext);
                            return(COLON);
                          
                          
                          }											
"="                          {
				yylval.sb = MakeString(yytext);
                            return(EQ);
                          
                  
                          }
"("	                          {
						yylval.sb = MakeString(yytext);
                            return(LPAREN);
                          }
                          
")"							{
							yylval.sb = MakeString(yytext);
                            return(RPAREN);
                          }
"["							{
							yylval.sb = MakeString(yytext);
                            return(LBRACK);
                          }
"]"							{
							yylval.sb = MakeString(yytext);
                            return(RBRACK);
                          }                        
 
","							{
							yylval.sb = MakeString(yytext);
                            return(COMMA);
                          }   
"."							{
							yylval.sb = MakeString(yytext);
                            return(DOT);
                          }                         
                          
"+"							{
							yylval.sb = MakeString(yytext);
                            return(PLUS);
                          } 
"-"							{
							yylval.sb = MakeString(yytext);
                            return(MINUS);
                          }
"*"							{
							yylval.sb = MakeString(yytext);
                            return(STAR);
                          }   
"/"							{
							yylval.sb = MakeString(yytext);
                            return(DIV);
                          }
 "&"					{
							yylval.sb = MakeString(yytext);
                            return(AMP);
                          }
                              
";"					      {
							yylval.sb = MakeString(yytext);
                            return(SEMI);
                          } 
                           
"&&"					   {
							yylval.sb = MakeString(yytext);
                            return(DAMP);
                          } 

"<="					   {
							yylval.sb = MakeString(yytext);
                            return(LE);
                          }                                                                                                                                                                                 
                           
">="					   {
							yylval.sb = MakeString(yytext);
                            return(GE);
                          }
                           
"=="					   {
							yylval.sb = MakeString(yytext);
                            return(ASGN);
                          }                          
                           
"!="					   {
							yylval.sb = MakeString(yytext);
                            return(NE);
                          }                           

                           
">"					   {
							yylval.sb = MakeString(yytext);
                            return(GT);
                          }                          
                           
"<"					   {
							yylval.sb = MakeString(yytext);
                            return(LT);
                          } 
                          
 "!"					   {
							yylval.sb = MakeString(yytext);
                            return(BANG);
                          }                          

 "||"					   {
							yylval.sb = MakeString(yytext);
                            return(DBAR);
                          }                            
                                                                       
"/*"					    BEGIN(comment);
<comment>[^*\n]*				/* eat anything that is not a '*' */
<comment>"*"+[^*/\n]*			/* eat up '*'s not followed by '/'s */	
<comment>\n 					++cLine;
<comment>"*"+"/"				BEGIN(INITIAL);
"{"[^}\n]*"}"					/* eat up one line comment*/
																	
.                       {
                            sprintf(msg, message[mnUnknownChar], yytext[0]);
                            PrintErrMsg(msg);
                        }
%%
