/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     KW_CARA = 258,
     KW_INTE = 259,
     KW_REAL = 260,
     KW_SE = 261,
     KW_ENTAUM = 262,
     KW_SENAUM = 263,
     KW_ENQUANTO = 264,
     KW_ENTRADA = 265,
     KW_ESCREVA = 266,
     KW_RETORNE = 267,
     OPERATOR_LE = 268,
     OPERATOR_GE = 269,
     OPERATOR_EQ = 270,
     OPERATOR_DIF = 271,
     TK_IDENTIFIER = 272,
     LIT_INTEIRO = 273,
     LIT_FLOAT = 274,
     LIT_CHAR = 275,
     LIT_STRING = 276,
     TOKEN_ERROR = 277
   };
#endif
/* Tokens.  */
#define KW_CARA 258
#define KW_INTE 259
#define KW_REAL 260
#define KW_SE 261
#define KW_ENTAUM 262
#define KW_SENAUM 263
#define KW_ENQUANTO 264
#define KW_ENTRADA 265
#define KW_ESCREVA 266
#define KW_RETORNE 267
#define OPERATOR_LE 268
#define OPERATOR_GE 269
#define OPERATOR_EQ 270
#define OPERATOR_DIF 271
#define TK_IDENTIFIER 272
#define LIT_INTEIRO 273
#define LIT_FLOAT 274
#define LIT_CHAR 275
#define LIT_STRING 276
#define TOKEN_ERROR 277




