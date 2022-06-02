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

integer      { printf("token KW_INT: %s\n",yytext); return KW_INT; }

scalar       { printf("token KW_SCALAR: %s\n",yytext); return KW_SCALAR; }

str          { printf("token KW_STRING: %s\n",yytext); return KW_STRING; }

void         { printf("token KW_VOID: %s\n",yytext); return KW_VOID; }

boolean      { printf("token KW_BOOL: %s\n",yytext); return KW_BOOL; }

True         { printf("token KW_TRUE: %s\n",yytext); return KW_TRUE; }

False        { printf("token KW_FALSE: %s\n",yytext); return KW_FALSE; }

const        { printf("token KW_CONST: %s\n",yytext); return KW_CONST; }

if           { printf("token KW_IF: %s\n",yytext); return KW_IF; }

else         { printf("token KW_ELSE: %s\n",yytext); return KW_ELSE; }

endif        { printf("token KW_ENDIF: %s\n",yytext); return KW_ENDIF; }                     

for          { printf("token KW_FOR: %s\n",yytext); return KW_FOR; }

in           { printf("token KW_IN: %s\n",yytext); return KW_IN; }

endfor       { printf("token KW_ENDFOR: %s\n",yytext); return KW_ENDFOR; }

while        { printf("token KW_WHILE: %s\n",yytext); return KW_WHILE; }

endwhile     { printf("token KW_ENDWHILE: %s\n",yytext); return KW_ENDWHILE; }

break        { printf("token KW_BREAK: %s\n",yytext); return KW_BREAK; }

continue     { printf("token KW_CONTINUE: %s\n",yytext); return KW_CONTINUE; }

not          { printf("token KW_NOT: %s\n",yytext); return KW_NOT; }

and          { printf("token KW_AND: %s\n",yytext); return KW_AND; }

or           { printf("token KW_OR: %s\n",yytext); return KW_OR; }

def          { printf("token KW_DEF: %s\n",yytext); return KW_DEF; }

enddef       { printf("token KW_ENDDEF: %s\n",yytext); return KW_ENDDEF; }

main         { printf("token KW_MAIN: %s\n",yytext); return KW_MAIN; } 

return       { printf("token KW_RETURN: %s\n",yytext); return KW_RETURN; }

comp         { printf("token KW_COMP: %s\n",yytext); return KW_COMP; } 

endcomp      { printf("token KW_ENDCOMP: %s\n",yytext); return KW_ENDCOMP; } 



{ID}         { printf("token IDENTIFIER: %s\n",yytext); yylval.crepr = strdup(yytext); return IDENTIFIER; }

{NONZEROINT} { printf("token POSINT: %s\n",yytext); yylval.crepr = strdup(yytext); return POSINT; }

{REAL}       { printf("token REAL: %s\n",yytext); yylval.crepr = strdup(yytext); return REAL; }

{STRING}     { printf("token STRING: %s\n",yytext); yylval.crepr = strdup(yytext); return STRING; }



"="        { printf("token OP_ASGN: %s\n", yytext); return '='; }
"+="       { printf("token OP_ASGN_ADD: %s\n", yytext); return OP_ASGN_ADD; }
"-="       { printf("token OP_ASGN_SUB: %s\n", yytext); return OP_ASGN_SUB; }
"*="       { printf("token OP_ASGN_MUL: %s\n", yytext); return OP_ASGN_MUL; }
"/="       { printf("token OP_ASGN_DIV: %s\n", yytext); return OP_ASGN_DIV; }
"%="       { printf("token OP_ASGN_MOD: %s\n", yytext); return OP_ASGN_MOD; }

"+"        { printf("token OP_ADD: %s\n", yytext); return '+'; }
"-"        { printf("token OP_SUB: %s\n", yytext); return '-'; }
"*"        { printf("token OP_MUL: %s\n", yytext); return '*'; }
"/"        { printf("token OP_DIV: %s\n", yytext); return '/'; }
"%"        { printf("token OP_MOD: %s\n", yytext); return '%'; }
"**"       { printf("token OP_POWER: %s\n", yytext); return OP_POWER; }

"=="       { printf("token OP_EQUALS: %s\n", yytext); return OP_EQUALS; }
"!="       { printf("token OP_NOT_EQ: %s\n", yytext); return OP_NOT_EQ; }
"<"        { printf("token OP_LS: %s\n", yytext); return OP_LS; }
"<="       { printf("token OP_LS_EQ: %s\n", yytext); return OP_LS_EQ; }
">"        { printf("token OP_GRT: %s\n", yytext); return OP_GRT; }
">="       { printf("token OP_GRT_EQ: %s\n", yytext); return OP_GRT_EQ; }

";"        printf("token D_SEMCOL: %s\n", yytext); return ';';
":"        printf("token D_COLON: %s\n", yytext); return ':';
"("        printf("token D_L_PARENTH: %s\n", yytext); return '(';
")"        printf("token D_R_PARENTH: %s\n", yytext); return ')'; 
","        printf("token D_COMMA: %s\n", yytext); return ',';
"["        printf("token D_L_BRCK: %s\n", yytext); return '[';
"]"        printf("token D_R_BRCK: %s\n", yytext); return ']';
"{"        printf("token D_L_CRL_BRCK: %s\n", yytext); return '{';
"}"        printf("token D_R_CRL_BRCK: %s\n", yytext); return '}';
"#"        printf("token \"#\": %s\n", yytext); return '#';
"."        printf("token \"DOT\": %s\n", yytext); return '.';

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
