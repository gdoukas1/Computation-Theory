/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_MYANALYZER_TAB_H_INCLUDED
# define YY_YY_MYANALYZER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    POSINT = 259,
    REAL = 260,
    STRING = 261,
    KW_INT = 262,
    KW_SCALAR = 263,
    KW_STRING = 264,
    KW_VOID = 265,
    KW_BOOL = 266,
    KW_TRUE = 267,
    KW_FALSE = 268,
    KW_CONST = 269,
    KW_IF = 270,
    KW_ELSE = 271,
    KW_ENDIF = 272,
    KW_FOR = 273,
    KW_IN = 274,
    KW_ENDFOR = 275,
    KW_WHILE = 276,
    KW_ENDWHILE = 277,
    KW_BREAK = 278,
    KW_CONTINUE = 279,
    KW_NOT = 280,
    KW_AND = 281,
    KW_OR = 282,
    KW_DEF = 283,
    KW_ENDDEF = 284,
    KW_COMP = 285,
    KW_ENDCOMP = 286,
    KW_RETURN = 287,
    KW_MAIN = 288,
    OP_ASGN_ADD = 289,
    OP_ASGN_SUB = 290,
    OP_ASGN_MUL = 291,
    OP_ASGN_DIV = 292,
    OP_ASGN_MOD = 293,
    OP_POWER = 294,
    OP_EQUALS = 295,
    OP_NOT_EQ = 296,
    OP_LS = 297,
    OP_LS_EQ = 298,
    OP_GRT = 299,
    OP_GRT_EQ = 300,
    OP_SIGN = 301
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "myanalyzer.y"

    char* crepr;

#line 108 "myanalyzer.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MYANALYZER_TAB_H_INCLUDED  */