/* Copy the first part of user declarations.  */
#line 1 "parser.y"
 
    #include "hash.h"
    #include "ast.h"

    int yyerror();
    int getLineNumber();
    int yylex();
    extern FILE *yyout;


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 12 "parser.y"
{
    HASH_NODE *symbol;
    AST *ast;
}
/* Line 193 of yacc.c.  */
#line 155 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 168 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   353

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  16
/* YYNRULES -- Number of rules.  */
#define YYNRULES  61
/* YYNRULES -- Number of states.  */
#define YYNSTATES  130

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   277

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    29,     2,
      34,    35,    25,    23,     2,    24,     2,    26,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    33,
      27,    32,    28,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    36,     2,    37,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    38,    30,    39,    31,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    13,    17,    21,    24,
      25,    29,    34,    39,    46,    50,    53,    55,    56,    61,
      69,    73,    77,    84,    93,    99,   102,   103,   105,   107,
     109,   114,   116,   121,   123,   127,   131,   135,   139,   143,
     147,   151,   155,   159,   163,   167,   171,   175,   179,   182,
     183,   186,   187,   191,   195,   199,   200,   203,   204,   206,
     208,   210
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      41,     0,    -1,    42,    -1,    43,    44,    -1,    -1,     4,
      17,    45,    -1,     3,    17,    45,    -1,     5,    17,    45,
      -1,    43,    44,    -1,    -1,    32,    50,    33,    -1,    34,
      52,    35,    46,    -1,    36,    18,    37,    33,    -1,    36,
      18,    37,    32,    54,    33,    -1,    38,    47,    39,    -1,
      48,    47,    -1,    33,    -1,    -1,    17,    32,    50,    33,
      -1,    17,    36,    50,    37,    32,    50,    33,    -1,    11,
      49,    33,    -1,    12,    50,    33,    -1,     7,    48,     6,
      34,    50,    35,    -1,     7,    48,     8,    48,     6,    34,
      50,    35,    -1,    48,     9,    34,    50,    35,    -1,    50,
      49,    -1,    -1,    18,    -1,    19,    -1,    20,    -1,    17,
      36,    50,    37,    -1,    17,    -1,    17,    34,    51,    35,
      -1,    10,    -1,    50,    23,    50,    -1,    50,    24,    50,
      -1,    50,    25,    50,    -1,    50,    26,    50,    -1,    50,
      27,    50,    -1,    50,    28,    50,    -1,    50,    13,    50,
      -1,    50,    14,    50,    -1,    50,    15,    50,    -1,    50,
      16,    50,    -1,    50,    29,    50,    -1,    50,    30,    50,
      -1,    50,    31,    50,    -1,    34,    50,    35,    -1,    50,
      51,    -1,    -1,    53,    52,    -1,    -1,     4,    17,    53,
      -1,     3,    17,    53,    -1,     5,    17,    53,    -1,    -1,
      55,    54,    -1,    -1,    20,    -1,    19,    -1,    18,    -1,
      21,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    68,    68,    71,    72,    75,    76,    77,    80,    81,
      84,    85,    86,    87,    90,    93,    94,    95,    98,    99,
     100,   101,   102,   103,   104,   107,   108,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   134,   135,
     138,   139,   142,   143,   144,   145,   148,   149,   152,   153,
     154,   155
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "KW_CARA", "KW_INTE", "KW_REAL", "KW_SE",
  "KW_ENTAUM", "KW_SENAUM", "KW_ENQUANTO", "KW_ENTRADA", "KW_ESCREVA",
  "KW_RETORNE", "OPERATOR_LE", "OPERATOR_GE", "OPERATOR_EQ",
  "OPERATOR_DIF", "TK_IDENTIFIER", "LIT_INTEIRO", "LIT_FLOAT", "LIT_CHAR",
  "LIT_STRING", "TOKEN_ERROR", "'+'", "'-'", "'*'", "'/'", "'<'", "'>'",
  "'&'", "'|'", "'~'", "'='", "';'", "'('", "')'", "'['", "']'", "'{'",
  "'}'", "$accept", "programa", "decl", "dec", "resto", "decresto",
  "bloco", "lcmd", "cmd", "expr_escreva", "expr", "func_val",
  "func_param_l", "func_param", "val_lista", "val", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,    43,    45,    42,    47,    60,    62,    38,
     124,   126,    61,    59,    40,    41,    91,    93,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    40,    41,    42,    42,    43,    43,    43,    44,    44,
      45,    45,    45,    45,    46,    47,    47,    47,    48,    48,
      48,    48,    48,    48,    48,    49,    49,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    51,    51,
      52,    52,    53,    53,    53,    53,    54,    54,    55,    55,
      55,    55
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     3,     3,     3,     2,     0,
       3,     4,     4,     6,     3,     2,     1,     0,     4,     7,
       3,     3,     6,     8,     5,     2,     0,     1,     1,     1,
       4,     1,     4,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     0,
       2,     0,     3,     3,     3,     0,     2,     0,     1,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     0,     0,     2,     9,     0,     0,     0,
       1,     9,     3,     0,    51,     0,     6,     5,     7,     8,
      33,    31,    27,    28,    29,     0,     0,     0,     0,     0,
       0,    51,     0,    49,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      55,    55,    55,     0,    50,     0,    49,     0,     0,    47,
      40,    41,    42,    43,    34,    35,    36,    37,    38,    39,
      44,    45,    46,    53,    52,    54,    17,    11,    57,    12,
      48,    32,    30,     0,    26,     0,     0,    16,     0,    17,
      60,    59,    58,    61,     0,    57,     0,     0,    26,     0,
       0,     0,    14,     0,    15,    13,    56,     0,     0,    20,
      25,    21,     0,     0,     0,     0,     0,    18,     0,     0,
       0,     0,     0,    24,    22,     0,     0,     0,    19,    23
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     4,     5,    11,    12,    16,    77,    88,    89,    97,
      56,    57,    30,    31,    94,    95
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -67
static const yytype_int16 yypact[] =
{
     101,   -16,    20,    56,     8,   -67,   101,   -23,   -23,   -23,
     -67,   101,   -67,    40,   136,    38,   -67,   -67,   -67,   -67,
     -67,    11,   -67,   -67,   -67,    40,   233,    58,    69,    86,
      65,   136,    70,    40,    40,   141,    40,    40,    40,    40,
      40,    40,    40,    40,    40,    40,    40,    40,    40,   -67,
     136,   136,   136,    73,   -67,   -17,   100,    87,    53,   -67,
      -9,    -9,    90,    90,   317,   317,   322,   322,   -11,   -11,
      39,    39,   -67,   -67,   -67,   -67,    32,   -67,    77,   -67,
     -67,   -67,   -67,    82,    40,    40,   -22,   -67,    93,    29,
     -67,   -67,   -67,   -67,    75,    77,    55,   125,   100,   254,
      40,    40,   -67,    99,   -67,   -67,   -67,   126,    82,   -67,
     -67,   -67,   275,   122,    40,    40,    42,   -67,   129,   164,
     187,   128,    40,   -67,   -67,    40,   296,   210,   -67,   -67
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -67,   -67,   -67,   163,   162,    83,   -67,    85,   -66,    84,
     -13,   119,   150,    92,    88,   -67
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      26,     7,    36,    37,    38,    39,    38,    39,    10,    13,
     100,    14,    35,    15,   101,    78,    79,    96,    46,    47,
      48,    58,    48,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    83,     8,   103,    83,
      84,    85,   116,    84,    85,    33,    86,    34,   121,    86,
      20,   103,    36,    37,    38,    39,    32,    21,    22,    23,
      24,   107,    87,   108,   103,    87,    36,    37,    38,    39,
      48,    98,    99,     9,    25,    50,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    98,    51,   112,   113,    83,
      82,    17,    18,    84,    85,    90,    91,    92,    93,    86,
      53,   119,   120,    52,     1,     2,     3,    55,   105,   126,
      20,    76,   127,    36,    37,    38,    39,    21,    22,    23,
      24,    48,    81,    40,    41,    42,    43,    44,    45,    46,
      47,    48,   102,   114,    25,    36,    37,    38,    39,    27,
      28,    29,    73,    74,    75,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    36,    37,    38,    39,   109,   118,
     115,   122,   125,     6,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    19,   104,    80,    59,    36,    37,    38,
      39,    54,   110,   106,     0,     0,     0,    40,    41,    42,
      43,    44,    45,    46,    47,    48,     0,     0,     0,   123,
      36,    37,    38,    39,     0,     0,     0,     0,     0,     0,
      40,    41,    42,    43,    44,    45,    46,    47,    48,     0,
       0,     0,   124,    36,    37,    38,    39,     0,     0,     0,
       0,     0,     0,    40,    41,    42,    43,    44,    45,    46,
      47,    48,     0,     0,     0,   129,    36,    37,    38,    39,
       0,     0,     0,     0,     0,     0,    40,    41,    42,    43,
      44,    45,    46,    47,    48,     0,    49,    36,    37,    38,
      39,     0,     0,     0,     0,     0,     0,    40,    41,    42,
      43,    44,    45,    46,    47,    48,     0,   111,    36,    37,
      38,    39,     0,     0,     0,     0,     0,     0,    40,    41,
      42,    43,    44,    45,    46,    47,    48,     0,   117,    36,
      37,    38,    39,     0,     0,     0,     0,     0,     0,    40,
      41,    42,    43,    44,    45,    46,    47,    48,     0,   128,
      36,    37,    38,    39,     0,    36,    37,    38,    39,     0,
       0,     0,    42,    43,    44,    45,    46,    47,    48,    44,
      45,    46,    47,    48
};

