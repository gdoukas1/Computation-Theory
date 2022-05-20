%{
    #include <stdio.h>
    #include "cgen.h"

    extern int yylex(void);
    extern int line_num;
%}


%union
{
    char* crepr;
}

%token <crepr> IDENTIFIER
%token <crepr> POSINT
%token <crepr> REAL
%token <crepr> STRING

//  KEYWORDS
%token KW_INT
%token KW_SCALAR
%token KW_STRING
%token KW_BOOL
%token KW_TRUE
%token KW_FALSE
%token KW_CONST
%token KW_IF
%token KW_ELSE
%token KW_ENDIF
%token KW_FOR
%token KW_IN
%token KW_ENDFOR
%token KW_WHILE
%token KW_ENDWHILE
%token KW_BREAK
%token KW_CONTINUE
%token KW_NOT
%token KW_AND
%token KW_OR
%token KW_DEF
%token KW_ENDDEF
%token KW_COMP
%token KW_ENDCOMP
%token KW_RETURN
%token KW_MAIN


//  OPERATORS
%token OP_ASGN_ADD
%token OP_ASGN_SUB
%token OP_ASGN_MUL
%token OP_ASGN_DIV
%token OP_ASGN_MOD
%token OP_POWER
%token OP_EQUALS
%token OP_NOT_EQ
%token OP_LS
%token OP_LS_EQ
%token OP_GRT
%token OP_GRT_EQ


%start program


%type <crepr> decl_list func_decl func_input 
%type <crepr> func_body func_call main_func
%type <crepr> ident const var comp 
%type <crepr> expr if_stmt stmts parameters
%type <crepr> data_type
%type <crepr> instr assign_instr


//   PRIORITIES
%right '=' OP_ASGN_ADD OP_ASGN_SUB OP_ASGN_MUL OP_ASGN_DIV OP_ASGN_MOD
%right KW_NOT
%left  KW_AND
%left  KW_OR
%right OP_POWER
%left  OP_LS OP_LS_EQ OP_GRT OP_GRT_EQ OP_EQUALS OP_NOT_EQ
%left  '+' '-'
%left  '*' '/' '%'

%right OP_SIGN               //override gia telestes proshmou
%right POSINT ']'

%%
program: decl_list { 

 /* We have a successful parse! 
    Check for any errors and generate output. 
  */
  if (yyerror_count == 0) {
    puts(c_prologue);   // include the thetalib.h file
    printf("/* program */ \n\n"); 
    printf("%s\n\n", $1);
  }
}
;

ident:
        IDENTIFIER              {$$ = $1;}
      | IDENTIFIER ',' ident    {$$ = template("%s , %s", $1, $3);}
      ;

comp: 
      KW_COMP IDENTIFIER ':' comp_body KW_ENDCOMP ';' {$$ = template("")}     //TODO continue from here

const:
        KW_CONST IDENTIFIER '=' expr ':' data_type ';' {$$ = template("const %s %s = %s;\n", $6, $2, $4);}
      ;

expr:
      '+' expr %prec OP_SIGN      {$$ = template("+%s", $2);}
    | '-' expr %prec OP_SIGN      {$$ = template("-%s", $2);}
    | expr OP_POWER expr          {$$ = template("pow(%s, %s)", $1, $3);}
    | expr '+' expr               {$$ = template("%s + %s", $1, $3);}
    | expr '-' expr               {$$ = template("%s - %s", $1, $3);}
    | expr '*' expr               {$$ = template("%s * %s", $1, $3);}
    | expr '/' expr               {$$ = template("%s / %s", $1, $3);}
    | expr '%' expr               {$$ = template("%s %% %s", $1, $3);}
    | expr OP_EQUALS expr         {$$ = template("%s == %s", $1, $3);}
    | expr OP_NOT_EQ expr         {$$ = template("%s != %s", $1, $3);}
    | expr OP_LS expr             {$$ = template("%s < %s", $1, $3);}
    | expr OP_GRT expr            {$$ = template("%s > %s", $1, $3);}
    | expr OP_LS_EQ expr          {$$ = template("%s <= %s", $1, $3);}
    | expr OP_GRT_EQ expr         {$$ = template("%s >= %s", $1, $3);}
    | KW_NOT expr                 {$$ = template("NOT %s", $2);}
    | expr KW_AND expr            {$$ = template("%s && %s", $1, $3);}
    | expr KW_OR expr             {$$ = template("%s | %s", $1, $3);}
    | '('expr')'                  {$$ = template("(%s)", $2);} 
    | func_call                   {$$ = $1;}
    | KW_TRUE                     {$$ = template("1");}
    | KW_FALSE                    {$$ = template("0");}
    | IDENTIFIER                  {$$ = $1;}
    | IDENTIFIER '['expr']'       {$$ = template("%s[%s]", $1, $3);}
    | STRING                      {$$ = $1;}
    | REAL                        {$$ = $1;}    
    | POSINT                      {$$ = $1;}
    ;



var:
      ident ':' data_type ';'      {$$ = template("%s %s;\n", $3, $1);}
    | IDENTIFIER '[' POSINT ']' ':' data_type ';' {$$ = template("%s %s[%s];\n", $6, $1, $3);}
    | IDENTIFIER '[' ']' ':' data_type ';'  {$$ = template("%s %s[];\n", $5, $1);}
    // TODO w, z: Coordinates; coordinates is comp
    ;


