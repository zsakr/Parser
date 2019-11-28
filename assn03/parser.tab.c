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
#line 23 "parser.y"

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
#line 29 "parser.y"

    int w;                 /* ICONST */
    double r;              /* FCONST */
    char *sb;              /* SCONST */
    struct he *phe;        /* IDENT  */

    /* more to be added during Phase 3 */
    char op;

#line 180 "parser.tab.c"

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
#define YYLAST   387

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  130
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  283

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
       0,    56,    56,    59,    58,    71,    72,    74,    73,    81,
      82,    86,    87,    89,    88,    98,    99,   102,   104,   103,
     111,   112,   115,   116,   117,   118,   119,   121,   120,   130,
     132,   131,   139,   142,   143,   144,   145,   146,   147,   149,
     148,   158,   159,   162,   163,   164,   166,   165,   176,   177,
     180,   181,   182,   185,   186,   188,   187,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   208,   210,   209,   219,
     220,   221,   224,   227,   228,   232,   233,   236,   237,   238,
     239,   240,   243,   247,   248,   252,   253,   256,   257,   260,
     263,   264,   265,   266,   269,   270,   273,   274,   275,   276,
     277,   278,   279,   282,   283,   284,   287,   287,   290,   291,
     294,   295,   298,   299,   300,   301,   302,   305,   306,   307,
     308,   311,   312,   315,   316,   320,   321,   324,   325,   326,
     327
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
  "IDENT", "SCONST", "$accept", "program", "$@1", "decl_part", "$@2",
  "body", "$@3", "stat", "varaibledecl", "$@4", "TYPE", "$@5", "procedure",
  "$@6", "paramter", "$@7", "parametertype", "simpleType", "$@8", "INDEX",
  "fieldlist", "function", "$@9", "statement", "assignment", "$@10",
  "subroutinecall", "return", "for", "while", "if", "else", "elif",
  "write", "exprloop", "read", "exprssion", "and", "logic", "simple",
  "condition", "term", "termcond", "factor", "variable", "arrayvar",
  "avarcond", "recvar", "constant", YY_NULLPTR
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

#define YYPACT_NINF -120

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-120)))

