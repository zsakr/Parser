/*
 * scanner.l - a lexical analyzer for P-
 *
 * Ziad Sakr
 *
 * Date: 09-30-2019
 * Modification History:
 * 09-25-2019
 * 09-26-2019
 * 09-27-2019
 * 09-28-2019
 * 09-29-2019
 */

%{

/* Include files and global variables go here */

#include <stdio.h>
#include "msg.h"



extern int cErrors;
extern char *infile;

%}

ID 				[a-zA-Z][a-z0-9]*
digit			[0-9]
%x 				comment

%%
                /* Local variables go here */
                int line_num = 1;

"\n"            cLine++;

array|begin|bool|else|elif|end|false|for|read|record|return|then|true {
                fprintf(stderr, message[mnKeywordFound], infile, cLine, yytext);
               }
while|write|float|function|if|in|int|of|procedure|program|ARRAY|BEGIN|BOOL|ELSE|ELIF|END|FALSE|FOR|READ {
			fprintf(stderr, message[mnKeywordFound], infile, cLine, yytext);
				}	
WRITE|FLOAT|FUNCTION|IF|IN|INT|OF|PROCEDURE|PROGRAM|RECORD|RETURN|THEN|TRUE|WHILE {
			fprintf(stderr, message[mnKeywordFound], infile, cLine, yytext);
				}

{ID}			{
				fprintf(stderr, message[identifier], infile, cLine, yytext);
				}
\"(\\.|[^"\\])*\"   {
				fprintf(stderr, message[string], infile, cLine, yytext);
				}

{digit}+		{
				fprintf(stderr, message[integer], infile, cLine, yytext);
				}

{digit}+"."{digit}* { 
					fprintf(stderr, message[float], infile, cLine, yytext);
				}

"."{digit}* {
					fprintf(stderr, message[float], infile, cLine, yytext);
				}
"&"|";"|"="|"!"|":"|"["|"]"|"("|")"|"+"|"-"|"/"|"."|"<"|">"|"," {

					fprintf(stderr, message[operator], infile, cLine, yytext);
}

"&&"|"||"|">="|"<="|"=="|"!="|".." {
					fprintf(stderr, message[compoundOperator], infile, cLine, yytext);
}

	"\*"					    BEGIN(comment);
<comment>[^*\n]*				/* eat anything that is not a '*' */
<comment>"*"+[^*/\n]*			/* eat up '*'s not followed by '/'s */	
<comment>\n 					++line_num;
<comment>"*"+"/"				BEGIN(INITIAL);

"{"[^}\n]*"}"					/* eat up one line comment*/

[ \t\n\f]								;

\"(\\.|[^"\\])*   {
				fprintf(stderr, message[mnUnknownChar], infile, cLine, yytext);
				cErrors++;
				}

  .            {
                fprintf(stderr, message[mnUnknownChar], infile, cLine, yytext[0]);
                cErrors++;
               } 

%%

/* User routines go here */
