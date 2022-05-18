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


%type <crepr> decl_list  func_input 
%type <crepr> func_body func_call main_func
%type <crepr> ident comp const var func_decl 
%type <crepr> expr stmt parameters
%type <crepr> data_type
%type <crepr> instr instr_list complex_instr assign_instr


//   PRIORITIES
%right '=' OP_ASGN_ADD OP_ASGN_SUB OP_ASGN_MUL OP_ASGN_DIV OP_ASGN_MOD
%right KW_NOT
%left  KW_AND
%left  KW_OR
%right OP_POWER
%right OP_SIGN     //override gia telestes proshmou
%left  OP_LS OP_LS_EQ OP_GRT OP_GRT_EQ OP_EQUALS OP_NOT_EQ
%left  '+' '-'
%left  '*' '/' '%'
%left '(' ')' '[' ']' '.'    //prosvash meloys syn8etoy typoy, klhsh synarthshs


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

expr:
      REAL        {$$ = $1;}
    | STRING      {$$ = $1;}
    | IDENTIFIER  {$$ = $1;}
    ;
      /*  KW_NOT expr                 {$$ = template("NOT %s", $2);}
      | '+' expr %prec SIGN_OP      {$$ = template("+%s", $2);}
      | '-' expr %prec SIGN_OP      {$$ = template("-%s", $2);}
      | expr TK_OP_POW expr         {$$ = template("pow(%s, %s)", $1, $3);}
      | expr '*' expr               {$$ = template("%s * %s", $1, $3);}
      | expr '/' expr               {$$ = template("%s / %s", $1, $3);}
      | expr '%' expr               {$$ = template("%s %% %s", $1, $3);}
      | expr '+' expr               {$$ = template("%s + %s", $1, $3);}
      | expr '-' expr               {$$ = template("%s - %s", $1, $3);}
      | expr TK_OP_EQUAL expr       {$$ = template("%s == %s", $1, $3);}
      | expr TK_OP_NOTEQ expr       {$$ = template("%s != %s", $1, $3);}
      | expr TK_OP_SMALLER expr     {$$ = template("%s < %s", $1, $3);}
      | expr TK_OP_BIGGER expr      {$$ = template("%s > %s", $1, $3);}
      | expr TK_OP_SMALLEQ expr     {$$ = template("%s <= %s", $1, $3);}
      | expr TK_OP_BIGEQ expr       {$$ = template("%s >= %s", $1, $3);}
      | expr KW_AND expr            {$$ = template("%s && %s", $1, $3);}
      | expr KW_OR expr             {$$ = template("%s | %s", $1, $3);}
      | '('expr')'                  {$$ = template("(%s)", $2);} 
      | func_call                   {$$ = $1;}
      
      | IDENT'['expr']'             {$$ = template("%s[%s]", $1, $3);}
      | STRING                      {$$ = $1;}
      | REAL                        {$$ = $1;}
      | NUMBER                      {$$ = $1;}
      | KW_TRUE                     {$$ = template("1");}
      | KW_FALSE                    {$$ = template("0");}
      | KW_NIL                      {$$ = template("NULL");}
      ;
*/

data_type:
            KW_BOOL     {$$ = template("int");}
          | KW_INT      {$$ = template("int");}
          | KW_SCALAR   {$$ = template("double");} 
          | KW_STRING   {$$ = template("char*");}
          ;
stmt:
      complex_instr {$$ = $1;}
    //| instr {$$ = template("{\n%s\n}", $1);} // Doesn't needed ??
    ;

complex_instr: 
              '{' instr_list '}'  {$$ = template("{\n%s\n}", $2);}
              ;

instr_list:
            instr              {$$ = $1;}
          | instr instr_list   {$$ = template("%s %s", $1, $2);}
          ;

ident:
        IDENTIFIER              {$$ = $1;}
      | IDENTIFIER ',' ident    {$$ = template("%s , %s", $1, $3);}
      ;


const:
        KW_CONST IDENTIFIER '=' expr ':' data_type ';' {$$ = template("const %s %s = %s;\n", $6, $2, $3);}
        ;

var:
      ident ':' data_type ';'      {$$ = template("%s %s;\n", $3, $1);}
    | IDENTIFIER '[' POSINT ']' ':' data_type ';'  {$$ = template("%s %s[%s];\n", $6, $1, $3);}
    | IDENTIFIER '[' ']' ':' data_type ';'  {$$ = template("%s %s[];\n", $5, $1);}
    // TODO w, z: Coordinates; coordinates is comp
    ;

instr: 
        assign_instr ';'                                            {$$ = template("%s;\n", $1);}
     // | KW_IF '('expr')'':' stmt %prec KW_ELSE_LOW_PRIOR            {$$ = template("if (%s) %s\n", $3, $5);}
      | KW_IF '('expr')'':' stmt KW_ELSE  stmt  KW_ENDIF ';'        {$$ = template("if (%s) %s else %s\n", $3, $5, $7);}         //TODO continue from here
      | KW_FOR '('assign_instr ';' assign_instr ')' stmt            {$$ = template("for (%s ; %s ; %s) %s\n", $3, $5, $7);}
      | KW_FOR '('assign_instr ';' expr ';' assign_instr ')' stmt   {$$ = template("for (%s ; %s ; %s) %s\n", $3, $5, $7, $9);}
      | KW_WHILE '(' expr ')' stmt                                  {$$ = template("while ( %s ) %s\n", $3, $5);}
      | KW_BREAK ';'                                                {$$ = template("break;\n");}
      | KW_CONTINUE ';'                                             {$$ = template("continue;\n");}
      | KW_RETURN ';'                                               {$$ = template("return;\n");}
      | KW_RETURN expr ';'                                          {$$ = template("return %s;\n", $2);}
      | func_call ';'                                               {$$ = template("%s;\n", $1);}
      ;

assign_instr:
              IDENTIFIER '=' expr  {$$ = template("%s = %s", $1, $3);}
            | IDENTIFIER OP_ASGN_ADD expr  {$$ = template("%s += %s", $1, $3);}
            | IDENTIFIER OP_ASGN_SUB expr  {$$ = template("%s -= %s", $1, $3);}
            | IDENTIFIER OP_ASGN_MUL expr  {$$ = template("%s *= %s", $1, $3);}
            | IDENTIFIER OP_ASGN_DIV expr  {$$ = template("%s /= %s", $1, $3);}
            | IDENTIFIER OP_ASGN_MOD expr  {$$ = template("%s %= %s", $1, $3);}
            | IDENTIFIER '[' POSINT ']' '=' expr {$$ = template("%s[%s] = %s", $1, $3, $6);}
            ;

func_body: 
            %empty                 {$$ = template("");}    
          | var func_body          {$$ = template("\t%s%s", $1, $2);}
          | const func_body        {$$ = template("\t%s%s", $1, $2);}
          | instr func_body        {$$ = template("\t%s%s", $1, $2);}
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
            %empty         {$$ = template("");}
          | expr           {$$ = $1;}
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
          | decl_list comp            {$$ = template("%s %s", $1, $2);}  //TODO comp
          | decl_list const           {$$ = template("%s %s", $1, $2);}
          | decl_list var             {$$ = template("%s %s", $1, $2);}
          | decl_list func_decl       {$$ = template("%s %s", $1, $2);}   
          | decl_list main_func       {$$ = template("%s %s", $1, $2);}
          ;



%%
int main () {
  if ( yyparse() == 0 )
    printf("/* Accepted! */\n");
  else
    printf("/* Rejected! */\n");
}