#define YYTABLE_NINF -58

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      27,    19,    69,  -120,   214,  -120,   214,    46,    67,   290,
      45,   214,   214,    97,    45,    79,   136,  -120,   217,    84,
     217,   115,   296,  -120,   111,   151,  -120,   164,  -120,   103,
      22,   140,   159,  -120,  -120,  -120,   137,  -120,  -120,   129,
      23,  -120,   132,   214,   296,   157,   185,   197,   171,   219,
     224,   295,   213,   228,  -120,  -120,  -120,  -120,  -120,  -120,
     167,  -120,    28,  -120,   249,    31,   241,   211,    26,    77,
    -120,   214,   181,   217,   198,    36,   232,  -120,  -120,    45,
     242,   244,   171,   226,   112,   112,  -120,   245,  -120,   275,
     287,   332,   171,   255,   262,   171,   177,   305,  -120,  -120,
    -120,  -120,   296,   313,  -120,   171,   144,    24,   188,   249,
     304,    10,    52,  -120,   317,    52,   301,    45,   214,   146,
     319,   309,   217,   137,  -120,  -120,   217,   214,  -120,  -120,
     171,   303,   320,   112,   171,  -120,  -120,  -120,  -120,  -120,
    -120,    83,  -120,  -120,  -120,   284,   166,   166,   166,   166,
     166,   166,   166,   112,   166,  -120,  -120,   316,   318,   235,
     305,   153,  -120,  -120,   118,  -120,   171,   326,   330,  -120,
      45,   192,   144,    52,  -120,  -120,   200,   202,   336,   249,
     229,   214,  -120,    45,   311,   323,    21,  -120,    59,    45,
     357,   321,   313,  -120,   341,   112,   112,  -120,  -120,  -120,
    -120,   273,   273,   273,   273,   273,   273,   273,   296,  -120,
    -120,   171,  -120,   314,  -120,   313,  -120,   171,  -120,    45,
     233,   214,   144,    45,  -120,   360,   217,  -120,   171,   238,
     345,  -120,  -120,  -120,  -120,   257,   362,  -120,   353,  -120,
    -120,  -120,  -120,   214,    45,    45,  -120,   198,    80,   296,
       7,   267,  -120,  -120,   340,    45,  -120,  -120,  -120,   286,
     296,   355,   342,   204,  -120,   343,  -120,  -120,  -120,   344,
    -120,   171,  -120,  -120,   346,  -120,  -120,   356,  -120,   331,
     296,   348,  -120
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     3,     5,     1,     5,     0,     0,     0,
       0,     5,     5,     0,     0,     0,     0,    18,     0,     0,
       0,    13,    15,     2,     0,     0,    55,     0,     4,     0,
       0,     0,     0,    45,    44,    43,     0,    24,    23,     0,
       0,    20,     0,     5,    57,     0,     0,     0,     0,     0,
       0,   117,     0,     0,    58,    59,    60,    61,    62,    63,
      65,    64,     0,     7,     0,     0,     0,     0,     0,     0,
      30,     5,     0,     0,     0,     0,     0,    27,    46,     0,
       0,     0,     0,     0,     0,     0,    92,     0,    72,    90,
      94,    96,     0,     0,     0,   124,     0,   118,   120,    12,
      11,    16,    15,    88,    67,     0,     0,     0,     0,     0,
       0,     0,     0,    39,     0,     0,     0,     0,     5,     0,
       0,     0,     0,     0,    52,    26,     0,     5,     8,    14,
       0,     0,     0,     0,     0,   130,   129,   128,   127,   114,
     104,   108,   113,   112,   103,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   106,   105,     0,     0,   117,
     125,     0,   122,    69,     0,   119,     0,     0,     0,    66,
       0,     0,     0,     0,    42,    33,     0,     0,     0,     0,
       0,     5,    29,     0,     0,     0,     0,    51,     0,     0,
       0,     0,    88,   116,     0,     0,     0,   109,    93,    91,
      95,    99,    98,    97,   101,   102,     0,   100,    57,    85,
     126,   124,   121,     0,    70,    88,    86,     0,    56,     0,
       0,     5,     0,     0,    32,    48,     0,    47,     0,    15,
       0,   115,   111,   110,   107,     0,     0,   123,     0,    71,
      87,    68,    54,     5,     0,     0,    31,     0,     0,    57,
       0,    15,    89,    75,     0,     0,    40,    53,    49,     0,
      15,     0,     0,     0,    77,    16,    76,    38,    73,     0,
      82,     0,    80,    79,     0,    78,    74,     0,    81,     0,
      15,    83,    84
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -120,  -120,  -120,    -4,  -120,   -13,  -120,   -22,   361,  -120,
     -17,  -120,  -120,  -120,   -24,  -120,  -120,   -60,  -120,   134,
     -28,  -120,  -120,    -9,  -120,  -120,   -74,  -120,  -120,  -120,
    -120,   119,   102,  -120,   -79,  -120,   -77,   239,   237,   206,
     180,   -73,  -120,  -119,   -68,  -120,   176,   -76,  -120
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     6,    10,    43,    23,    44,   101,    11,    31,
      39,   126,    12,   116,    69,   178,   175,    40,   127,   121,
      76,    13,    64,   102,    54,   168,    55,    56,    57,    58,
      59,   262,   263,    60,   167,    61,    88,    89,    90,    91,
     156,   140,   197,   141,    62,    97,   162,    98,   143
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      52,    28,    14,    42,   106,   131,    72,    24,    25,    27,
     139,   139,   144,    53,   193,   157,   142,   142,   161,   164,
       3,   165,    77,    70,    78,    65,   160,    65,   169,   104,
     111,   112,   111,   112,    65,    80,   260,   261,    33,    79,
     105,   108,   122,   123,    34,    71,    21,   124,    35,   172,
     -22,   176,   -50,   190,   -22,    65,   119,   194,   -22,   139,
      77,   174,    67,   -22,    67,   142,   128,   117,     1,     5,
       4,    67,    22,    68,   -22,    68,   232,   233,   113,   139,
     206,    77,   107,   171,   210,   142,   -28,    75,   177,   215,
     -28,   180,    67,   195,   -28,   187,    29,    15,    26,   -28,
     114,   115,   170,    68,   182,   186,    65,   -25,   196,   188,
     -28,   -25,    63,   230,   183,   -25,    -7,   133,    16,   222,
     -25,   139,   139,   189,    -5,   213,    66,   142,   142,   134,
      77,   -25,     7,    77,   236,     9,   240,     8,    -6,   239,
     241,   214,    -7,    67,   135,    78,    73,    77,     9,   220,
      -7,   249,    63,    30,    68,    -7,   -17,   218,   136,   -21,
     211,   137,   138,    51,   -17,    63,    -7,   -21,   219,   -17,
     224,    -5,   -21,   -19,    74,   212,   227,   223,    -9,     7,
     -17,   -19,   113,   -21,     8,    84,   -19,    85,    75,   113,
      84,   -10,    85,   113,   277,     9,    84,   -19,    85,   235,
     163,    78,    82,   113,   118,   115,   242,   250,    81,   248,
     246,   -34,   115,   254,    83,   -36,   115,   244,   245,   103,
     251,    86,    87,   -41,   -41,   -35,   115,    86,    87,   265,
     113,   256,   257,   260,   113,   273,    92,   269,   270,   255,
     259,    93,   267,    32,    99,    33,    94,   109,   120,     7,
      95,    34,   -37,   115,     8,    35,   243,   115,   281,   100,
      36,    45,   110,   125,    46,     9,   145,    37,    38,   -57,
      47,    45,    48,   129,    46,    49,    50,    33,   132,    51,
      47,   130,    48,    34,   146,    49,    50,    35,   253,    51,
      45,    17,   153,    46,   155,   147,    18,    19,   264,    47,
      45,    48,    20,    46,    49,    50,    94,   158,    51,    47,
      95,    48,    96,   159,    49,    50,    94,   268,    51,    45,
     166,   173,    46,   179,   181,   184,   191,   192,    47,    45,
      48,   185,    46,    49,    50,   198,   148,    51,    47,   208,
      48,   209,   217,    49,    50,   149,   150,    51,   151,   216,
     152,   153,   154,   155,   201,   202,   203,   204,   205,   221,
     207,   225,   226,   228,   231,   238,   229,   247,   252,   211,
      96,   266,   271,   272,   275,   276,   280,   278,   261,   279,
      41,   258,   274,   282,   200,   199,   234,   237
};