func_body: 
            %empty                 {$$ = template("");}    
          | var func_body          {$$ = template("%s%s", $1, $2);}
          | const func_body        {$$ = template("%s%s", $1, $2);}
          | instr func_body        {$$ = template("%s%s", $1, $2);}
          | if_stmt func_body      {$$ = template("%s%s", $1, $2);}
          ;

func_decl:
            KW_DEF IDENTIFIER '(' parameters ')' '-' OP_GRT data_type ':' func_body KW_ENDDEF ';'  {$$ = template("%s %s (%s) {\n%s}\n\n", $8, $2, $4, $10);}
          | KW_DEF IDENTIFIER '(' parameters ')' '-' OP_GRT '[' ']' data_type ':' func_body KW_ENDDEF ';' {$$ = template("%s* %s (%s) {\n%s}\n\n", $10, $2, $4, $12);}
          | KW_DEF IDENTIFIER '(' parameters ')' ':' func_body KW_ENDDEF ';'  {$$ = template("void %s (%s) {\n%s}\n\n", $2, $4, $7);}
          ;

func_call:
            IDENTIFIER'('func_input')' {$$ = template("%s(%s)", $1, $3);}
          ;

func_input:
            %empty               {$$ = template("");}
          | expr                 {$$ = $1;}
          | expr ',' func_input  {$$ = template("%s , %s", $1, $3);}
          ;

parameters:
            %empty                                {$$ = template("\n");}
          | IDENTIFIER ':' data_type              {$$ = template("%s %s", $3, $1);}
          | IDENTIFIER '['']'':' data_type        {$$ = template("%s* %s", $5, $1);}
          | IDENTIFIER ':' data_type ',' parameters        {$$ = template("%s %s, %s", $3, $1, $5);}
          | IDENTIFIER '['']' ':' data_type ',' parameters {$$ = template("%s* %s, %s", $5, $1, $7);}
          ;

main_func:
            KW_DEF KW_MAIN '(' ')' ':' func_body KW_ENDDEF ';' {$$ = template("int main() {\n%s}\n", $6);}
         ;

decl_list:
            %empty                    {$$ = template("\n");}
          | decl_list comp            {$$ = template("%s%s", $1, $2);}
          | decl_list const           {$$ = template("%s%s", $1, $2);}
          | decl_list var             {$$ = template("%s%s", $1, $2);}
          | decl_list func_decl       {$$ = template("%s%s", $1, $2);}   
          | decl_list main_func       {$$ = template("%s%s", $1, $2);}
          ;

instr: 
        assign_instr ';'                                                {$$ = template("%s;\n", $1);}
      | KW_FOR IDENTIFIER KW_IN '[' expr':' expr ']'':' stmts KW_ENDFOR ';'           {$$ = template("for (%s = %s; %s<%s; %s+=1){\n%s}\n", $2, $5, $2, $7, $2, $10);}         
      | KW_FOR IDENTIFIER KW_IN '[' expr':' expr ':' expr']'':' stmts KW_ENDFOR ';'   {$$ = template("for (%s = %s; %s<%s; %s+=%s){\n%s}\n", $2, $5, $2, $7, $2, $9, $12);} 
      | KW_WHILE '(' expr ')'':' stmts KW_ENDWHILE ';'      {$$ = template("while (%s){\n%s}\n", $3, $6);}
      | KW_BREAK ';'                                        {$$ = template("break;\n");}
      | KW_CONTINUE ';'                                     {$$ = template("continue;\n");}
      | KW_RETURN ';'                                       {$$ = template("return;\n");}
      | KW_RETURN expr ';'                                  {$$ = template("return %s;\n", $2);}
      | func_call ';'                                       {$$ = template("%s;\n", $1);}
      ;

assign_instr:
              IDENTIFIER '=' expr  {$$ = template("%s = %s", $1, $3);}
            | IDENTIFIER '['expr']' '=' expr {$$ = template("%s[%s] = %s", $1, $3, $6);}
            | IDENTIFIER OP_ASGN_ADD expr  {$$ = template("%s += %s", $1, $3);}
            | IDENTIFIER OP_ASGN_SUB expr  {$$ = template("%s -= %s", $1, $3);}
            | IDENTIFIER OP_ASGN_MUL expr  {$$ = template("%s *= %s", $1, $3);}
            | IDENTIFIER OP_ASGN_DIV expr  {$$ = template("%s /= %s", $1, $3);}
            | IDENTIFIER OP_ASGN_MOD expr  {$$ = template("%s %= %s", $1, $3);}
            ;

stmts:
      instr         {$$ = template("%s", $1);}
    | instr stmts   {$$ = template("%s%s", $1, $2);}
    | if_stmt       {$$ = template("%s", $1);}
    | if_stmt stmts {$$ = template("%s%s", $1, $2);}
    ;


if_stmt: 
          KW_IF '('expr')'':' stmts KW_ENDIF ';'                          {$$ = template("if (%s){\n%s}\n", $3, $6);}
        | KW_IF '('expr')'':' stmts KW_ELSE ':'  stmts  KW_ENDIF ';'      {$$ = template("if (%s){\n%s} else {\n%s}\n", $3, $6, $9);}



data_type:
            KW_BOOL     {$$ = template("int");}
          | KW_INT      {$$ = template("int");}
          | KW_SCALAR   {$$ = template("double");} 
          | KW_STRING   {$$ = template("char*");}
          ;

%%
int main () {
  if ( yyparse() == 0 )
    printf("/* Accepted! */\n");
  else
    printf("/* Rejected! */\n");
}