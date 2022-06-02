/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "myanalyzer.y"

    #include <stdio.h>
    #include "cgen.h"

    extern int yylex(void);
    extern int line_num;
    char* func_buf = "";
    char* func_names = "";
    int comp_param = 0;
    int func_param = 0;

#line 82 "myanalyzer.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 185 "myanalyzer.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MYANALYZER_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   860

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  113
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  302

#define YYUNDEFTOK  2
#define YYMAXUTOK   301


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,    58,     2,    51,     2,     2,
      53,    54,    49,    47,    59,    48,    57,    50,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    60,    61,
       2,    46,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    55,     2,    56,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    52
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    96,    96,   109,   112,   113,   114,   115,   116,   117,
     122,   123,   127,   142,   159,   176,   177,   178,   183,   191,
     192,   193,   194,   195,   196,   200,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   239,   240,   245,   246,
     247,   248,   249,   253,   254,   255,   256,   260,   261,   271,
     272,   273,   277,   278,   279,   280,   281,   282,   283,   287,
     291,   292,   293,   294,   295,   296,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   314,   315,   316,
     317,   318,   319,   323,   324,   325,   326,   331,   332,   337,
     338,   339,   341,   342
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "POSINT", "REAL", "STRING",
  "KW_INT", "KW_SCALAR", "KW_STRING", "KW_VOID", "KW_BOOL", "KW_TRUE",
  "KW_FALSE", "KW_CONST", "KW_IF", "KW_ELSE", "KW_ENDIF", "KW_FOR",
  "KW_IN", "KW_ENDFOR", "KW_WHILE", "KW_ENDWHILE", "KW_BREAK",
  "KW_CONTINUE", "KW_NOT", "KW_AND", "KW_OR", "KW_DEF", "KW_ENDDEF",
  "KW_COMP", "KW_ENDCOMP", "KW_RETURN", "KW_MAIN", "OP_ASGN_ADD",
  "OP_ASGN_SUB", "OP_ASGN_MUL", "OP_ASGN_DIV", "OP_ASGN_MOD", "OP_POWER",
  "OP_EQUALS", "OP_NOT_EQ", "OP_LS", "OP_LS_EQ", "OP_GRT", "OP_GRT_EQ",
  "'='", "'+'", "'-'", "'*'", "'/'", "'%'", "OP_SIGN", "'('", "')'", "'['",
  "']'", "'.'", "'#'", "','", "':'", "';'", "$accept", "program",
  "comp_IDENT", "comp_ident", "comp_var", "comp_func_decl", "comp_body",
  "comp", "ident", "const", "expr", "var", "func_body", "func_decl",
  "func_call", "func_input", "parameters", "main_func", "decl_list",
  "instr", "assign_instr", "stmts", "if_stmt", "data_type", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,    61,    43,    45,    42,
      47,    37,   301,    40,    41,    91,    93,    46,    35,    44,
      58,    59
};
# endif

