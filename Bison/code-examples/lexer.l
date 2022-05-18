%{
	#include <string.h>
  #include "cgen.h"	
  #include "parser.tab.h"
  
  int line_num = 1;
%}


ID      [a-zA-Z_][0-9a-zA-Z_]*
DIGIT   [0-9]
NUMBER  {DIGIT}{DIGIT}*
DECIMAL ("."{NUMBER})|({NUMBER}("."{NUMBER}?)?)
REAL    {DECIMAL}([eE][+-]?{NUMBER})?

%%

if          return KW_IF;
else		    return KW_ELSE;

{ID}        { yylval.str = strdup(yytext); return TK_IDENT; }
{NUMBER}    { yylval.str = strdup(yytext); return TK_INT; }
{REAL}      { yylval.str = strdup(yytext); return TK_REAL; }

"+"         return '+';
"-"         return '-';
"*"         return '*';
"/"         return '/';
"("					return '(';
")"					return ')';

";"					return ';';
","					return ',';

"//"[^\n]*  /* eat line comments */

":="        { return TK_ASSGN ;}

[ \r\t]+		/* eat whitespace */
\n 					 ++line_num;

<<EOF>> 	return EOF;
.         { 
						yyerror("lexical error: unrecognized literal '%s'\n", yytext);
					}

%%

