/* A Bison parser, made by GNU Bison 3.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
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
#define YYBISON_VERSION "3.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 26 "parser.y"

#include "msg.h"

#line 74 "parser.tab.c"

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
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    AMP = 258,
    ASGN = 259,
    BANG = 260,
    COLON = 261,
    COMMA = 262,
    DAMP = 263,
    DBAR = 264,
    DIV = 265,
    DOT = 266,
    EQ = 267,
    GE = 268,
    GT = 269,
    LBRACK = 270,
    LE = 271,
    LPAREN = 272,
    LT = 273,
    MINUS = 274,
    NE = 275,
    PLUS = 276,
    RBRACK = 277,
    RPAREN = 278,
    SEMI = 279,
    STAR = 280,
    ARRAY = 281,
    BEGINN = 282,
    BOOL = 283,
    ELSE = 284,
    ELIF = 285,
    END = 286,
    FALSE = 287,
    FOR = 288,
    FLOAT = 289,
    FUNCTION = 290,
    IF = 291,
    IN = 292,
    INT = 293,
    OF = 294,
    PROCEDURE = 295,
    PROGRAM = 296,
    READ = 297,
    RECORD = 298,
    RETURN = 299,
    THEN = 300,
    TRUE = 301,
    WHILE = 302,
    WRITE = 303,
    FCONST = 304,
    ICONST = 305,
    IDENT = 306,
    SCONST = 307
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 32 "parser.y"

    int w;                 /* ICONST */
    double r;              /* FCONST */
    char *sb;              /* SCONST */
    struct he *phe;        /* IDENT  */

    /* more to be added during Phase 3 */

#line 179 "parser.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   492

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  62
/* YYNRULES -- Number of rules.  */
#define YYNRULES  167
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  329

#define YYUNDEFTOK  2
#define YYMAXUTOK   307

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    59,    59,    62,    61,    72,    73,    78,    79,    80,
      81,    85,    86,    90,    91,    95,   100,    99,   109,   110,
     114,   117,   119,   118,   126,   128,   127,   135,   141,   143,
     142,   151,   150,   159,   158,   166,   168,   167,   176,   175,
     184,   183,   191,   197,   200,   201,   202,   209,   210,   214,
     215,   219,   220,   222,   223,   226,   227,   228,   229,   234,
     233,   241,   244,   245,   246,   250,   252,   251,   261,   262,
     263,   269,   270,   275,   276,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   289,   291,   290,   300,   301,   305,
     306,   311,   312,   316,   319,   320,   325,   324,   333,   332,
     342,   343,   348,   347,   357,   359,   358,   366,   370,   371,
     376,   377,   382,   383,   389,   392,   394,   393,   402,   403,
     406,   407,   411,   412,   417,   418,   421,   422,   428,   429,
     431,   432,   435,   436,   437,   438,   439,   440,   441,   444,
     445,   446,   447,   448,   450,   451,   454,   455,   456,   457,
     459,   460,   461,   462,   463,   466,   467,   468,   469,   472,
     473,   479,   481,   482,   485,   486,   487,   488
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AMP", "ASGN", "BANG", "COLON", "COMMA",
  "DAMP", "DBAR", "DIV", "DOT", "EQ", "GE", "GT", "LBRACK", "LE", "LPAREN",
  "LT", "MINUS", "NE", "PLUS", "RBRACK", "RPAREN", "SEMI", "STAR", "ARRAY",
  "BEGINN", "BOOL", "ELSE", "ELIF", "END", "FALSE", "FOR", "FLOAT",
  "FUNCTION", "IF", "IN", "INT", "OF", "PROCEDURE", "PROGRAM", "READ",
  "RECORD", "RETURN", "THEN", "TRUE", "WHILE", "WRITE", "FCONST", "ICONST",
  "IDENT", "SCONST", "$accept", "program", "$@1", "body", "decl_part",
  "variable_decl", "$@2", "ident_list", "procedure_decl", "$@3", "$@4",
  "function_decl", "$@5", "$@6", "$@7", "$@8", "$@9", "$@10",
  "parameter_list", "parameter_list_list", "ident_list_amp",
  "parameter_type", "type", "$@11", "simple_type", "index", "$@12",
  "index_list", "field_list", "field_list_list", "statement_list",
  "assignment_statement", "$@13", "subroutine_call", "expression_list",
  "return_statement", "for_statement", "$@14", "$@15", "while_statement",
  "$@16", "if_statement", "$@17", "else_part", "elif_part", "$@18",
  "elif_part_list", "write_statement", "expression_comma_list",
  "read_statement", "expression", "and_expression", "logic_expression",
  "simple_expression", "term", "factor_list", "factor", "variable",
  "arrayvar", "recvar", "variable_list", "constant", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307
};
# endif

