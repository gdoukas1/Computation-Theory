%{
    #include <stdio.h>
    #include <string.h>
    #include "myanalyzer.tab.h"
    #include "cgen.h"

    int line_num = 1;
%}

ID            [a-zA-Z][0-9a-zA-Z_]*
DIGIT         [0-9]
NONZERO       [1-9]  
NONZEROINT    "0"|{NONZERO}{DIGIT}* 
NUMBER        {DIGIT}+
DECIMAL       {NONZEROINT}"."{NUMBER}
REAL          {DECIMAL}([eE][+-]?{NONZEROINT})?
CHARACTER     [\., a-zA-Z0-9\-\+\*\/:_$%!#@&~^()]|[\\n]|[\\t]|[\\r]|[\\\\]|[\\"]
STRING        \"{CHARACTER}*\"

%x comment

%%

integer      return KW_INT;
scalar       return KW_SCALAR; 
str          return KW_STRING;
void         return KW_VOID; 
boolean      return KW_BOOL; 
True         return KW_TRUE; 
False        return KW_FALSE; 
const        return KW_CONST; 
if           return KW_IF;
else         return KW_ELSE;
endif        return KW_ENDIF;                  
for          return KW_FOR; 
in           return KW_IN; 
endfor       return KW_ENDFOR;
while        return KW_WHILE;
endwhile     return KW_ENDWHILE; 
break        return KW_BREAK; 
continue     return KW_CONTINUE;
not          return KW_NOT;
and          return KW_AND; 
or           return KW_OR;
def          return KW_DEF;
enddef       return KW_ENDDEF;
main         return KW_MAIN;
return       return KW_RETURN;
comp         return KW_COMP;
endcomp      return KW_ENDCOMP;


{ID}         { yylval.crepr = strdup(yytext); return IDENTIFIER; }
{NONZEROINT} { yylval.crepr = strdup(yytext); return POSINT; }
{REAL}       { yylval.crepr = strdup(yytext); return REAL; }
{STRING}     { yylval.crepr = strdup(yytext); return STRING; }


"="        return '='; 
"+="       return OP_ASGN_ADD; 
"-="       return OP_ASGN_SUB; 
"*="       return OP_ASGN_MUL;
"/="       return OP_ASGN_DIV;
"%="       return OP_ASGN_MOD; 

"+"        return '+'; 
"-"        return '-'; 
"*"        return '*'; 
"/"        return '/'; 
"%"        return '%'; 
"**"       return OP_POWER; 

"=="       return OP_EQUALS; 
"!="       return OP_NOT_EQ;
"<"        return OP_LS; 
"<="       return OP_LS_EQ; 
">"        return OP_GRT; 
">="       return OP_GRT_EQ; 

";"        return ';';
":"        return ':';
"("        return '(';
")"        return ')'; 
","        return ',';
"["        return '[';
"]"        return ']';
"{"        return '{';
"}"        return '}';
"#"        return '#';
"."        return '.';

"--"[^\n]*  	/* eat line comments */

"/*"		{BEGIN(comment); printf("Comment started at line: %d\n", line_num);}
<comment>[^*\n]*        /* eat anything that's not a '*' */
<comment>"*"+[^*/\n]*   /* eat up '*'s not followed by '/'s */
<comment>\n             ++line_num;
<comment>"*"+"/"        {BEGIN(INITIAL); printf("Comment ended at line: %d\n", line_num);}

[ \r\t]+	/* skip whitespace */
\n          ++line_num;

<<EOF>> 	return EOF;

.           { yyerror("Lexical Error in line %d. Unrecognized literal '%s'\n",line_num, yytext); }

%%