static const yytype_int8 yycheck[] =
{
      13,    17,    13,    14,    15,    16,    15,    16,     0,    32,
      32,    34,    25,    36,    36,    32,    33,    83,    29,    30,
      31,    34,    31,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,     7,    17,     9,     7,
      11,    12,   108,    11,    12,    34,    17,    36,     6,    17,
      10,     9,    13,    14,    15,    16,    18,    17,    18,    19,
      20,     6,    33,     8,     9,    33,    13,    14,    15,    16,
      31,    84,    85,    17,    34,    17,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    98,    17,   100,   101,     7,
      37,     8,     9,    11,    12,    18,    19,    20,    21,    17,
      35,   114,   115,    17,     3,     4,     5,    37,    33,   122,
      10,    38,   125,    13,    14,    15,    16,    17,    18,    19,
      20,    31,    35,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    39,    34,    34,    13,    14,    15,    16,     3,
       4,     5,    50,    51,    52,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    13,    14,    15,    16,    33,    37,
      34,    32,    34,     0,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    11,    89,    56,    35,    13,    14,    15,
      16,    31,    98,    95,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,    -1,    35,
      13,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      -1,    -1,    35,    13,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    -1,    35,    13,    14,    15,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    33,    13,    14,    15,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    33,    13,    14,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    33,    13,
      14,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    33,
      13,    14,    15,    16,    -1,    13,    14,    15,    16,    -1,
      -1,    -1,    25,    26,    27,    28,    29,    30,    31,    27,
      28,    29,    30,    31
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,    41,    42,    43,    17,    17,    17,
       0,    43,    44,    32,    34,    36,    45,    45,    45,    44,
      10,    17,    18,    19,    20,    34,    50,     3,     4,     5,
      52,    53,    18,    34,    36,    50,    13,    14,    15,    16,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    33,
      17,    17,    17,    35,    52,    37,    50,    51,    50,    35,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    53,    53,    53,    38,    46,    32,    33,
      51,    35,    37,     7,    11,    12,    17,    33,    47,    48,
      18,    19,    20,    21,    54,    55,    48,    49,    50,    50,
      32,    36,    39,     9,    47,    33,    54,     6,     8,    33,
      49,    33,    50,    50,    34,    34,    48,    33,    37,    50,
      50,     6,    32,    35,    35,    34,    50,    50,    33,    35
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
	    /* Fall through.  */
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

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
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
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

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
#line 68 "parser.y"
    {  astPrint((yyvsp[(1) - (1)].ast), 0); astDecompile((yyvsp[(1) - (1)].ast), yyout); }
    break;

  case 3:
#line 71 "parser.y"
    { (yyval.ast) = astCreate(AST_LATTR, 0, (yyvsp[(1) - (2)].ast), (yyvsp[(2) - (2)].ast), 0, 0); }
    break;

  case 4:
#line 72 "parser.y"
    { (yyval.ast) = 0;}
    break;

  case 5:
#line 75 "parser.y"
    { (yyval.ast) = astCreate(AST_ATTRINTE, (yyvsp[(2) - (3)].symbol), (yyvsp[(3) - (3)].ast), 0, 0, 0); }
    break;

  case 6:
#line 76 "parser.y"
    { (yyval.ast) = astCreate(AST_ATTRCARA, (yyvsp[(2) - (3)].symbol), (yyvsp[(3) - (3)].ast), 0, 0, 0); }
    break;

  case 7:
#line 77 "parser.y"
    { (yyval.ast) = astCreate(AST_ATTRREAL, (yyvsp[(2) - (3)].symbol), (yyvsp[(3) - (3)].ast), 0, 0, 0); }
    break;

  case 8:
#line 80 "parser.y"
    { (yyval.ast) = astCreate(AST_LATTR, 0, (yyvsp[(1) - (2)].ast), (yyvsp[(2) - (2)].ast), 0, 0); }
    break;

  case 9:
#line 81 "parser.y"
    { (yyval.ast) = 0; }
    break;

  case 10:
#line 84 "parser.y"
    { (yyval.ast) = astCreate(AST_ATTR, 0, (yyvsp[(2) - (3)].ast), 0, 0, 0); }
    break;

  case 11:
#line 85 "parser.y"
    { (yyval.ast) = astCreate(AST_FUNC_PARAM, 0, (yyvsp[(2) - (4)].ast), (yyvsp[(4) - (4)].ast), 0, 0); }
    break;

  case 12:
#line 86 "parser.y"
    { (yyval.ast) = astCreate(AST_ATTR_VECTOR, (yyvsp[(2) - (4)].symbol), 0, 0, 0, 0); }
    break;

  case 13:
#line 87 "parser.y"
    { (yyval.ast) = astCreate(AST_ATTR_VECTOR, (yyvsp[(2) - (6)].symbol), (yyvsp[(5) - (6)].ast), 0, 0, 0); }
    break;

  case 14:
#line 90 "parser.y"
    { (yyval.ast) = astCreate(AST_BLOCO, 0, (yyvsp[(2) - (3)].ast), 0, 0, 0); }
    break;

  case 15:
#line 93 "parser.y"
    { (yyval.ast) = astCreate(AST_LCMD, 0, (yyvsp[(1) - (2)].ast), (yyvsp[(2) - (2)].ast), 0, 0); }
    break;

  case 16:
#line 94 "parser.y"
    { (yyval.ast) = 0; }
    break;

  case 17:
#line 95 "parser.y"
    { (yyval.ast) = 0; }
    break;

  case 18:
#line 98 "parser.y"
    { (yyval.ast) = astCreate(AST_ATTR, (yyvsp[(1) - (4)].symbol), (yyvsp[(3) - (4)].ast), 0, 0, 0); }
    break;

  case 19:
#line 99 "parser.y"
    { (yyval.ast) = astCreate(AST_VECTOR_IND, (yyvsp[(1) - (7)].symbol), (yyvsp[(3) - (7)].ast), astCreate(AST_ATTR, 0, (yyvsp[(6) - (7)].ast), 0, 0, 0), 0, 0); }
    break;

  case 20:
#line 100 "parser.y"
    { (yyval.ast) = astCreate(AST_ESCREVA, 0, (yyvsp[(2) - (3)].ast), 0, 0, 0); }
    break;

  case 21:
#line 101 "parser.y"
    { (yyval.ast) = astCreate(AST_RETORNE, 0, (yyvsp[(2) - (3)].ast), 0, 0, 0); }
    break;

  case 22:
#line 102 "parser.y"
    { (yyval.ast) = astCreate(AST_ENTAUM, 0, (yyvsp[(2) - (6)].ast), astCreate(AST_SE, 0, (yyvsp[(5) - (6)].ast), 0, 0, 0), 0, 0); }
    break;

  case 23:
#line 103 "parser.y"
    { (yyval.ast) = astCreate(AST_ENTAUM, 0, (yyvsp[(2) - (8)].ast), astCreate(AST_SENAUM, 0, (yyvsp[(4) - (8)].ast), 0, 0, 0), astCreate(AST_SE, 0, (yyvsp[(7) - (8)].ast), 0, 0, 0), 0); }
    break;

  case 24:
#line 104 "parser.y"
    { (yyval.ast) = astCreate(AST_ENQUANTO, 0, (yyvsp[(1) - (5)].ast), (yyvsp[(4) - (5)].ast), 0, 0); }
    break;

  case 25:
#line 107 "parser.y"
    { (yyval.ast) = astCreate(AST_EXPRL, 0, (yyvsp[(1) - (2)].ast), (yyvsp[(2) - (2)].ast), 0, 0); }
    break;

  case 26:
#line 108 "parser.y"
    { (yyval.ast) = 0;}
    break;

  case 27:
#line 111 "parser.y"
    { (yyval.ast) = astCreate(AST_SYMBOL, (yyvsp[(1) - (1)].symbol), 0, 0, 0, 0); }
    break;

  case 28:
#line 112 "parser.y"
    { (yyval.ast) = astCreate(AST_SYMBOL, (yyvsp[(1) - (1)].symbol), 0, 0, 0, 0); }
    break;

  case 29:
#line 113 "parser.y"
    { (yyval.ast) = astCreate(AST_SYMBOL, (yyvsp[(1) - (1)].symbol), 0, 0, 0, 0); }
    break;

  case 30:
#line 114 "parser.y"
    { (yyval.ast) = astCreate(AST_VECTOR_IND, (yyvsp[(1) - (4)].symbol), (yyvsp[(3) - (4)].ast), 0, 0, 0); }
    break;

  case 31:
#line 115 "parser.y"
    { (yyval.ast) = astCreate(AST_SYMBOL, (yyvsp[(1) - (1)].symbol), 0, 0, 0, 0); }
    break;

  case 32:
#line 116 "parser.y"
    { (yyval.ast) = astCreate(AST_FUNC_CALL, (yyvsp[(1) - (4)].symbol), (yyvsp[(3) - (4)].ast), 0, 0, 0); }
    break;

  case 33:
#line 117 "parser.y"
    { (yyval.ast) = astCreate(AST_SYMBOL, (yyvsp[(1) - (1)].symbol), 0, 0, 0, 0); }
    break;

  case 34:
#line 118 "parser.y"
    { (yyval.ast) = astCreate(AST_ADD, 0, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), 0, 0); }
    break;

  case 35:
#line 119 "parser.y"
    { (yyval.ast) = astCreate(AST_SUB, 0, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), 0, 0); }
    break;

  case 36:
#line 120 "parser.y"
    { (yyval.ast) = astCreate(AST_MULT, 0, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), 0, 0); }
    break;

  case 37:
#line 121 "parser.y"
    { (yyval.ast) = astCreate(AST_DIV, 0, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), 0, 0); }
    break;

  case 38:
#line 122 "parser.y"
    { (yyval.ast) = astCreate(AST_LESS, 0, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), 0, 0); }
    break;

  case 39:
#line 123 "parser.y"
    { (yyval.ast) = astCreate(AST_GREAT, 0, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), 0, 0); }
    break;

  case 40:
#line 124 "parser.y"
    { (yyval.ast) = astCreate(AST_LE, 0, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), 0, 0); }
    break;

  case 41:
#line 125 "parser.y"
    { (yyval.ast) = astCreate(AST_GE, 0, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), 0, 0); }
    break;

  case 42:
#line 126 "parser.y"
    { (yyval.ast) = astCreate(AST_EQ, 0, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), 0, 0); }
    break;

  case 43:
#line 127 "parser.y"
    { (yyval.ast) = astCreate(AST_DIF, 0, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), 0, 0); }
    break;

  case 44:
