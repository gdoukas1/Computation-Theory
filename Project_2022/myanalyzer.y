%{
    #include <stdio.h>
    #include "cgen.h"

    extern int yylex(void);
    extern int line_num;
    char* func_buf = "";
    char* func_names = "";
    int comp_param = 0;
    int func_param = 0;
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
%token KW_VOID
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
%type <crepr> comp_IDENT comp_ident comp_var comp_func_decl comp_body
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
%left POSINT
%left  '(' ')' '[' ']' '.'

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

comp_IDENT: '#' IDENTIFIER     {$$ = template("%s", $2);}

comp_ident:
            comp_IDENT               {$$ = template("%s", $1);}
          | comp_IDENT '[' POSINT ']'{$$ = template("%s[%s]", $1, $3);}
          | comp_IDENT '[' ']'       {$$ = template("%s[]", $1);}
          | comp_IDENT ',' comp_ident     {$$ = template("%s , %s", $1, $3);}
          | comp_IDENT '[' POSINT ']' ',' comp_ident {$$ = template("%s[%s], %s", $1, $3, $6);}
          | comp_IDENT '[' ']'  ',' comp_ident       {$$ = template("%s[], %s", $1, $5);}
          ;


comp_var: 
          comp_ident ':' data_type ';'      {$$ = template("%s %s;\n", $3, $1);}
        | comp_ident ':' IDENTIFIER ';'     {$$ = template("%s %s;\n", $3, $1);}
        ;

comp_func_decl:
            KW_DEF IDENTIFIER '(' parameters ')' '-' OP_GRT data_type ':' func_body KW_ENDDEF ';'  
            {
              if (comp_param == 0){
                $$ = template("%s(*%s)(SELF );\n",$8,$2);
                func_buf = template("%s\n%s %s (SELF ) {\n%s}\n\n", func_buf, $8, $2, $10);} 
              else {
                $$ = template("%s(*%s)(SELF, %s);\n",$8,$2,$4);
                func_buf = template("%s\n%s %s (SELF, %s) {\n%s}\n\n", func_buf, $8, $2, $4, $10);} 

              if (func_names == "")
                func_names = template(".%s=%s", $2, $2);
              else 
                func_names = template("%s, .%s=%s", func_names, $2, $2);
            }
          
          | KW_DEF IDENTIFIER '(' parameters ')' '-' OP_GRT '[' ']' data_type ':' func_body KW_ENDDEF ';' 
          {
            $$ = template("%s* %s (%s) {\n%s}\n\n", $10, $2, $4, $12);
            
            if (comp_param == 0){
              $$ = template("%s* (*%s)(SELF );\n", $10, $2);
              func_buf = template("%s\n%s* %s (SELF ) {\n%s}\n\n", func_buf, $10, $2, $12);} 
            else {
              $$ = template("%s* (*%s)(SELF, %s);\n", $10, $2, $4);
              func_buf = template("%s\n%s* %s (SELF, %s) {\n%s}\n\n", func_buf, $10, $2, $4, $12);} 

            if (func_names == "")
              func_names = template(".%s=%s", $2, $2);
            else 
              func_names = template("%s, .%s=%s", func_names, $2, $2);
          }
          
          | KW_DEF IDENTIFIER '(' parameters ')' ':' func_body KW_ENDDEF ';' 
          {
            if (comp_param == 0){
              $$ = template("void (*%s)(SELF );\n",$2);
              func_buf = template("%s\nvoid %s (SELF ) {\n%s}\n\n", func_buf, $2, $7);} 
            else {
              $$ = template("void (*%s)(SELF, %s);\n", $2, $4);
              func_buf = template("%s\nvoid %s (SELF, %s) {\n%s}\n\n", func_buf, $2, $4, $7);} 
        
            if (func_names == "")
              func_names = template(".%s=%s", $2, $2);
            else 
              func_names = template("%s, .%s=%s", func_names, $2, $2);
          }
          ;

comp_body: 
            comp_var                    {$$ = $1;}
          | comp_body comp_var          {$$ = template("%s%s", $1, $2);}
          | comp_body comp_func_decl    {$$ = template("%s%s", $1, $2);}   
          ;


comp: 
      KW_COMP IDENTIFIER ':' comp_body KW_ENDCOMP ';' {
      $$ = template("#define SELF struct %s *self \ntypedef struct %s {\n%s} %s;\n\n%sconst %s ctor_%s = {%s};\n#undef SELF\n\n", $2, $2, $4, $2, func_buf, $2, $2, func_names);
      func_buf = "";
      func_names = "";
      comp_param = 0;}


ident:
        IDENTIFIER               {$$ = $1;}
      | IDENTIFIER '[' POSINT ']'{$$ = template("%s[%s]", $1, $3);}
      | IDENTIFIER '[' ']'       {$$ = template("%s[]", $1);}
      | IDENTIFIER ',' ident     {$$ = template("%s, %s", $1, $3);}
      | IDENTIFIER '[' POSINT ']' ',' ident {$$ = template("%s[%s], %s", $1, $3, $6);}
      | IDENTIFIER '[' ']'  ',' ident       {$$ = template("%s[], %s", $1, $5);}
      ;

const:
        KW_CONST IDENTIFIER '=' expr ':' data_type ';' {$$ = template("const %s %s = %s;\n", $6, $2, $4);}
      ;

expr:
      '+' expr %prec OP_SIGN          {$$ = template("+%s", $2);}
    | '-' expr %prec OP_SIGN          {$$ = template("-%s", $2);}
    | expr OP_POWER expr              {$$ = template("pow(%s, %s)", $1, $3);}
    | expr '+' expr                   {$$ = template("%s + %s", $1, $3);}
    | expr '-' expr                   {$$ = template("%s - %s", $1, $3);}
    | expr '*' expr                   {$$ = template("%s * %s", $1, $3);}
    | expr '/' expr                   {$$ = template("%s / %s", $1, $3);}
    | expr '%' expr                   {$$ = template("%s %% %s", $1, $3);}
    | expr OP_EQUALS expr             {$$ = template("%s == %s", $1, $3);}
    | expr OP_NOT_EQ expr             {$$ = template("%s != %s", $1, $3);}
    | expr OP_LS expr                 {$$ = template("%s < %s", $1, $3);}
    | expr OP_GRT expr                {$$ = template("%s > %s", $1, $3);}
    | expr OP_LS_EQ expr              {$$ = template("%s <= %s", $1, $3);}
    | expr OP_GRT_EQ expr             {$$ = template("%s >= %s", $1, $3);}
    | KW_NOT expr                     {$$ = template("NOT %s", $2);}
    | expr KW_AND expr                {$$ = template("%s && %s", $1, $3);}
    | expr KW_OR expr                 {$$ = template("%s | %s", $1, $3);}
    | '('expr')'                      {$$ = template("(%s)", $2);} 
    | func_call                       {$$ = $1;}
    | KW_TRUE                         {$$ = template("1");}
    | KW_FALSE                        {$$ = template("0");}
    | IDENTIFIER '['expr']'           {$$ = template("%s[%s]", $1, $3);}
    | comp_IDENT                      {$$ = template("self->%s", $1);}
    | comp_IDENT '['expr']'           {$$ = template("self->%s[%s]", $1, $3);}
    | expr '.'  comp_IDENT            {$$ = template("%s.%s", $1, $3);}
    | expr '.'  comp_IDENT '['expr']' {$$ = template("%s.%s[%s]", $1, $3, $5);}
    | IDENTIFIER                      {$$ = $1;}
    | STRING                          {$$ = $1;}
    | REAL                            {$$ = $1;}    
    | POSINT                          {$$ = $1;}
    ;



var:
      ident ':' data_type ';'      {$$ = template("%s %s;\n", $3, $1);}
    | ident ':' IDENTIFIER ';'     {$$ = template("%s %s=ctor_%s;\n", $3, $1, $3);}
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
          | KW_DEF IDENTIFIER '(' parameters ')' '-' OP_GRT '[' ']' data_type ':' func_body KW_ENDDEF ';' {$$ = template("%s *%s (%s) {\n%s}\n\n", $10, $2, $4, $12);}
          | KW_DEF IDENTIFIER '(' parameters ')' ':' func_body KW_ENDDEF ';'  {$$ = template("void %s (%s) {\n%s}\n\n", $2, $4, $7);}
          | KW_DEF IDENTIFIER '(' parameters ')' '-' OP_GRT IDENTIFIER ':' func_body KW_ENDDEF ';'  {$$ = template("%s %s (%s) {\n%s}\n\n", $8, $2, $4, $10);}
          ;

func_call:
            IDENTIFIER'('func_input')' {$$ = template("%s(%s)", $1, $3);}
          | expr '.'  IDENTIFIER '('func_input')'  
          {
            if (func_param == 0)
              $$ = template("%s.%s(&%s)", $1, $3, $1);
             else 
              $$ = template("%s.%s(&%s, %s);\n",$1,$3,$1,$5);
          }
          ;

func_input:
            %empty               {$$ = template(""); func_param = 0;}
          | expr                 {$$ = $1; func_param += 1;}
          | expr ',' func_input  {$$ = template("%s, %s", $1, $3);}
          ;

parameters:
            %empty                                {$$ = template(""); comp_param = 0;}
          | IDENTIFIER ':' data_type              {$$ = template("%s %s", $3, $1); comp_param += 1;}
          | IDENTIFIER ':' IDENTIFIER             {$$ = template("%s %s", $3, $1); comp_param += 1;}
          | IDENTIFIER '['']'':' data_type        {$$ = template("%s *%s", $5, $1); comp_param += 1;}
          | IDENTIFIER ':' data_type ',' parameters        {$$ = template("%s %s, %s", $3, $1, $5);}
          | IDENTIFIER ':' IDENTIFIER ',' parameters        {$$ = template("%s %s, %s", $3, $1, $5);}
          | IDENTIFIER '['']' ':' data_type ',' parameters {$$ = template("%s *%s, %s", $5, $1, $7);}
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
      | KW_FOR comp_IDENT KW_IN '[' expr':' expr ']'':' stmts KW_ENDFOR ';'           {$$ = template("for (%s = %s; %s<%s; %s+=1){\n%s}\n", $2, $5, $2, $7, $2, $10);}         
      | KW_FOR comp_IDENT KW_IN '[' expr':' expr ':' expr']'':' stmts KW_ENDFOR ';'   {$$ = template("for (%s = %s; %s<%s; %s+=%s){\n%s}\n", $2, $5, $2, $7, $2, $9, $12);} 
      | KW_WHILE '(' expr ')'':' stmts KW_ENDWHILE ';'      {$$ = template("while (%s){\n%s}\n", $3, $6);}
      | KW_BREAK ';'                                        {$$ = template("break;\n");}
      | KW_CONTINUE ';'                                     {$$ = template("continue;\n");}
      | KW_RETURN ';'                                       {$$ = template("return;\n");}
      | KW_RETURN expr ';'                                  {$$ = template("return %s;\n", $2);}
      | func_call ';'                                       {$$ = template("%s;\n", $1);}
      ;

assign_instr:
              expr '=' expr            {$$ = template("%s = %s", $1, $3);}
            | expr OP_ASGN_ADD expr    {$$ = template("%s += %s", $1, $3);}
            | expr OP_ASGN_SUB expr    {$$ = template("%s -= %s", $1, $3);}
            | expr OP_ASGN_MUL expr    {$$ = template("%s *= %s", $1, $3);}
            | expr OP_ASGN_DIV expr    {$$ = template("%s /= %s", $1, $3);}
            | expr OP_ASGN_MOD expr    {$$ = template("%s %= %s", $1, $3);}
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
          | KW_STRING   {$$ = template("StringType");}
          | KW_VOID     {$$ = template("void");}

%%
int main () {
  if ( yyparse() == 0 )
    printf("/* Accepted! */\n");
  else
    printf("/* Rejected! */\n");
}