#define YYPACT_NINF -176

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-176)))

#define YYTABLE_NINF -50

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -8,    31,    77,  -176,  -176,  -176,  -176,   148,   148,  -176,
      36,    41,    20,  -176,  -176,   362,  -176,  -176,  -176,   179,
    -176,    30,  -176,    85,   118,    52,   136,   117,   126,  -176,
    -176,  -176,   131,  -176,  -176,  -176,  -176,  -176,    42,   186,
     194,   335,   236,   243,   218,  -176,  -176,  -176,  -176,  -176,
    -176,  -176,  -176,    60,    11,    28,   260,  -176,  -176,  -176,
    -176,  -176,   223,   286,   365,   244,  -176,   246,   335,   248,
     208,   335,   208,   208,  -176,  -176,  -176,  -176,  -176,  -176,
     293,   295,   471,  -176,   168,  -176,  -176,   335,   259,    55,
     335,   100,   306,  -176,  -176,   335,  -176,   270,   200,    29,
      21,   284,  -176,  -176,    22,   102,   235,   130,  -176,   102,
     131,  -176,   289,   335,   110,   316,  -176,   308,  -176,  -176,
     335,   335,   335,   335,   335,   335,   335,   208,   335,   208,
     208,   208,   212,   111,    93,   174,  -176,   281,  -176,   113,
    -176,  -176,  -176,   185,  -176,   335,  -176,   227,    90,  -176,
     143,  -176,  -176,   237,   156,    47,  -176,   148,  -176,  -176,
    -176,  -176,   283,  -176,   296,   131,  -176,  -176,   335,   262,
    -176,   298,   335,   255,  -176,  -176,  -176,   183,   183,   183,
     183,   183,  -176,   183,  -176,  -176,  -176,   208,   208,  -176,
    -176,  -176,  -176,   287,  -176,  -176,   335,  -176,  -176,  -176,
    -176,  -176,  -176,   227,  -176,  -176,   227,  -176,   190,  -176,
      25,  -176,   288,  -176,   148,  -176,  -176,   148,   297,    10,
     305,   327,  -176,   328,  -176,   335,   304,  -176,  -176,  -176,
     335,  -176,  -176,  -176,  -176,   294,  -176,  -176,  -176,   148,
    -176,  -176,   148,  -176,   227,  -176,  -176,    53,  -176,  -176,
    -176,  -176,   148,  -176,    10,   223,  -176,  -176,   102,  -176,
    -176,   335,   335,  -176,  -176,   125,  -176,   373,  -176,  -176,
    -176,   148,   148,  -176,   148,  -176,  -176,   148,  -176,  -176,
    -176,  -176,  -176,  -176,  -176,   315,   392,  -176,  -176,   333,
    -176,     8,    98,  -176,  -176,  -176,  -176,   148,   148,  -176,
     402,   421,  -176,  -176,  -176,   431,   335,  -176,  -176,  -176,
    -176,    24,  -176,  -176,  -176,  -176,   142,  -176,  -176,  -176,
     313,   319,  -176,  -176,   271,   271,  -176,  -176,  -176
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     3,     7,     1,     7,     0,     0,    75,
       0,     0,     0,     2,     8,     0,     9,    10,     4,     0,
      42,     0,    27,     0,    19,     0,     0,     0,     0,    64,
      63,    62,     0,    56,    12,    55,     6,     5,     0,     0,
       0,     0,     0,     0,   155,    76,    77,    78,    79,    80,
      81,    83,    82,     0,     0,     0,     0,    15,    13,    14,
      11,    20,     0,     0,     0,     0,    98,     0,     0,     0,
       0,     0,     0,     0,   167,   166,   165,   164,   152,    93,
     128,   130,   132,   143,   144,   151,   150,     0,     0,     0,
       0,     0,   156,   157,    85,     0,    38,     0,     0,     0,
       0,     0,    25,     7,     0,     0,     0,     0,    19,     0,
      73,    61,     0,     0,     0,     0,   154,     0,   142,   141,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   145,     0,     0,   155,   162,     0,   161,     0,
      91,    88,    87,     0,   158,     0,    84,     0,     0,    40,
       0,    48,    31,     0,     0,     0,     7,     0,    22,     7,
      17,    66,     0,    59,     0,    73,    74,    72,     0,     0,
     105,     0,     0,     0,   153,   129,   131,   135,   137,   138,
     134,   133,   140,   136,   139,   147,   146,     0,     0,   102,
      75,   121,   120,     0,   163,   160,     0,   159,    90,    89,
      86,     7,    50,     0,    36,     7,     0,    33,     0,    54,
      44,    53,     0,    51,     0,    24,     7,     0,     0,    68,
       0,     0,    71,     0,    96,     0,     0,    75,   124,   127,
       0,   126,   149,   148,    75,     0,   123,   122,    92,     0,
       7,     7,     0,     7,     0,    29,     7,     0,    46,    43,
      52,    26,     0,    21,    68,     0,    70,    65,     0,    58,
      57,     0,     0,    75,    75,     0,   125,     0,   101,   100,
      39,     0,     0,    35,     0,     7,     7,     0,    45,    23,
      67,    69,    60,    75,    75,     0,     0,   107,    75,     0,
     104,     0,     0,   103,    41,    37,    32,     0,     0,    28,
       0,     0,    95,    94,   106,   114,     0,   111,   110,   109,
     108,     0,    34,    30,    99,    97,     0,   113,   112,   116,
       0,     0,    75,    75,   118,   118,   119,   115,   117
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -176,  -176,  -176,     0,     4,  -176,  -176,   -26,  -176,  -176,
    -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,   -51,  -176,
    -176,  -176,   -24,  -176,  -134,   -57,  -176,   106,   348,   217,
    -175,  -176,  -176,   -16,   292,  -176,  -176,  -176,  -176,  -176,
    -176,  -176,  -176,    95,   124,  -176,    67,  -176,   261,  -176,
     -30,   274,   276,   251,   -54,  -176,   -63,   -19,  -176,   207,
    -176,  -176
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     6,    13,     7,    14,    56,    15,    16,   216,
     156,    17,   276,   206,   244,   241,   147,   203,   100,   249,
     101,   210,    34,   220,    35,   256,   218,   257,   166,   167,
      19,    45,   145,    78,   139,    47,    48,   262,   112,    49,
     234,    50,   226,   291,   326,   321,   327,    51,   173,    52,
     140,    80,    81,    82,    83,   132,    84,    85,    92,    93,
     138,    86
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      53,    58,    60,    46,   104,   107,    64,   116,    18,   307,
       8,    79,    96,   201,    97,   235,   205,   255,   118,   119,
     211,    24,   152,   158,    25,   317,   -18,   -18,    97,   102,
     151,    97,     3,     1,    98,   -47,   -47,    20,   114,   308,
     110,   117,    22,    66,   153,   159,   -18,    54,   -18,   247,
     212,   103,   265,    57,   -18,   318,    97,   133,   -18,   267,
     106,    94,    99,   -18,    95,   146,    89,   185,   186,   240,
     136,   -18,   243,   182,   246,   184,    99,     5,    28,    99,
      29,   160,     4,   169,    64,   165,    30,    21,   285,   286,
      31,   202,    23,    67,   191,    32,   -49,   -49,   213,   309,
     172,   141,    55,    33,    99,    70,   135,   157,   300,   301,
     275,   170,   189,   305,   195,   200,   192,    71,   194,    72,
     196,    73,   -16,   142,   232,   233,   287,   288,    28,   310,
      29,   163,    74,   171,   190,   197,    30,    59,   223,    64,
      31,    62,   228,   319,   204,    32,    75,   324,   325,    76,
      77,    44,   164,    33,   288,   289,   290,   215,    38,   248,
     214,    39,    28,   217,    29,   320,   238,    40,    61,    41,
      30,    29,    42,    43,    31,     9,    44,    30,   130,    32,
      36,    31,    63,    10,    29,    89,   198,    33,    11,    90,
      30,   245,   196,   131,    31,   263,   278,   260,   281,    12,
     266,   149,   127,    68,   129,   239,   150,   209,   199,   242,
      37,    69,    38,    70,   251,    39,    53,   253,    29,    46,
     252,    40,   187,    41,    30,    71,    42,    43,    31,    89,
      44,   283,   284,    90,   282,    91,   161,   188,   207,   270,
      74,   162,   273,   208,   271,   272,    53,   274,    53,    46,
     277,    46,   279,    87,    75,    29,   229,    76,    77,    44,
      88,    30,   230,   224,   105,    31,    53,    53,   225,    46,
      46,   294,   295,   106,   296,   111,   316,   299,   231,   297,
     298,    53,    53,   113,    46,    46,    53,   108,   236,    46,
     154,   155,   -18,   -18,   230,   268,   137,   312,   313,   144,
     115,   289,   120,   121,    38,    53,    53,    39,    46,    46,
     237,   134,   -18,    40,   -18,    41,   302,    89,    42,    43,
     -18,   148,    44,   172,   -18,   269,   168,    38,   259,   -18,
      39,   174,   135,   219,   261,   221,    40,   -18,    41,   250,
      70,    42,    43,   227,   258,    44,   303,   254,    38,   264,
     306,    39,    71,    28,    72,    29,    73,    40,   322,    41,
     280,    30,    42,    43,   323,    31,    44,    74,    26,    27,
      32,   109,    27,   177,   178,   179,   180,   181,    33,   183,
      65,    75,   222,   143,    76,    77,    44,   311,    28,   292,
      29,    28,   328,    29,   175,   193,    30,   176,     0,    30,
      31,     0,     0,    31,   293,    32,    38,     0,    32,    39,
       0,     0,     0,    33,     0,    40,    33,    41,     0,     0,
      42,    43,     0,   304,    44,    38,     0,     0,    39,     0,
       0,     0,     0,   314,    40,    38,    41,     0,    39,    42,
      43,     0,     0,    44,    40,     0,    41,     0,     0,    42,
      43,     0,   315,    44,    38,     0,     0,    39,     0,     0,
       0,     0,     0,    40,    38,    41,     0,    39,    42,    43,
       0,     0,    44,    40,     0,    41,     0,     0,    42,    43,
       0,     0,    44,   122,   123,   124,     0,   125,     0,   126,
     127,   128,   129
};