#define YYPACT_NINF (-197)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-20)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -197,     3,    87,  -197,   -27,    14,    10,    23,  -197,     9,
    -197,  -197,  -197,  -197,    11,    31,    17,    33,    34,    38,
     246,    56,    47,  -197,   326,   110,    72,    76,    77,  -197,
    -197,  -197,  -197,  -197,    79,    78,    31,    50,  -197,  -197,
    -197,  -197,  -197,   326,   326,   326,   326,   138,    88,   427,
    -197,   -20,    90,    91,    41,    97,  -197,   -17,  -197,  -197,
      31,  -197,   326,   326,   765,   101,   101,   557,  -197,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,     2,   345,   103,   339,   -42,   256,
      12,    76,   582,   157,   102,  -197,  -197,  -197,   505,   108,
     583,  -197,   609,   784,   803,   803,   195,   195,   195,   195,
     195,   195,    59,    59,   101,   101,   101,   112,   113,   114,
     117,   126,   133,   129,   256,   -30,   140,     7,   141,   134,
     139,   225,   256,   531,   256,   173,   142,   256,   143,   256,
     149,   148,  -197,   147,   150,   156,  -197,   326,  -197,  -197,
    -197,   326,   326,  -197,   345,   110,   110,   180,   185,   312,
     326,   196,   197,   326,  -197,  -197,  -197,   349,  -197,   326,
     326,   326,   326,   326,   326,  -197,   158,  -197,  -197,  -197,
    -197,   161,    76,  -197,  -197,   110,  -197,   168,   635,   164,
    -197,  -197,   166,   176,   174,   163,    56,   661,   181,   192,
     687,  -197,   765,   765,   765,   765,   765,   765,  -197,    76,
    -197,   186,  -197,  -197,   110,   256,   345,   256,  -197,   191,
     326,   326,   198,  -197,   -36,  -197,   234,   204,   236,   287,
     453,   479,   287,   222,   256,   206,   256,   214,   287,    63,
     287,   326,   326,   254,    74,   253,  -197,   255,  -197,  -197,
     227,   224,  -197,   375,   401,   228,   238,   235,   237,   240,
     287,  -197,   247,   326,   260,   326,  -197,   345,   256,  -197,
    -197,   279,   287,   713,   287,   739,   261,   268,   245,   293,
     262,   303,   266,   256,   267,  -197,   272,   287,   275,   287,
     298,  -197,  -197,   321,  -197,   323,   283,   296,   297,  -197,
    -197,  -197
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      80,     0,     2,     1,    19,     0,     0,     0,    81,     0,
      82,    83,    84,    85,     0,     0,     0,     0,     0,     0,
       0,     0,    21,    22,     0,    72,     0,     0,     0,   110,
     111,   112,   113,   109,     0,    20,     0,    52,    55,    54,
      53,    45,    46,     0,     0,     0,     0,     0,    48,     0,
      44,     0,     0,     0,     4,     0,    15,     0,    57,    56,
       0,    24,    69,     0,    40,    26,    27,     0,     3,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    58,
       0,     0,     0,     0,     0,    16,    17,    23,    70,     0,
       0,    43,     0,    41,    42,    28,    34,    35,    36,    38,
      37,    39,    29,    30,    31,    32,    33,     0,    50,     0,
       0,    74,    73,     0,    58,    52,     0,     0,     0,     0,
       0,     0,    58,     0,    58,     0,    44,    58,     0,    58,
       0,     6,     7,     0,     0,     0,    18,    69,    67,    47,
      49,    69,     0,    25,     0,    72,    72,     0,     0,     0,
       0,     0,     0,     0,    92,    93,    94,     0,    60,     0,
       0,     0,     0,     0,     0,    59,     0,    96,    61,    86,
      62,     5,     0,    11,    10,    72,    71,     0,     0,    75,
      77,    76,     0,     0,     0,     0,    55,     0,     0,     0,
       0,    95,    98,    99,   100,   101,   102,    97,    79,     0,
       9,     0,    68,    51,    72,    58,     0,    58,    65,     0,
       0,     0,     0,     8,     0,    78,     0,     0,     0,     0,
       0,     0,     0,     0,    58,     0,    58,     0,   103,     0,
     105,     0,     0,     0,     0,     0,    66,     0,    63,   104,
       0,     0,   106,     0,     0,     0,     0,     0,     0,     0,
       0,   107,     0,     0,     0,     0,    91,     0,    58,    14,
      64,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    58,     0,   108,     0,     0,     0,     0,
       0,    12,    87,     0,    89,     0,     0,     0,     0,    13,
      88,    90
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -197,  -197,     4,   -90,   304,  -197,  -197,  -197,    58,   360,
     -24,   361,   -35,  -197,   -62,   -26,  -148,  -197,  -197,  -196,
    -197,  -108,  -118,   -83
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    48,    55,    56,    96,    57,     8,     9,   132,
     133,   134,   135,    12,    50,    99,    52,    13,     2,   137,
     138,   239,   139,    34
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      49,   142,   119,     3,   122,   117,   123,   190,   191,   144,
     161,    93,   233,    17,    94,    21,   140,    16,   124,    64,
      65,    66,    67,    62,   234,   159,    19,   136,    14,    15,
     -19,    54,    15,   238,     4,    86,   238,   211,    98,   100,
      87,    47,   238,    18,   238,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
      47,    54,   136,    24,   238,    47,   225,    22,   141,    20,
     136,   189,   136,    23,   194,   136,   238,   136,   238,   250,
     251,    29,    30,    31,    32,    33,    25,    26,   118,   158,
       4,   238,   210,   238,    61,    54,    90,   168,    27,   175,
      91,     5,   178,    62,   180,    63,    36,   167,    81,    82,
      83,   240,    35,    51,   240,     6,    84,     7,    97,   223,
     240,   186,   240,    98,   243,   187,    53,    98,   188,   256,
     249,   162,   252,   227,    47,   100,   197,    60,    58,   200,
      59,    68,   240,    69,    88,   202,   203,   204,   205,   206,
     207,    89,   271,   136,   240,   136,   240,    92,    84,   120,
     145,   257,   148,   146,   279,   151,   281,   136,   152,   240,
     136,   240,   136,   157,   136,   153,   136,   154,   136,   293,
     226,   295,   228,   192,   276,   155,    54,    29,    30,    31,
      32,    33,   156,   160,   163,   164,   230,   231,   136,   245,
     165,   247,   176,   177,   179,   181,   136,   182,   183,   185,
     136,   184,   136,    54,   195,   198,   199,   253,   254,   208,
     209,   136,   212,   214,   218,   136,   215,   136,    37,    38,
      39,    40,   216,   277,   217,   193,   220,    41,    42,   273,
     224,   275,    79,    80,    81,    82,    83,   221,   290,    28,
      43,   229,    84,    29,    30,    31,    32,    33,   232,   125,
      38,    39,    40,   235,   236,   237,   244,   246,    41,    42,
       5,   126,    44,    45,   127,   248,   255,   128,    46,   129,
     130,    43,   258,    47,   259,   261,   166,   260,   131,   266,
      37,    38,    39,    40,   267,   268,   278,   284,   269,    41,
      42,   270,   126,    44,    45,   127,   285,   272,   128,    46,
     129,   130,    43,   286,    47,    37,   196,    39,    40,   131,
     274,   283,   287,   288,    41,    42,   289,   296,   291,    37,
      38,    39,    40,   292,    44,    45,   294,    43,    41,    42,
      46,   297,   121,   298,   299,    47,    29,    30,    31,    32,
      33,    43,    29,    30,    31,    32,    33,   300,   301,    44,
      45,    95,    10,    11,     0,    46,     0,     0,    22,     0,
      47,     0,     0,    44,    45,    70,    71,     0,     0,    46,
       0,     0,     0,     0,    47,     0,     0,     0,    72,    73,
      74,    75,    76,    77,    78,     0,    79,    80,    81,    82,
      83,    70,    71,     0,     0,     0,    84,     0,     0,     0,
     201,     0,     0,     0,    72,    73,    74,    75,    76,    77,
      78,     0,    79,    80,    81,    82,    83,    70,    71,     0,
       0,   262,    84,     0,     0,   263,     0,     0,     0,     0,
      72,    73,    74,    75,    76,    77,    78,     0,    79,    80,
      81,    82,    83,    70,    71,     0,     0,   264,    84,     0,
       0,   265,     0,     0,     0,     0,    72,    73,    74,    75,
      76,    77,    78,     0,    79,    80,    81,    82,    83,    70,
      71,     0,     0,     0,    84,     0,     0,    85,     0,     0,
       0,     0,    72,    73,    74,    75,    76,    77,    78,     0,
      79,    80,    81,    82,    83,    70,    71,     0,     0,     0,
      84,     0,     0,   241,     0,     0,     0,     0,    72,    73,
      74,    75,    76,    77,    78,     0,    79,    80,    81,    82,
      83,    70,    71,     0,     0,     0,    84,     0,     0,   242,
       0,     0,     0,     0,    72,    73,    74,    75,    76,    77,
      78,     0,    79,    80,    81,    82,    83,    70,    71,     0,
       0,     0,    84,     0,   147,   169,   170,   171,   172,   173,
      72,    73,    74,    75,    76,    77,    78,   174,    79,    80,
      81,    82,    83,    70,    71,   143,     0,     0,    84,    29,
      30,    31,    32,    33,     0,     0,    72,    73,    74,    75,
      76,    77,    78,     0,    79,    80,    81,    82,    83,    70,
      71,   101,     0,     0,    84,     0,     0,     0,     0,     0,
       0,     0,    72,    73,    74,    75,    76,    77,    78,     0,
      79,    80,    81,    82,    83,    70,    71,     0,     0,   149,
      84,     0,     0,     0,     0,     0,     0,     0,    72,    73,
      74,    75,    76,    77,    78,     0,    79,    80,    81,    82,
      83,    70,    71,     0,     0,   150,    84,     0,     0,     0,
       0,     0,     0,     0,    72,    73,    74,    75,    76,    77,
      78,     0,    79,    80,    81,    82,    83,    70,    71,     0,
       0,   213,    84,     0,     0,     0,     0,     0,     0,     0,
      72,    73,    74,    75,    76,    77,    78,     0,    79,    80,
      81,    82,    83,    70,    71,   219,     0,     0,    84,     0,
       0,     0,     0,     0,     0,     0,    72,    73,    74,    75,
      76,    77,    78,     0,    79,    80,    81,    82,    83,    70,
      71,   222,     0,     0,    84,     0,     0,     0,     0,     0,
       0,     0,    72,    73,    74,    75,    76,    77,    78,     0,
      79,    80,    81,    82,    83,    70,    71,     0,     0,   280,
      84,     0,     0,     0,     0,     0,     0,     0,    72,    73,
      74,    75,    76,    77,    78,     0,    79,    80,    81,    82,
      83,    70,    71,     0,     0,   282,    84,     0,     0,     0,
       0,     0,     0,     0,    72,    73,    74,    75,    76,    77,
      78,    71,    79,    80,    81,    82,    83,     0,     0,     0,
       0,     0,    84,    72,    73,    74,    75,    76,    77,    78,
       0,    79,    80,    81,    82,    83,     0,     0,     0,     0,
       0,    84,    72,    73,    74,    75,    76,    77,    78,     0,
      79,    80,    81,    82,    83,     0,     0,     0,     0,     0,
      84
};