static const yytype_uint16 yycheck[] =
{
      22,    14,     6,    20,    64,    82,    30,    11,    12,    13,
      84,    85,    85,    22,   133,    92,    84,    85,    95,    96,
       1,    97,     1,     1,     1,     3,    94,     3,   105,     1,
       6,     7,     6,     7,     3,    44,    29,    30,    28,    43,
      12,    65,     6,     7,    34,    23,     1,    75,    38,   109,
      27,   111,    31,   130,    31,     3,    73,   134,    35,   133,
       1,    51,    40,    40,    40,   133,    79,    71,    41,     0,
      51,    40,    27,    51,    51,    51,   195,   196,     1,   153,
     153,     1,    51,   107,   160,   153,    27,    51,   112,   166,
      31,   115,    40,    10,    35,   123,    17,    51,     1,    40,
      23,    24,   106,    51,   117,   122,     3,    27,    25,   126,
      51,    31,     1,   192,   118,    35,     1,     5,    51,   179,
      40,   195,   196,   127,    27,     7,    23,   195,   196,    17,
       1,    51,    35,     1,   211,    51,   215,    40,    27,   213,
     217,    23,    27,    40,    32,     1,     6,     1,    51,   173,
      35,   228,     1,    17,    51,    40,    27,   170,    46,    27,
       7,    49,    50,    51,    35,     1,    51,    35,   172,    40,
     183,    27,    40,    27,    15,    22,   189,   181,    27,    35,
      51,    35,     1,    51,    40,    19,    40,    21,    51,     1,
      19,    27,    21,     1,   271,    51,    19,    51,    21,   208,
      23,     1,    17,     1,    23,    24,   219,   229,    51,   226,
     223,    23,    24,   235,    17,    23,    24,   221,   222,    52,
     229,    50,    51,    23,    24,    23,    24,    50,    51,   251,
       1,   244,   245,    29,     1,    31,    17,   259,   260,   243,
     249,    17,   255,    26,    31,    28,    11,     6,    50,    35,
      15,    34,    23,    24,    40,    38,    23,    24,   280,    31,
      43,    33,    51,    31,    36,    51,    21,    50,    51,    31,
      42,    33,    44,    31,    36,    47,    48,    28,    52,    51,
      42,    37,    44,    34,     9,    47,    48,    38,    31,    51,
      33,     1,    19,    36,    21,     8,     6,     7,    31,    42,
      33,    44,    12,    36,    47,    48,    11,    52,    51,    42,
      15,    44,    17,    51,    47,    48,    11,    31,    51,    33,
       7,    17,    36,     6,    23,     6,    23,     7,    42,    33,
      44,    22,    36,    47,    48,    51,     4,    51,    42,    23,
      44,    23,    12,    47,    48,    13,    14,    51,    16,    23,
      18,    19,    20,    21,   148,   149,   150,   151,   152,    23,
     154,    50,    39,     6,    23,    51,    45,     7,    23,     7,
      17,    31,    17,    31,    31,    31,    45,    31,    30,    23,
      19,   247,   263,   281,   147,   146,   206,   211
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    41,    54,     1,    51,     0,    55,    35,    40,    51,
      56,    61,    65,    74,    56,    51,    51,     1,     6,     7,
      12,     1,    27,    58,    56,    56,     1,    56,    58,    17,
      17,    62,    26,    28,    34,    38,    43,    50,    51,    63,
      70,    61,    63,    57,    59,    33,    36,    42,    44,    47,
      48,    51,    60,    76,    77,    79,    80,    81,    82,    83,
      86,    88,    97,     1,    75,     3,    23,    40,    51,    67,
       1,    23,    67,     6,    15,    51,    73,     1,     1,    56,
      76,    51,    17,    17,    19,    21,    50,    51,    89,    90,
      91,    92,    17,    17,    11,    15,    17,    98,   100,    31,
      31,    60,    76,    52,     1,    12,    70,    51,    67,     6,
      51,     6,     7,     1,    23,    24,    66,    56,    23,    63,
      50,    72,     6,     7,    73,    31,    64,    71,    58,    31,
      37,    89,    52,     5,    17,    32,    46,    49,    50,    79,
      94,    96,    97,   101,    94,    21,     9,     8,     4,    13,
      14,    16,    18,    19,    20,    21,    93,    89,    52,    51,
      97,    89,    99,    23,    89,   100,     7,    87,    78,    89,
      56,    67,    70,    17,    51,    69,    70,    67,    68,     6,
      67,    23,    58,    56,     6,    22,    63,    73,    63,    56,
      89,    23,     7,    96,    89,    10,    25,    95,    51,    90,
      91,    92,    92,    92,    92,    92,    94,    92,    23,    23,
     100,     7,    22,     7,    23,    89,    23,    12,    58,    56,
      67,    23,    70,    56,    58,    50,    39,    58,     6,    45,
      87,    23,    96,    96,    93,    76,    89,    99,    51,    79,
      87,    89,    58,    23,    56,    56,    58,     7,    63,    89,
      60,    76,    23,    31,    60,    56,    58,    58,    72,    76,
      29,    30,    84,    85,    31,    60,    31,    58,    31,    60,
      60,    17,    31,    31,    84,    31,    31,    89,    31,    23,
      45,    60,    85
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    55,    54,    56,    56,    57,    56,    56,
      56,    58,    58,    59,    58,    60,    60,    61,    62,    61,
      61,    61,    63,    63,    63,    63,    63,    64,    63,    65,
      66,    65,    65,    67,    67,    67,    67,    67,    67,    68,
      67,    69,    69,    70,    70,    70,    71,    70,    72,    72,
      73,    73,    73,    74,    74,    75,    74,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    77,    78,    77,    79,
      79,    79,    80,    81,    81,    82,    82,    83,    83,    83,
      83,    83,    84,    85,    85,    86,    86,    87,    87,    88,
      89,    89,    89,    89,    90,    90,    91,    91,    91,    91,
      91,    91,    91,    92,    92,    92,    93,    93,    94,    94,
      95,    95,    96,    96,    96,    96,    96,    97,    97,    97,
      97,    98,    98,    99,    99,   100,   100,   101,   101,   101,
     101
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     0,     5,     0,     2,     0,     5,     2,
       2,     3,     3,     0,     4,     0,     2,     3,     0,     5,
       3,     3,     1,     1,     1,     6,     3,     0,     4,     6,
       0,     8,     7,     3,     2,     3,     3,     3,     7,     0,
       6,     1,     1,     1,     1,     1,     0,     5,     3,     5,
       3,     3,     2,     9,     8,     0,     6,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     0,     5,     3,
       4,     5,     2,     8,     9,     6,     7,     7,     8,     8,
       8,     9,     2,     6,     7,     4,     4,     3,     0,     6,
       1,     3,     1,     3,     1,     3,     1,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     1,     3,     1,     2,
       2,     2,     1,     1,     1,     3,     2,     1,     2,     3,
       2,     3,     2,     3,     0,     2,     3,     1,     1,     1,
       1
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
#line 59 "parser.y"
    {
                       yyerror(message[mnMissingIdent]);
                    }
#line 1492 "parser.tab.c"
    break;

  case 4:
#line 63 "parser.y"
    {
                       yyerrok;
                    }
#line 1500 "parser.tab.c"
    break;

  case 5:
#line 71 "parser.y"
    {;}
#line 1506 "parser.tab.c"
    break;

  case 7:
#line 74 "parser.y"
    {
                       yyerror(message[mnMissingdecl]);
                    }
#line 1514 "parser.tab.c"
    break;

  case 8:
#line 78 "parser.y"
    {
                       yyerrok;
                    }
#line 1522 "parser.tab.c"
    break;

  case 13:
#line 89 "parser.y"
    {
                       yyerror(message[mnMissingbody]);
                    }
#line 1530 "parser.tab.c"
    break;

  case 14:
#line 93 "parser.y"
    {
                       yyerrok;
                    }
#line 1538 "parser.tab.c"
    break;

  case 15:
#line 98 "parser.y"
    {;}
#line 1544 "parser.tab.c"
    break;

  case 18:
#line 104 "parser.y"
    {
                       yyerror(message[mnMissingColon]);
                    }
#line 1552 "parser.tab.c"
    break;

  case 19:
#line 108 "parser.y"
    {
                       yyerrok;
                    }
#line 1560 "parser.tab.c"
    break;

  case 27:
#line 121 "parser.y"
    {
                       yyerror(message[mnMissingtype]);
                    }
#line 1568 "parser.tab.c"
    break;

  case 28:
#line 125 "parser.y"
    {
                       yyerrok;
                    }
#line 1576 "parser.tab.c"
    break;

  case 30:
#line 132 "parser.y"
    {
                       yyerror(message[mnMissingproceduer]);
                    }
#line 1584 "parser.tab.c"
    break;

  case 31:
#line 136 "parser.y"
    {
                       yyerrok;
                    }
#line 1592 "parser.tab.c"
    break;

  case 39:
#line 149 "parser.y"
    {
                       yyerror(message[mnMissingPARAMTER]);
                    }
#line 1600 "parser.tab.c"
    break;

  case 40:
#line 153 "parser.y"
    {
                       yyerrok;
                    }
#line 1608 "parser.tab.c"
    break;

  case 46:
#line 166 "parser.y"
    {
                       yyerror(message[mnMissingtype]);
                    }
#line 1616 "parser.tab.c"
    break;

  case 47:
#line 170 "parser.y"
    {
                       yyerrok;
                    }
#line 1624 "parser.tab.c"
    break;

  case 55:
#line 188 "parser.y"
    {
                       yyerror(message[mnMissingfunc]);
                    }
#line 1632 "parser.tab.c"
    break;

  case 56:
#line 192 "parser.y"
    {
                       yyerrok;
                    }
#line 1640 "parser.tab.c"
    break;

  case 57:
#line 197 "parser.y"
    {;}
#line 1646 "parser.tab.c"
    break;

  case 67:
#line 210 "parser.y"
    {
                       yyerror(message[mnMissingdecl]);
                    }
#line 1654 "parser.tab.c"
    break;

  case 68:
#line 214 "parser.y"
    {
                       yyerrok;
                    }
#line 1662 "parser.tab.c"
    break;

  case 88:
#line 257 "parser.y"
    {;}
#line 1668 "parser.tab.c"
    break;


#line 1672 "parser.tab.c"

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
#line 329 "parser.y"