#line 128 "parser.y"
    { (yyval.ast) = astCreate(AST_AND, 0, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), 0, 0); }
    break;

  case 45:
#line 129 "parser.y"
    { (yyval.ast) = astCreate(AST_OR, 0, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), 0, 0); }
    break;

  case 46:
#line 130 "parser.y"
    { (yyval.ast) = astCreate(AST_NOT, 0, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), 0, 0); }
    break;

  case 47:
#line 131 "parser.y"
    { (yyval.ast) = (yyvsp[(2) - (3)].ast); }
    break;

  case 48:
#line 134 "parser.y"
    { (yyval.ast) = astCreate(AST_EXPRL, 0, (yyvsp[(1) - (2)].ast), (yyvsp[(2) - (2)].ast), 0, 0); }
    break;

  case 49:
#line 135 "parser.y"
    { (yyval.ast) = 0; }
    break;

  case 50:
#line 138 "parser.y"
    { (yyval.ast) = astCreate(AST_FUNC_PARAML, 0, (yyvsp[(1) - (2)].ast), (yyvsp[(2) - (2)].ast), 0, 0); }
    break;

  case 51:
#line 139 "parser.y"
    { (yyval.ast) = 0; }
    break;

  case 52:
#line 142 "parser.y"
    { (yyval.ast) = astCreate(AST_DECL_INT, (yyvsp[(2) - (3)].symbol), (yyvsp[(3) - (3)].ast), 0, 0, 0); }
    break;

  case 53:
#line 143 "parser.y"
    { (yyval.ast) = astCreate(AST_DECL_CARA, (yyvsp[(2) - (3)].symbol), (yyvsp[(3) - (3)].ast), 0, 0, 0); }
    break;

  case 54:
#line 144 "parser.y"
    { (yyval.ast) = astCreate(AST_DECL_REAL, (yyvsp[(2) - (3)].symbol), (yyvsp[(3) - (3)].ast), 0, 0, 0); }
    break;

  case 55:
#line 145 "parser.y"
    { (yyval.ast) = 0; }
    break;

  case 56:
#line 148 "parser.y"
    { (yyval.ast) = astCreate(AST_LVAL, (yyvsp[(1) - (2)].symbol), (yyvsp[(2) - (2)].ast), 0, 0, 0); }
    break;

  case 57:
#line 149 "parser.y"
    { (yyval.ast) = 0; }
    break;

  case 58:
#line 152 "parser.y"
    { (yyval.symbol) = (yyvsp[(1) - (1)].symbol); }
    break;

  case 59:
#line 153 "parser.y"
    { (yyval.symbol) = (yyvsp[(1) - (1)].symbol); }
    break;

  case 60:
#line 154 "parser.y"
    { (yyval.symbol) = (yyvsp[(1) - (1)].symbol); }
    break;

  case 61:
#line 155 "parser.y"
    { (yyval.symbol) = (yyvsp[(1) - (1)].symbol); }
    break;


/* Line 1267 of yacc.c.  */
#line 1812 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 158 "parser.y"


int yyerror () {
    fprintf(stderr, "Syntax error on line %d\n", getLineNumber());
    exit(3);
}