static const yytype_int16 yycheck[] =
{
      24,    91,    85,     0,    87,     3,    48,   155,   156,    92,
       3,    28,    48,     3,    31,     4,     4,     3,    60,    43,
      44,    45,    46,    53,    60,    55,     3,    89,    55,    59,
      60,    27,    59,   229,     3,    55,   232,   185,    62,    63,
      60,    58,   238,    33,   240,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      58,    57,   124,    46,   260,    58,   214,    56,    56,    60,
     132,   154,   134,    15,   157,   137,   272,   139,   274,    16,
      17,     7,     8,     9,    10,    11,    53,    53,    84,   124,
       3,   287,   182,   289,    36,    91,    55,   132,    60,   134,
      59,    14,   137,    53,   139,    55,    59,   131,    49,    50,
      51,   229,    56,     3,   232,    28,    57,    30,    60,   209,
     238,   147,   240,   147,   232,   151,    54,   151,   152,    55,
     238,   127,   240,   216,    58,   159,   160,    59,    61,   163,
      61,     3,   260,    55,    54,   169,   170,   171,   172,   173,
     174,    60,   260,   215,   272,   217,   274,    60,    57,    56,
       3,   244,    54,    61,   272,    53,   274,   229,    55,   287,
     232,   289,   234,    44,   236,    61,   238,    60,   240,   287,
     215,   289,   217,     3,   267,    59,   182,     7,     8,     9,
      10,    11,    59,    53,    53,    61,   220,   221,   260,   234,
      61,   236,    29,    61,    61,    56,   268,    59,    61,    53,
     272,    61,   274,   209,    29,    19,    19,   241,   242,    61,
      59,   283,    54,    59,    61,   287,    60,   289,     3,     4,
       5,     6,    56,   268,    60,    55,    55,    12,    13,   263,
      54,   265,    47,    48,    49,    50,    51,    55,   283,     3,
      25,    60,    57,     7,     8,     9,    10,    11,    60,     3,
       4,     5,     6,    29,    60,    29,    44,    61,    12,    13,
      14,    15,    47,    48,    18,    61,    22,    21,    53,    23,
      24,    25,    29,    58,    29,    61,    61,    60,    32,    61,
       3,     4,     5,     6,    56,    60,    17,    29,    61,    12,
      13,    61,    15,    47,    48,    18,    61,    60,    21,    53,
      23,    24,    25,    20,    58,     3,     4,     5,     6,    32,
      60,    60,    60,    20,    12,    13,    60,    29,    61,     3,
       4,     5,     6,    61,    47,    48,    61,    25,    12,    13,
      53,    20,     3,    20,    61,    58,     7,     8,     9,    10,
      11,    25,     7,     8,     9,    10,    11,    61,    61,    47,
      48,    57,     2,     2,    -1,    53,    -1,    -1,    56,    -1,
      58,    -1,    -1,    47,    48,    26,    27,    -1,    -1,    53,
      -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    39,    40,
      41,    42,    43,    44,    45,    -1,    47,    48,    49,    50,
      51,    26,    27,    -1,    -1,    -1,    57,    -1,    -1,    -1,
      61,    -1,    -1,    -1,    39,    40,    41,    42,    43,    44,
      45,    -1,    47,    48,    49,    50,    51,    26,    27,    -1,
      -1,    56,    57,    -1,    -1,    60,    -1,    -1,    -1,    -1,
      39,    40,    41,    42,    43,    44,    45,    -1,    47,    48,
      49,    50,    51,    26,    27,    -1,    -1,    56,    57,    -1,
      -1,    60,    -1,    -1,    -1,    -1,    39,    40,    41,    42,
      43,    44,    45,    -1,    47,    48,    49,    50,    51,    26,
      27,    -1,    -1,    -1,    57,    -1,    -1,    60,    -1,    -1,
      -1,    -1,    39,    40,    41,    42,    43,    44,    45,    -1,
      47,    48,    49,    50,    51,    26,    27,    -1,    -1,    -1,
      57,    -1,    -1,    60,    -1,    -1,    -1,    -1,    39,    40,
      41,    42,    43,    44,    45,    -1,    47,    48,    49,    50,
      51,    26,    27,    -1,    -1,    -1,    57,    -1,    -1,    60,
      -1,    -1,    -1,    -1,    39,    40,    41,    42,    43,    44,
      45,    -1,    47,    48,    49,    50,    51,    26,    27,    -1,
      -1,    -1,    57,    -1,    59,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    26,    27,     3,    -1,    -1,    57,     7,
       8,     9,    10,    11,    -1,    -1,    39,    40,    41,    42,
      43,    44,    45,    -1,    47,    48,    49,    50,    51,    26,
      27,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,    42,    43,    44,    45,    -1,
      47,    48,    49,    50,    51,    26,    27,    -1,    -1,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,    42,    43,    44,    45,    -1,    47,    48,    49,    50,
      51,    26,    27,    -1,    -1,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,    42,    43,    44,
      45,    -1,    47,    48,    49,    50,    51,    26,    27,    -1,
      -1,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,    42,    43,    44,    45,    -1,    47,    48,
      49,    50,    51,    26,    27,    54,    -1,    -1,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,    42,
      43,    44,    45,    -1,    47,    48,    49,    50,    51,    26,
      27,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,    42,    43,    44,    45,    -1,
      47,    48,    49,    50,    51,    26,    27,    -1,    -1,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,    42,    43,    44,    45,    -1,    47,    48,    49,    50,
      51,    26,    27,    -1,    -1,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,    42,    43,    44,
      45,    27,    47,    48,    49,    50,    51,    -1,    -1,    -1,
      -1,    -1,    57,    39,    40,    41,    42,    43,    44,    45,
      -1,    47,    48,    49,    50,    51,    -1,    -1,    -1,    -1,
      -1,    57,    39,    40,    41,    42,    43,    44,    45,    -1,
      47,    48,    49,    50,    51,    -1,    -1,    -1,    -1,    -1,
      57
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    63,    80,     0,     3,    14,    28,    30,    69,    70,
      71,    73,    75,    79,    55,    59,     3,     3,    33,     3,
      60,     4,    56,    70,    46,    53,    53,    60,     3,     7,
       8,     9,    10,    11,    85,    56,    59,     3,     4,     5,
       6,    12,    13,    25,    47,    48,    53,    58,    64,    72,
      76,     3,    78,    54,    64,    65,    66,    68,    61,    61,
      59,    70,    53,    55,    72,    72,    72,    72,     3,    55,
      26,    27,    39,    40,    41,    42,    43,    44,    45,    47,
      48,    49,    50,    51,    57,    60,    55,    60,    54,    60,
      55,    59,    60,    28,    31,    66,    67,    70,    72,    77,
      72,    54,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,     3,    64,    85,
      56,     3,    85,    48,    60,     3,    15,    18,    21,    23,
      24,    32,    71,    72,    73,    74,    76,    81,    82,    84,
       4,    56,    65,     3,    85,     3,    61,    59,    54,    56,
      56,    53,    55,    61,    60,    59,    59,    44,    74,    55,
      53,     3,    64,    53,    61,    61,    61,    72,    74,    34,
      35,    36,    37,    38,    46,    74,    29,    61,    74,    61,
      74,    56,    59,    61,    61,    53,    77,    77,    72,    85,
      78,    78,     3,    55,    85,    29,     4,    72,    19,    19,
      72,    61,    72,    72,    72,    72,    72,    72,    61,    59,
      65,    78,    54,    56,    59,    60,    56,    60,    61,    54,
      55,    55,    54,    65,    54,    78,    74,    85,    74,    60,
      72,    72,    60,    48,    60,    29,    60,    29,    81,    83,
      84,    60,    60,    83,    44,    74,    61,    74,    61,    83,
      16,    17,    83,    72,    72,    22,    55,    85,    29,    29,
      60,    61,    56,    60,    56,    60,    61,    56,    60,    61,
      61,    83,    60,    72,    60,    72,    85,    74,    17,    83,
      56,    83,    56,    60,    29,    61,    20,    60,    20,    60,
      74,    61,    61,    83,    61,    83,    29,    20,    20,    61,
      61,    61
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    62,    63,    64,    65,    65,    65,    65,    65,    65,
      66,    66,    67,    67,    67,    68,    68,    68,    69,    70,
      70,    70,    70,    70,    70,    71,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    73,    73,    74,    74,
      74,    74,    74,    75,    75,    75,    75,    76,    76,    77,
      77,    77,    78,    78,    78,    78,    78,    78,    78,    79,
      80,    80,    80,    80,    80,    80,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    82,    82,    82,
      82,    82,    82,    83,    83,    83,    83,    84,    84,    85,
      85,    85,    85,    85
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     4,     3,     3,     6,     5,
       4,     4,    12,    14,     9,     1,     2,     2,     6,     1,
       4,     3,     3,     6,     5,     7,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     3,     3,     3,     1,     1,     1,     4,     1,     4,
       3,     6,     1,     1,     1,     1,     4,     4,     0,     2,
       2,     2,     2,    12,    14,     9,    12,     4,     6,     0,
       1,     3,     0,     3,     3,     5,     5,     5,     7,     8,
       0,     2,     2,     2,     2,     2,     2,    12,    14,    12,
      14,     8,     2,     2,     2,     3,     2,     3,     3,     3,
       3,     3,     3,     1,     2,     1,     2,     8,    11,     1,
       1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 96 "myanalyzer.y"
                   { 

 /* We have a successful parse! 
    Check for any errors and generate output. 
  */
  if (yyerror_count == 0) {
    puts(c_prologue);   // include the thetalib.h file
    printf("/* program */ \n\n"); 
    printf("%s\n\n", (yyvsp[0].crepr));
  }
}
#line 1679 "myanalyzer.tab.c"
    break;

  case 3:
#line 109 "myanalyzer.y"
                               {(yyval.crepr) = template("%s", (yyvsp[0].crepr));}
#line 1685 "myanalyzer.tab.c"
    break;

  case 4:
#line 112 "myanalyzer.y"
                                     {(yyval.crepr) = template("%s", (yyvsp[0].crepr));}
#line 1691 "myanalyzer.tab.c"
    break;

  case 5:
#line 113 "myanalyzer.y"
                                     {(yyval.crepr) = template("%s[%s]", (yyvsp[-3].crepr), (yyvsp[-1].crepr));}
#line 1697 "myanalyzer.tab.c"
    break;

  case 6:
#line 114 "myanalyzer.y"
                                     {(yyval.crepr) = template("%s[]", (yyvsp[-2].crepr));}
#line 1703 "myanalyzer.tab.c"
    break;

  case 7:
#line 115 "myanalyzer.y"
                                          {(yyval.crepr) = template("%s , %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1709 "myanalyzer.tab.c"
    break;

  case 8:
#line 116 "myanalyzer.y"
                                                     {(yyval.crepr) = template("%s[%s], %s", (yyvsp[-5].crepr), (yyvsp[-3].crepr), (yyvsp[0].crepr));}
#line 1715 "myanalyzer.tab.c"
    break;

  case 9:
#line 117 "myanalyzer.y"
                                                     {(yyval.crepr) = template("%s[], %s", (yyvsp[-4].crepr), (yyvsp[0].crepr));}
#line 1721 "myanalyzer.tab.c"
    break;

  case 10:
#line 122 "myanalyzer.y"
                                            {(yyval.crepr) = template("%s %s;\n", (yyvsp[-1].crepr), (yyvsp[-3].crepr));}
#line 1727 "myanalyzer.tab.c"
    break;

  case 11:
#line 123 "myanalyzer.y"
                                            {(yyval.crepr) = template("%s %s;\n", (yyvsp[-1].crepr), (yyvsp[-3].crepr));}
#line 1733 "myanalyzer.tab.c"
    break;

  case 12:
#line 128 "myanalyzer.y"
            {
              if (comp_param == 0){
                (yyval.crepr) = template("%s(*%s)(SELF );\n",(yyvsp[-4].crepr),(yyvsp[-10].crepr));
                func_buf = template("%s\n%s %s (SELF ) {\n%s}\n\n", func_buf, (yyvsp[-4].crepr), (yyvsp[-10].crepr), (yyvsp[-2].crepr));} 
              else {
                (yyval.crepr) = template("%s(*%s)(SELF, %s);\n",(yyvsp[-4].crepr),(yyvsp[-10].crepr),(yyvsp[-8].crepr));
                func_buf = template("%s\n%s %s (SELF, %s) {\n%s}\n\n", func_buf, (yyvsp[-4].crepr), (yyvsp[-10].crepr), (yyvsp[-8].crepr), (yyvsp[-2].crepr));} 

              if (func_names == "")
                func_names = template(".%s=%s", (yyvsp[-10].crepr), (yyvsp[-10].crepr));
              else 
                func_names = template("%s, .%s=%s", func_names, (yyvsp[-10].crepr), (yyvsp[-10].crepr));
            }
#line 1751 "myanalyzer.tab.c"
    break;

  case 13:
#line 143 "myanalyzer.y"
          {
            (yyval.crepr) = template("%s* %s (%s) {\n%s}\n\n", (yyvsp[-4].crepr), (yyvsp[-12].crepr), (yyvsp[-10].crepr), (yyvsp[-2].crepr));
            
            if (comp_param == 0){
              (yyval.crepr) = template("%s* (*%s)(SELF );\n", (yyvsp[-4].crepr), (yyvsp[-12].crepr));
              func_buf = template("%s\n%s* %s (SELF ) {\n%s}\n\n", func_buf, (yyvsp[-4].crepr), (yyvsp[-12].crepr), (yyvsp[-2].crepr));} 
            else {
              (yyval.crepr) = template("%s* (*%s)(SELF, %s);\n", (yyvsp[-4].crepr), (yyvsp[-12].crepr), (yyvsp[-10].crepr));
              func_buf = template("%s\n%s* %s (SELF, %s) {\n%s}\n\n", func_buf, (yyvsp[-4].crepr), (yyvsp[-12].crepr), (yyvsp[-10].crepr), (yyvsp[-2].crepr));} 

            if (func_names == "")
              func_names = template(".%s=%s", (yyvsp[-12].crepr), (yyvsp[-12].crepr));
            else 
              func_names = template("%s, .%s=%s", func_names, (yyvsp[-12].crepr), (yyvsp[-12].crepr));
          }
#line 1771 "myanalyzer.tab.c"
    break;

  case 14:
#line 160 "myanalyzer.y"
          {
            if (comp_param == 0){
              (yyval.crepr) = template("void (*%s)(SELF );\n",(yyvsp[-7].crepr));
              func_buf = template("%s\nvoid %s (SELF ) {\n%s}\n\n", func_buf, (yyvsp[-7].crepr), (yyvsp[-2].crepr));} 
            else {
              (yyval.crepr) = template("void (*%s)(SELF, %s);\n", (yyvsp[-7].crepr), (yyvsp[-5].crepr));
              func_buf = template("%s\nvoid %s (SELF, %s) {\n%s}\n\n", func_buf, (yyvsp[-7].crepr), (yyvsp[-5].crepr), (yyvsp[-2].crepr));} 
        
            if (func_names == "")
              func_names = template(".%s=%s", (yyvsp[-7].crepr), (yyvsp[-7].crepr));
            else 
              func_names = template("%s, .%s=%s", func_names, (yyvsp[-7].crepr), (yyvsp[-7].crepr));
          }
#line 1789 "myanalyzer.tab.c"
    break;

  case 15:
#line 176 "myanalyzer.y"
                                        {(yyval.crepr) = (yyvsp[0].crepr);}
#line 1795 "myanalyzer.tab.c"
    break;

  case 16:
#line 177 "myanalyzer.y"
                                        {(yyval.crepr) = template("%s%s", (yyvsp[-1].crepr), (yyvsp[0].crepr));}
#line 1801 "myanalyzer.tab.c"
    break;

  case 17:
#line 178 "myanalyzer.y"
                                        {(yyval.crepr) = template("%s%s", (yyvsp[-1].crepr), (yyvsp[0].crepr));}
#line 1807 "myanalyzer.tab.c"
    break;

  case 18:
#line 183 "myanalyzer.y"
                                                      {
      (yyval.crepr) = template("#define SELF struct %s *self \ntypedef struct %s {\n%s} %s;\n\n%sconst %s ctor_%s = {%s};\n#undef SELF\n\n", (yyvsp[-4].crepr), (yyvsp[-4].crepr), (yyvsp[-2].crepr), (yyvsp[-4].crepr), func_buf, (yyvsp[-4].crepr), (yyvsp[-4].crepr), func_names);
      func_buf = "";
      func_names = "";
      comp_param = 0;}
#line 1817 "myanalyzer.tab.c"
    break;

  case 19:
#line 191 "myanalyzer.y"
                                 {(yyval.crepr) = (yyvsp[0].crepr);}
#line 1823 "myanalyzer.tab.c"
    break;

  case 20:
#line 192 "myanalyzer.y"
                                 {(yyval.crepr) = template("%s[%s]", (yyvsp[-3].crepr), (yyvsp[-1].crepr));}
#line 1829 "myanalyzer.tab.c"
    break;

  case 21:
#line 193 "myanalyzer.y"
                                 {(yyval.crepr) = template("%s[]", (yyvsp[-2].crepr));}
#line 1835 "myanalyzer.tab.c"
    break;

  case 22:
#line 194 "myanalyzer.y"
                                 {(yyval.crepr) = template("%s, %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1841 "myanalyzer.tab.c"
    break;

  case 23:
#line 195 "myanalyzer.y"
                                            {(yyval.crepr) = template("%s[%s], %s", (yyvsp[-5].crepr), (yyvsp[-3].crepr), (yyvsp[0].crepr));}
#line 1847 "myanalyzer.tab.c"
    break;

  case 24:
#line 196 "myanalyzer.y"
                                            {(yyval.crepr) = template("%s[], %s", (yyvsp[-4].crepr), (yyvsp[0].crepr));}
#line 1853 "myanalyzer.tab.c"
    break;

  case 25:
#line 200 "myanalyzer.y"
                                                       {(yyval.crepr) = template("const %s %s = %s;\n", (yyvsp[-1].crepr), (yyvsp[-5].crepr), (yyvsp[-3].crepr));}
#line 1859 "myanalyzer.tab.c"
    break;

  case 26:
#line 204 "myanalyzer.y"
                                      {(yyval.crepr) = template("+%s", (yyvsp[0].crepr));}
#line 1865 "myanalyzer.tab.c"
    break;

  case 27:
#line 205 "myanalyzer.y"
                                      {(yyval.crepr) = template("-%s", (yyvsp[0].crepr));}
#line 1871 "myanalyzer.tab.c"
    break;

  case 28:
#line 206 "myanalyzer.y"
                                      {(yyval.crepr) = template("pow(%s, %s)", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1877 "myanalyzer.tab.c"
    break;

  case 29:
#line 207 "myanalyzer.y"
                                      {(yyval.crepr) = template("%s + %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1883 "myanalyzer.tab.c"
    break;

  case 30:
#line 208 "myanalyzer.y"
                                      {(yyval.crepr) = template("%s - %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1889 "myanalyzer.tab.c"
    break;

  case 31:
#line 209 "myanalyzer.y"
                                      {(yyval.crepr) = template("%s * %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1895 "myanalyzer.tab.c"
    break;

  case 32:
#line 210 "myanalyzer.y"
                                      {(yyval.crepr) = template("%s / %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1901 "myanalyzer.tab.c"
    break;

  case 33:
#line 211 "myanalyzer.y"
                                      {(yyval.crepr) = template("%s %% %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1907 "myanalyzer.tab.c"
    break;

  case 34:
#line 212 "myanalyzer.y"
                                      {(yyval.crepr) = template("%s == %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1913 "myanalyzer.tab.c"
    break;

  case 35:
#line 213 "myanalyzer.y"
                                      {(yyval.crepr) = template("%s != %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1919 "myanalyzer.tab.c"
    break;

  case 36:
#line 214 "myanalyzer.y"
                                      {(yyval.crepr) = template("%s < %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1925 "myanalyzer.tab.c"
    break;

  case 37:
#line 215 "myanalyzer.y"
                                      {(yyval.crepr) = template("%s > %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1931 "myanalyzer.tab.c"
    break;

  case 38:
#line 216 "myanalyzer.y"
                                      {(yyval.crepr) = template("%s <= %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1937 "myanalyzer.tab.c"
    break;

  case 39:
#line 217 "myanalyzer.y"
                                      {(yyval.crepr) = template("%s >= %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1943 "myanalyzer.tab.c"
    break;

  case 40:
#line 218 "myanalyzer.y"
                                      {(yyval.crepr) = template("NOT %s", (yyvsp[0].crepr));}
#line 1949 "myanalyzer.tab.c"
    break;

  case 41:
#line 219 "myanalyzer.y"
                                      {(yyval.crepr) = template("%s && %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1955 "myanalyzer.tab.c"
    break;

  case 42:
#line 220 "myanalyzer.y"
                                      {(yyval.crepr) = template("%s | %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1961 "myanalyzer.tab.c"
    break;

  case 43:
#line 221 "myanalyzer.y"
                                      {(yyval.crepr) = template("(%s)", (yyvsp[-1].crepr));}
#line 1967 "myanalyzer.tab.c"
    break;

  case 44:
#line 222 "myanalyzer.y"
                                      {(yyval.crepr) = (yyvsp[0].crepr);}
#line 1973 "myanalyzer.tab.c"
    break;

  case 45:
#line 223 "myanalyzer.y"
                                      {(yyval.crepr) = template("1");}
#line 1979 "myanalyzer.tab.c"
    break;

  case 46:
#line 224 "myanalyzer.y"
                                      {(yyval.crepr) = template("0");}
#line 1985 "myanalyzer.tab.c"
    break;

  case 47:
#line 225 "myanalyzer.y"
                                      {(yyval.crepr) = template("%s[%s]", (yyvsp[-3].crepr), (yyvsp[-1].crepr));}
#line 1991 "myanalyzer.tab.c"
    break;

  case 48:
#line 226 "myanalyzer.y"
                                      {(yyval.crepr) = template("self->%s", (yyvsp[0].crepr));}
#line 1997 "myanalyzer.tab.c"
    break;

  case 49:
#line 227 "myanalyzer.y"
                                      {(yyval.crepr) = template("self->%s[%s]", (yyvsp[-3].crepr), (yyvsp[-1].crepr));}
#line 2003 "myanalyzer.tab.c"
    break;

  case 50:
#line 228 "myanalyzer.y"
                                      {(yyval.crepr) = template("%s.%s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2009 "myanalyzer.tab.c"
    break;

  case 51:
#line 229 "myanalyzer.y"
                                      {(yyval.crepr) = template("%s.%s[%s]", (yyvsp[-5].crepr), (yyvsp[-3].crepr), (yyvsp[-1].crepr));}
#line 2015 "myanalyzer.tab.c"
    break;

  case 52:
#line 230 "myanalyzer.y"
                                      {(yyval.crepr) = (yyvsp[0].crepr);}
#line 2021 "myanalyzer.tab.c"
    break;

  case 53:
#line 231 "myanalyzer.y"
                                      {(yyval.crepr) = (yyvsp[0].crepr);}
#line 2027 "myanalyzer.tab.c"
    break;

  case 54:
#line 232 "myanalyzer.y"
                                      {(yyval.crepr) = (yyvsp[0].crepr);}
#line 2033 "myanalyzer.tab.c"
    break;

  case 55:
#line 233 "myanalyzer.y"
                                      {(yyval.crepr) = (yyvsp[0].crepr);}
#line 2039 "myanalyzer.tab.c"
    break;

  case 56:
#line 239 "myanalyzer.y"
                                   {(yyval.crepr) = template("%s %s;\n", (yyvsp[-1].crepr), (yyvsp[-3].crepr));}
#line 2045 "myanalyzer.tab.c"
    break;

  case 57:
#line 240 "myanalyzer.y"
                                   {(yyval.crepr) = template("%s %s=ctor_%s;\n", (yyvsp[-1].crepr), (yyvsp[-3].crepr), (yyvsp[-1].crepr));}
#line 2051 "myanalyzer.tab.c"
    break;

  case 58:
#line 245 "myanalyzer.y"
                                   {(yyval.crepr) = template("");}
#line 2057 "myanalyzer.tab.c"
    break;

  case 59:
#line 246 "myanalyzer.y"
                                   {(yyval.crepr) = template("%s%s", (yyvsp[-1].crepr), (yyvsp[0].crepr));}
#line 2063 "myanalyzer.tab.c"
    break;

  case 60:
#line 247 "myanalyzer.y"
                                   {(yyval.crepr) = template("%s%s", (yyvsp[-1].crepr), (yyvsp[0].crepr));}
#line 2069 "myanalyzer.tab.c"
    break;

  case 61:
#line 248 "myanalyzer.y"
                                   {(yyval.crepr) = template("%s%s", (yyvsp[-1].crepr), (yyvsp[0].crepr));}
#line 2075 "myanalyzer.tab.c"
    break;

  case 62:
#line 249 "myanalyzer.y"
                                   {(yyval.crepr) = template("%s%s", (yyvsp[-1].crepr), (yyvsp[0].crepr));}
#line 2081 "myanalyzer.tab.c"
    break;

  case 63:
#line 253 "myanalyzer.y"
                                                                                                   {(yyval.crepr) = template("%s %s (%s) {\n%s}\n\n", (yyvsp[-4].crepr), (yyvsp[-10].crepr), (yyvsp[-8].crepr), (yyvsp[-2].crepr));}
#line 2087 "myanalyzer.tab.c"
    break;

  case 64:
#line 254 "myanalyzer.y"
                                                                                                          {(yyval.crepr) = template("%s *%s (%s) {\n%s}\n\n", (yyvsp[-4].crepr), (yyvsp[-12].crepr), (yyvsp[-10].crepr), (yyvsp[-2].crepr));}
#line 2093 "myanalyzer.tab.c"
    break;

  case 65:
#line 255 "myanalyzer.y"
                                                                              {(yyval.crepr) = template("void %s (%s) {\n%s}\n\n", (yyvsp[-7].crepr), (yyvsp[-5].crepr), (yyvsp[-2].crepr));}
#line 2099 "myanalyzer.tab.c"
    break;

  case 66:
#line 256 "myanalyzer.y"
                                                                                                    {(yyval.crepr) = template("%s %s (%s) {\n%s}\n\n", (yyvsp[-4].crepr), (yyvsp[-10].crepr), (yyvsp[-8].crepr), (yyvsp[-2].crepr));}
#line 2105 "myanalyzer.tab.c"
    break;

  case 67:
#line 260 "myanalyzer.y"
                                       {(yyval.crepr) = template("%s(%s)", (yyvsp[-3].crepr), (yyvsp[-1].crepr));}
#line 2111 "myanalyzer.tab.c"
    break;

  case 68:
#line 262 "myanalyzer.y"
          {
            if (func_param == 0)
              (yyval.crepr) = template("%s.%s(&%s)", (yyvsp[-5].crepr), (yyvsp[-3].crepr), (yyvsp[-5].crepr));
             else 
              (yyval.crepr) = template("%s.%s(&%s, %s);\n",(yyvsp[-5].crepr),(yyvsp[-3].crepr),(yyvsp[-5].crepr),(yyvsp[-1].crepr));
          }
#line 2122 "myanalyzer.tab.c"
    break;

  case 69:
#line 271 "myanalyzer.y"
                                 {(yyval.crepr) = template(""); func_param = 0;}
#line 2128 "myanalyzer.tab.c"
    break;

  case 70:
#line 272 "myanalyzer.y"
                                 {(yyval.crepr) = (yyvsp[0].crepr); func_param += 1;}
#line 2134 "myanalyzer.tab.c"
    break;

  case 71:
#line 273 "myanalyzer.y"
                                 {(yyval.crepr) = template("%s, %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2140 "myanalyzer.tab.c"
    break;

  case 72:
#line 277 "myanalyzer.y"
                                                  {(yyval.crepr) = template(""); comp_param = 0;}
#line 2146 "myanalyzer.tab.c"
    break;

  case 73:
#line 278 "myanalyzer.y"
                                                  {(yyval.crepr) = template("%s %s", (yyvsp[0].crepr), (yyvsp[-2].crepr)); comp_param += 1;}
#line 2152 "myanalyzer.tab.c"
    break;

  case 74:
#line 279 "myanalyzer.y"
                                                  {(yyval.crepr) = template("%s %s", (yyvsp[0].crepr), (yyvsp[-2].crepr)); comp_param += 1;}
#line 2158 "myanalyzer.tab.c"
    break;

  case 75:
#line 280 "myanalyzer.y"
                                                  {(yyval.crepr) = template("%s *%s", (yyvsp[0].crepr), (yyvsp[-4].crepr)); comp_param += 1;}
#line 2164 "myanalyzer.tab.c"
    break;

  case 76:
#line 281 "myanalyzer.y"
                                                           {(yyval.crepr) = template("%s %s, %s", (yyvsp[-2].crepr), (yyvsp[-4].crepr), (yyvsp[0].crepr));}
#line 2170 "myanalyzer.tab.c"
    break;

  case 77:
#line 282 "myanalyzer.y"
                                                            {(yyval.crepr) = template("%s %s, %s", (yyvsp[-2].crepr), (yyvsp[-4].crepr), (yyvsp[0].crepr));}
#line 2176 "myanalyzer.tab.c"
    break;

  case 78:
#line 283 "myanalyzer.y"
                                                           {(yyval.crepr) = template("%s *%s, %s", (yyvsp[-2].crepr), (yyvsp[-6].crepr), (yyvsp[0].crepr));}
#line 2182 "myanalyzer.tab.c"
    break;

  case 79:
#line 287 "myanalyzer.y"
                                                               {(yyval.crepr) = template("int main() {\n%s}\n", (yyvsp[-2].crepr));}
#line 2188 "myanalyzer.tab.c"
    break;

  case 80:
#line 291 "myanalyzer.y"
                                      {(yyval.crepr) = template("\n");}
#line 2194 "myanalyzer.tab.c"
    break;

  case 81:
#line 292 "myanalyzer.y"
                                      {(yyval.crepr) = template("%s%s", (yyvsp[-1].crepr), (yyvsp[0].crepr));}
#line 2200 "myanalyzer.tab.c"
    break;

  case 82:
#line 293 "myanalyzer.y"
                                      {(yyval.crepr) = template("%s%s", (yyvsp[-1].crepr), (yyvsp[0].crepr));}
#line 2206 "myanalyzer.tab.c"
    break;

  case 83:
#line 294 "myanalyzer.y"
                                      {(yyval.crepr) = template("%s%s", (yyvsp[-1].crepr), (yyvsp[0].crepr));}
#line 2212 "myanalyzer.tab.c"
    break;

  case 84:
#line 295 "myanalyzer.y"
                                      {(yyval.crepr) = template("%s%s", (yyvsp[-1].crepr), (yyvsp[0].crepr));}
#line 2218 "myanalyzer.tab.c"
    break;

  case 85:
#line 296 "myanalyzer.y"
                                      {(yyval.crepr) = template("%s%s", (yyvsp[-1].crepr), (yyvsp[0].crepr));}
#line 2224 "myanalyzer.tab.c"
    break;

  case 86:
#line 300 "myanalyzer.y"
                                                                        {(yyval.crepr) = template("%s;\n", (yyvsp[-1].crepr));}
#line 2230 "myanalyzer.tab.c"
    break;

  case 87:
#line 301 "myanalyzer.y"
                                                                                      {(yyval.crepr) = template("for (%s = %s; %s<%s; %s+=1){\n%s}\n", (yyvsp[-10].crepr), (yyvsp[-7].crepr), (yyvsp[-10].crepr), (yyvsp[-5].crepr), (yyvsp[-10].crepr), (yyvsp[-2].crepr));}
#line 2236 "myanalyzer.tab.c"
    break;

  case 88:
#line 302 "myanalyzer.y"
                                                                                      {(yyval.crepr) = template("for (%s = %s; %s<%s; %s+=%s){\n%s}\n", (yyvsp[-12].crepr), (yyvsp[-9].crepr), (yyvsp[-12].crepr), (yyvsp[-7].crepr), (yyvsp[-12].crepr), (yyvsp[-5].crepr), (yyvsp[-2].crepr));}
#line 2242 "myanalyzer.tab.c"
    break;

  case 89:
#line 303 "myanalyzer.y"
                                                                                      {(yyval.crepr) = template("for (%s = %s; %s<%s; %s+=1){\n%s}\n", (yyvsp[-10].crepr), (yyvsp[-7].crepr), (yyvsp[-10].crepr), (yyvsp[-5].crepr), (yyvsp[-10].crepr), (yyvsp[-2].crepr));}
#line 2248 "myanalyzer.tab.c"
    break;

  case 90:
#line 304 "myanalyzer.y"
                                                                                      {(yyval.crepr) = template("for (%s = %s; %s<%s; %s+=%s){\n%s}\n", (yyvsp[-12].crepr), (yyvsp[-9].crepr), (yyvsp[-12].crepr), (yyvsp[-7].crepr), (yyvsp[-12].crepr), (yyvsp[-5].crepr), (yyvsp[-2].crepr));}
#line 2254 "myanalyzer.tab.c"
    break;

  case 91:
#line 305 "myanalyzer.y"
                                                            {(yyval.crepr) = template("while (%s){\n%s}\n", (yyvsp[-5].crepr), (yyvsp[-2].crepr));}
#line 2260 "myanalyzer.tab.c"
    break;

  case 92:
#line 306 "myanalyzer.y"
                                                            {(yyval.crepr) = template("break;\n");}
#line 2266 "myanalyzer.tab.c"
    break;

  case 93:
#line 307 "myanalyzer.y"
                                                            {(yyval.crepr) = template("continue;\n");}
#line 2272 "myanalyzer.tab.c"
    break;

  case 94:
#line 308 "myanalyzer.y"
                                                            {(yyval.crepr) = template("return;\n");}
#line 2278 "myanalyzer.tab.c"
    break;

  case 95:
#line 309 "myanalyzer.y"
                                                            {(yyval.crepr) = template("return %s;\n", (yyvsp[-1].crepr));}
#line 2284 "myanalyzer.tab.c"
    break;

  case 96:
#line 310 "myanalyzer.y"
                                                            {(yyval.crepr) = template("%s;\n", (yyvsp[-1].crepr));}
#line 2290 "myanalyzer.tab.c"
    break;

  case 97:
#line 314 "myanalyzer.y"
                                       {(yyval.crepr) = template("%s = %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2296 "myanalyzer.tab.c"
    break;

  case 98:
#line 315 "myanalyzer.y"
                                       {(yyval.crepr) = template("%s += %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2302 "myanalyzer.tab.c"
    break;

  case 99:
#line 316 "myanalyzer.y"
                                       {(yyval.crepr) = template("%s -= %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2308 "myanalyzer.tab.c"
    break;

  case 100:
#line 317 "myanalyzer.y"
                                       {(yyval.crepr) = template("%s *= %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2314 "myanalyzer.tab.c"
    break;

  case 101:
#line 318 "myanalyzer.y"
                                       {(yyval.crepr) = template("%s /= %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2320 "myanalyzer.tab.c"
    break;

  case 102:
#line 319 "myanalyzer.y"
                                       {(yyval.crepr) = template("%s %= %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2326 "myanalyzer.tab.c"
    break;

  case 103:
#line 323 "myanalyzer.y"
                    {(yyval.crepr) = template("%s", (yyvsp[0].crepr));}
#line 2332 "myanalyzer.tab.c"
    break;

  case 104:
#line 324 "myanalyzer.y"
                    {(yyval.crepr) = template("%s%s", (yyvsp[-1].crepr), (yyvsp[0].crepr));}
#line 2338 "myanalyzer.tab.c"
    break;

  case 105:
#line 325 "myanalyzer.y"
                    {(yyval.crepr) = template("%s", (yyvsp[0].crepr));}
#line 2344 "myanalyzer.tab.c"
    break;

  case 106:
#line 326 "myanalyzer.y"
                    {(yyval.crepr) = template("%s%s", (yyvsp[-1].crepr), (yyvsp[0].crepr));}
#line 2350 "myanalyzer.tab.c"
    break;

  case 107:
#line 331 "myanalyzer.y"
                                                                          {(yyval.crepr) = template("if (%s){\n%s}\n", (yyvsp[-5].crepr), (yyvsp[-2].crepr));}
#line 2356 "myanalyzer.tab.c"
    break;

  case 108:
#line 332 "myanalyzer.y"
                                                                          {(yyval.crepr) = template("if (%s){\n%s} else {\n%s}\n", (yyvsp[-8].crepr), (yyvsp[-5].crepr), (yyvsp[-2].crepr));}
#line 2362 "myanalyzer.tab.c"
    break;

  case 109:
#line 337 "myanalyzer.y"
                        {(yyval.crepr) = template("int");}
#line 2368 "myanalyzer.tab.c"
    break;

  case 110:
#line 338 "myanalyzer.y"
                        {(yyval.crepr) = template("int");}
#line 2374 "myanalyzer.tab.c"
    break;

  case 111:
#line 339 "myanalyzer.y"
                        {(yyval.crepr) = template("double");}
#line 2380 "myanalyzer.tab.c"
    break;

  case 112:
#line 341 "myanalyzer.y"
                        {(yyval.crepr) = template("StringType");}
#line 2386 "myanalyzer.tab.c"
    break;

  case 113:
#line 342 "myanalyzer.y"
                        {(yyval.crepr) = template("void");}
#line 2392 "myanalyzer.tab.c"
    break;


#line 2396 "myanalyzer.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 344 "myanalyzer.y"

int main () {
  if ( yyparse() == 0 )
    printf("/* Accepted! */\n");
  else
    printf("/* Rejected! */\n");
}