static const yytype_int16 yycheck[] =
{
      19,    25,    26,    19,    55,    62,    32,    70,     8,     1,
       6,    41,     1,   147,     3,   190,   150,     7,    72,    73,
     154,     1,     1,     1,     4,     1,     6,     7,     3,     1,
       1,     3,     1,    41,    23,     6,     7,     1,    68,    31,
      64,    71,     1,     1,    23,    23,    26,    17,    28,    24,
       3,    23,   227,     1,    34,    31,     3,    87,    38,   234,
      50,     1,    51,    43,     4,    95,    11,   130,   131,   203,
      89,    51,   206,   127,   208,   129,    51,     0,    26,    51,
      28,   105,    51,   113,   110,   109,    34,    51,   263,   264,
      38,     1,    51,    51,     1,    43,     6,     7,    51,     1,
       7,     1,    17,    51,    51,     5,    51,   103,   283,   284,
     244,     1,     1,   288,     1,   145,    23,    17,   137,    19,
       7,    21,     4,    23,   187,   188,     1,    29,    26,    31,
      28,     1,    32,    23,    23,    22,    34,     1,   168,   165,
      38,    15,   172,     1,     1,    43,    46,   322,   323,    49,
      50,    51,    22,    51,    29,    30,    31,   157,    33,   210,
     156,    36,    26,   159,    28,    23,   196,    42,    51,    44,
      34,    28,    47,    48,    38,    27,    51,    34,    10,    43,
       1,    38,    51,    35,    28,    11,     1,    51,    40,    15,
      34,     1,     7,    25,    38,   225,   247,   221,   255,    51,
     230,     1,    19,    17,    21,   201,     6,    51,    23,   205,
      31,    17,    33,     5,   214,    36,   235,   217,    28,   235,
     216,    42,    10,    44,    34,    17,    47,    48,    38,    11,
      51,   261,   262,    15,   258,    17,     1,    25,     1,   239,
      32,     6,   242,     6,   240,   241,   265,   243,   267,   265,
     246,   267,   252,    17,    46,    28,     1,    49,    50,    51,
      17,    34,     7,     1,     4,    38,   285,   286,     6,   285,
     286,   271,   272,    50,   274,    31,   306,   277,    23,   275,
     276,   300,   301,    37,   300,   301,   305,     1,     1,   305,
       6,     7,     6,     7,     7,     1,    89,   297,   298,    92,
      52,    30,     9,     8,    33,   324,   325,    36,   324,   325,
      23,    52,    26,    42,    28,    44,     1,    11,    47,    48,
      34,    51,    51,     7,    38,    31,    37,    33,     1,    43,
      36,    23,    51,    50,     6,    39,    42,    51,    44,    51,
       5,    47,    48,    45,    39,    51,    31,    50,    33,    45,
      17,    36,    17,    26,    19,    28,    21,    42,    45,    44,
     254,    34,    47,    48,    45,    38,    51,    32,     6,     7,
      43,     6,     7,   122,   123,   124,   125,   126,    51,   128,
      32,    46,   165,    91,    49,    50,    51,   292,    26,   265,
      28,    26,   325,    28,   120,   134,    34,   121,    -1,    34,
      38,    -1,    -1,    38,    31,    43,    33,    -1,    43,    36,
      -1,    -1,    -1,    51,    -1,    42,    51,    44,    -1,    -1,
      47,    48,    -1,    31,    51,    33,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    31,    42,    33,    44,    -1,    36,    47,
      48,    -1,    -1,    51,    42,    -1,    44,    -1,    -1,    47,
      48,    -1,    31,    51,    33,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    42,    33,    44,    -1,    36,    47,    48,
      -1,    -1,    51,    42,    -1,    44,    -1,    -1,    47,    48,
      -1,    -1,    51,    12,    13,    14,    -1,    16,    -1,    18,
      19,    20,    21
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    41,    54,     1,    51,     0,    55,    57,    57,    27,
      35,    40,    51,    56,    58,    60,    61,    64,    56,    83,
       1,    51,     1,    51,     1,     4,     6,     7,    26,    28,
      34,    38,    43,    51,    75,    77,     1,    31,    33,    36,
      42,    44,    47,    48,    51,    84,    86,    88,    89,    92,
      94,   100,   102,   110,    17,    17,    59,     1,    75,     1,
      75,    51,    15,    51,    60,    81,     1,    51,    17,    17,
       5,    17,    19,    21,    32,    46,    49,    50,    86,   103,
     104,   105,   106,   107,   109,   110,   114,    17,    17,    11,
      15,    17,   111,   112,     1,     4,     1,     3,    23,    51,
      71,    73,     1,    23,    71,     4,    50,    78,     1,     6,
      75,    31,    91,    37,   103,    52,   109,   103,   107,   107,
       9,     8,    12,    13,    14,    16,    18,    19,    20,    21,
      10,    25,   108,   103,    52,    51,   110,   112,   113,    87,
     103,     1,    23,    87,   112,    85,   103,    69,    51,     1,
       6,     1,     1,    23,     6,     7,    63,    57,     1,    23,
      75,     1,     6,     1,    22,    75,    81,    82,    37,   103,
       1,    23,     7,   101,    23,   104,   105,   106,   106,   106,
     106,   106,   107,   106,   107,   109,   109,    10,    25,     1,
      23,     1,    23,   101,   110,     1,     7,    22,     1,    23,
     103,    77,     1,    70,     1,    77,    66,     1,     6,    51,
      74,    77,     3,    51,    57,    56,    62,    57,    79,    50,
      76,    39,    82,   103,     1,     6,    95,    45,   103,     1,
       7,    23,   109,   109,    93,    83,     1,    23,   103,    57,
      77,    68,    57,    77,    67,     1,    77,    24,    71,    72,
      51,    56,    57,    56,    50,     7,    78,    80,    39,     1,
      75,     6,    90,   103,    45,    83,   103,    83,     1,    31,
      56,    57,    57,    56,    57,    77,    65,    57,    71,    56,
      80,    78,    75,   103,   103,    83,    83,     1,    29,    30,
      31,    96,    97,    31,    56,    56,    56,    57,    57,    56,
      83,    83,     1,    31,    31,    83,    17,     1,    31,     1,
      31,    96,    56,    56,    31,    31,   103,     1,    31,     1,
      23,    98,    45,    45,    83,    83,    97,    99,    99
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    55,    54,    56,    56,    57,    57,    57,
      57,    58,    58,    58,    58,    58,    59,    58,    60,    60,
      60,    61,    62,    61,    61,    63,    61,    61,    64,    65,
      64,    66,    64,    67,    64,    64,    68,    64,    69,    64,
      70,    64,    64,    71,    72,    72,    72,    73,    73,    73,
      73,    73,    73,    74,    74,    75,    75,    75,    75,    76,
      75,    75,    77,    77,    77,    78,    79,    78,    80,    80,
      80,    81,    81,    82,    82,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    84,    85,    84,    86,    86,    86,
      86,    87,    87,    88,    89,    89,    90,    89,    91,    89,
      92,    92,    93,    92,    94,    95,    94,    94,    94,    94,
      94,    94,    94,    94,    96,    97,    98,    97,    99,    99,
     100,   100,   100,   100,   101,   101,   102,   102,   103,   103,
     104,   104,   105,   105,   105,   105,   105,   105,   105,   106,
     106,   106,   106,   106,   107,   107,   108,   108,   108,   108,
     109,   109,   109,   109,   109,   110,   110,   110,   110,   111,
     111,   112,   113,   113,   114,   114,   114,   114
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     0,     5,     3,     3,     0,     2,     2,
       2,     3,     2,     3,     3,     3,     0,     5,     1,     2,
       3,     7,     0,     8,     6,     0,     7,     2,     9,     0,
      10,     0,     9,     0,    10,     8,     0,     9,     0,     8,
       0,     9,     2,     4,     0,     2,     1,     1,     2,     2,
       3,     3,     4,     1,     1,     1,     1,     6,     6,     0,
       7,     3,     1,     1,     1,     4,     0,     5,     0,     2,
       1,     4,     3,     0,     1,     0,     2,     2,     2,     2,
       2,     2,     2,     2,     3,     0,     4,     3,     3,     4,
       4,     1,     3,     2,     8,     8,     0,     9,     0,     9,
       6,     6,     0,     7,     7,     0,     8,     7,     8,     8,
       8,     8,     9,     9,     2,     7,     0,     8,     0,     1,
       4,     4,     5,     5,     2,     3,     5,     5,     1,     3,
       1,     3,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     1,     1,     2,     2,     2,     3,     3,
       1,     1,     1,     3,     2,     1,     2,     2,     3,     3,
       3,     2,     1,     2,     1,     1,     1,     1
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
  YYUSE (yytype);
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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

  if (! yyres)
    return yystrlen (yystr);

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
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
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
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
          yyp++;
          yyformat++;
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
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
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
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

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
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
  case 3:
#line 62 "parser.y"
    {
                       yyerror(message[mnMissingIdent]);
                    }
#line 1543 "parser.tab.c"
    break;

  case 4:
#line 67 "parser.y"
    {
                       yyerrok;
                    }
#line 1551 "parser.tab.c"
    break;

  case 6:
#line 74 "parser.y"
    {
                   yyerror(message[mnMissingEnd]);
                 }
#line 1559 "parser.tab.c"
    break;

  case 12:
#line 87 "parser.y"
    {
                 yyerror(message[mnMissingColon]);
                }
#line 1567 "parser.tab.c"
    break;

  case 14:
#line 92 "parser.y"
    {
                 yyerror(message[mnMissingType]);
                }
#line 1575 "parser.tab.c"
    break;

  case 15:
#line 96 "parser.y"
    {
                 yyerror(message[mnMissingType]);
                }
#line 1583 "parser.tab.c"
    break;

  case 16:
#line 100 "parser.y"
    {
                 yyerror(message[mnMissingEquals]);
                }
#line 1591 "parser.tab.c"
    break;

  case 17:
#line 104 "parser.y"
    {
                 yyerrok;
                }
#line 1599 "parser.tab.c"
    break;

  case 19:
#line 111 "parser.y"
    {
             yyerror(message[mnMissingComma]);
            }
#line 1607 "parser.tab.c"
    break;

  case 22:
#line 119 "parser.y"
    {
                  yyerror(message[mnUnclosedParanthesis]);
                 }
#line 1615 "parser.tab.c"
    break;

  case 23:
#line 123 "parser.y"
    {
                  yyerrok;
                 }
#line 1623 "parser.tab.c"
    break;

  case 25:
#line 128 "parser.y"
    {
                  yyerror(message[mnUnclosedParanthesis]);
                 }
#line 1631 "parser.tab.c"
    break;

  case 26:
#line 132 "parser.y"
    {
                  yyerrok;
                 }
#line 1639 "parser.tab.c"
    break;

  case 27:
#line 136 "parser.y"
    {
                  yyerror(message[mnMissingIdent]);
                 }
#line 1647 "parser.tab.c"
    break;

  case 29:
#line 143 "parser.y"
    {
                  yyerror(message[mnMissingReturnType]);
                 }
#line 1655 "parser.tab.c"
    break;

  case 30:
#line 147 "parser.y"
    {
                  yyerrok;
                 }
#line 1663 "parser.tab.c"
    break;

  case 31:
#line 151 "parser.y"
    {
                  yyerror(message[mnUnclosedParanthesis]);
                 }
#line 1671 "parser.tab.c"
    break;

  case 32:
#line 155 "parser.y"
    { 
                  yyerrok;
                 }
#line 1679 "parser.tab.c"
    break;

  case 33:
#line 159 "parser.y"
    {
                  yyerror(message[mnMissingColon]);
                 }
#line 1687 "parser.tab.c"
    break;

  case 34:
#line 163 "parser.y"
    {
                  yyerrok;
                 }
#line 1695 "parser.tab.c"
    break;

  case 36:
#line 168 "parser.y"
    {
                  yyerror(message[mnMissingReturnType]);
                 }
#line 1703 "parser.tab.c"
    break;

  case 37:
#line 172 "parser.y"
    {
                  yyerrok;
                 }
#line 1711 "parser.tab.c"
    break;

  case 38:
#line 176 "parser.y"
    {
                 yyerror(message[mnUnclosedParanthesis]);
                }
#line 1719 "parser.tab.c"
    break;

  case 39:
#line 180 "parser.y"
    {
                 yyerrok;
                }
#line 1727 "parser.tab.c"
    break;

  case 40:
#line 184 "parser.y"
    {
                 yyerror(message[mnMissingColon]);
                }
#line 1735 "parser.tab.c"
    break;

  case 41:
#line 188 "parser.y"
    {
                 yyerrok;
                }
#line 1743 "parser.tab.c"
    break;

  case 42:
#line 192 "parser.y"
    {
                  yyerror(message[mnMissingIdent]);
                 }
#line 1751 "parser.tab.c"
    break;

  case 46:
#line 203 "parser.y"
    {
                       yyerror(message[mnMissingSemiColon]);
                      }
#line 1759 "parser.tab.c"
    break;

  case 48:
#line 211 "parser.y"
    {
                  yyerror(message[mnMissingComma]);
                 }
#line 1767 "parser.tab.c"
    break;

  case 50:
#line 216 "parser.y"
    {
                  yyerror(message[mnMissingComma]);
                 }
#line 1775 "parser.tab.c"
    break;

  case 58:
#line 230 "parser.y"
    {
       yyerror(message[mnMissingType]);
      }
#line 1783 "parser.tab.c"
    break;

  case 59:
#line 234 "parser.y"
    {
        yyerror(message[mnMissingClosingBracket]);
       }
#line 1791 "parser.tab.c"
    break;

  case 60:
#line 238 "parser.y"
    {
        yyerrok;
       }
#line 1799 "parser.tab.c"
    break;

  case 66:
#line 252 "parser.y"
    {
         yyerror(message[mnMissingColon]);
        }
#line 1807 "parser.tab.c"
    break;

  case 67:
#line 256 "parser.y"
    {
         yyerrok;
        }
#line 1815 "parser.tab.c"
    break;

  case 70:
#line 264 "parser.y"
    {
              yyerror(message[mnMissingComma]);
             }
#line 1823 "parser.tab.c"
    break;

  case 72:
#line 271 "parser.y"
    {
             yyerror(message[mnMissingColon]);
            }
#line 1831 "parser.tab.c"
    break;

  case 85:
#line 291 "parser.y"
    {
                        yyerror(message[mnMissingEquals]);
                       }
#line 1839 "parser.tab.c"
    break;

  case 86:
#line 295 "parser.y"
    {
                        yyerrok;
                       }
#line 1847 "parser.tab.c"
    break;

  case 88:
#line 302 "parser.y"
    {
                   yyerror(message[mnUnclosedParanthesis]);
                  }
#line 1855 "parser.tab.c"
    break;

  case 90:
#line 307 "parser.y"
    {
                   yyerror(message[mnUnclosedParanthesis]);
                  }
#line 1863 "parser.tab.c"
    break;

  case 95:
#line 321 "parser.y"
    {
                  yyerror(message[mnMissingEnd]);                
                }
#line 1871 "parser.tab.c"
    break;

  case 96:
#line 325 "parser.y"
    {
                yyerror(message[mnMissingColon]);
               }
#line 1879 "parser.tab.c"
    break;

  case 97:
#line 329 "parser.y"
    {
                yyerrok;
               }
#line 1887 "parser.tab.c"
    break;

  case 98:
#line 333 "parser.y"
    {
                yyerror(message[mnMissingIdent]);
               }
#line 1895 "parser.tab.c"
    break;

  case 99:
#line 337 "parser.y"
    {
                yyerrok;
               }
#line 1903 "parser.tab.c"
    break;

  case 101:
#line 344 "parser.y"
    {
                    yyerror(message[mnMissingEnd]);
                  }
#line 1911 "parser.tab.c"
    break;

  case 102:
#line 348 "parser.y"
    {
                   yyerror(message[mnUnclosedParanthesis]);
                  }
#line 1919 "parser.tab.c"
    break;

  case 103:
#line 352 "parser.y"
    {
                   yyerrok;
                  }
#line 1927 "parser.tab.c"
    break;

  case 105:
#line 359 "parser.y"
    {
                yyerror(message[mnUnclosedParanthesis]);
               }
#line 1935 "parser.tab.c"
    break;

  case 106:
#line 363 "parser.y"
    {
                yyerrok;
               }
#line 1943 "parser.tab.c"
    break;

  case 107:
#line 367 "parser.y"
    {
                yyerror(message[mnMissingEnd]);
               }
#line 1951 "parser.tab.c"
    break;

  case 109:
#line 372 "parser.y"
    {
                yyerror(message[mnMissingEnd]);
               }
#line 1959 "parser.tab.c"
    break;

  case 111:
#line 378 "parser.y"
    {
                yyerror(message[mnMissingEnd]);
               }
#line 1967 "parser.tab.c"
    break;

  case 113:
#line 384 "parser.y"
    {
                yyerror(message[mnMissingEnd]);
               }
#line 1975 "parser.tab.c"
    break;

  case 116:
#line 394 "parser.y"
    {
            yyerror(message[mnUnclosedParanthesis]);
           }
#line 1983 "parser.tab.c"
    break;

  case 117:
#line 398 "parser.y"
    {
            yyerrok;
           }
#line 1991 "parser.tab.c"
    break;

  case 121:
#line 408 "parser.y"
    {
                   yyerror(message[mnUnclosedParanthesis]);
                  }
#line 1999 "parser.tab.c"
    break;

  case 123:
#line 413 "parser.y"
    {
                  yyerror(message[mnUnclosedParanthesis]);
                 }
#line 2007 "parser.tab.c"
    break;

  case 127:
#line 423 "parser.y"
    {
                  yyerror(message[mnUnclosedParanthesis]);
                 }
#line 2015 "parser.tab.c"
    break;

  case 160:
#line 474 "parser.y"
    {
            yyerror(message[mnMissingClosingBracket]);
           }
#line 2023 "parser.tab.c"
    break;


#line 2027 "parser.tab.c"

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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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
                  yystos[*yyssp], yyvsp);
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
#line 490 "parser.y"

