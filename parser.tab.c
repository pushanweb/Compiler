
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "parser.y"

	#include<stdio.h>
	#include <math.h>
	int cnt=1,val,track=0, trackif=0;
	typedef struct entry {
    	char *str;
    	int n;
        int var_type;
        int ival;
		float fval;
		char *cval;
	}store;
    store st[1000];
	void ins(store *p, char *s, int n);

    void set_var_type(int type){
		int i;
		for(i=1; i<=cnt; i++){
			if(st[i].var_type == 0){
				st[i].var_type = type;
			}
		}
	} 
	
	


/* Line 189 of yacc.c  */
#line 101 "parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     FNUM = 258,
     NUM = 259,
     INT = 260,
     FLOAT = 261,
     CHAR = 262,
     VAR = 263,
     STR = 264,
     IF = 265,
     ELIF = 266,
     ELSE = 267,
     MAIN = 268,
     LP = 269,
     RP = 270,
     LB = 271,
     RB = 272,
     CM = 273,
     SM = 274,
     PLUS = 275,
     MINUS = 276,
     MULT = 277,
     DIV = 278,
     POW = 279,
     ASSIGN = 280,
     FOR = 281,
     COL = 282,
     WHILE = 283,
     BREAK = 284,
     DEFAULT = 285,
     CASE = 286,
     SWITCH = 287,
     GG = 288,
     PRINT = 289,
     EQ = 290,
     NEQ = 291,
     MOD = 292,
     SCAN = 293,
     FACTO = 294,
     PRIME = 295,
     MAX = 296,
     MIN = 297,
     OPP = 298,
     EE = 299,
     LTE = 300,
     GTE = 301,
     GT = 302,
     LT = 303,
     dec = 304,
     inc = 305
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 28 "parser.y"

        int number;
        char *string;
        float fnumber;



/* Line 214 of yacc.c  */
#line 195 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 207 "parser.tab.c"

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
# if YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   505

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  13
/* YYNRULES -- Number of rules.  */
#define YYNRULES  55
/* YYNRULES -- Number of states.  */
#define YYNSTATES  178

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    10,    11,    14,    17,    22,    24,    26,
      28,    32,    34,    36,    44,    47,    57,    67,    79,    89,
      99,   109,   119,   124,   130,   136,   142,   145,   152,   153,
     158,   160,   162,   164,   168,   172,   176,   180,   184,   188,
     192,   196,   200,   204,   208,   211,   214,   216,   223,   230,
     235,   240,   245,   250,   251,   260
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      52,     0,    -1,    13,    14,    15,    16,    53,    17,    -1,
      -1,    53,    57,    -1,    53,    54,    -1,    56,    33,    55,
      19,    -1,     5,    -1,     6,    -1,     7,    -1,    56,    18,
       8,    -1,     8,    -1,    19,    -1,    32,    14,    61,    15,
      16,    58,    17,    -1,    61,    19,    -1,    10,    14,    61,
      15,    16,    57,    17,    63,    62,    -1,    26,    14,     4,
      27,     4,    15,    16,    57,    17,    -1,    26,    14,     4,
      27,     4,    27,     4,    15,    16,    57,    17,    -1,    28,
      14,     4,    48,     4,    15,    16,    57,    17,    -1,    28,
      14,     4,    47,     4,    15,    16,    57,    17,    -1,    28,
      14,     4,    46,     4,    15,    16,    57,    17,    -1,    28,
      14,     4,    45,     4,    15,    16,    57,    17,    -1,     8,
      35,    61,    19,    -1,    34,    14,     8,    15,    19,    -1,
      34,    14,    61,    15,    19,    -1,    38,    14,     8,    15,
      19,    -1,    59,    60,    -1,    31,     4,    27,    61,    19,
      59,    -1,    -1,    30,    27,    61,    19,    -1,     4,    -1,
       3,    -1,     9,    -1,    61,    20,    61,    -1,    61,    21,
      61,    -1,    61,    22,    61,    -1,    61,    23,    61,    -1,
      61,    24,    61,    -1,    61,    37,    61,    -1,    61,    48,
      61,    -1,    61,    45,    61,    -1,    61,    47,    61,    -1,
      61,    46,    61,    -1,    14,    61,    15,    -1,    50,    61,
      -1,    49,    61,    -1,     8,    -1,    41,    14,    61,    18,
      61,    15,    -1,    42,    14,    61,    18,    61,    15,    -1,
      39,    14,    61,    15,    -1,    40,    14,    61,    15,    -1,
      43,    14,    61,    15,    -1,    12,    16,    57,    17,    -1,
      -1,    11,    14,    61,    15,    16,    57,    17,    63,    -1,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    52,    52,    55,    57,    59,    63,    65,    67,    69,
      72,    85,    99,   100,   102,   106,   117,   133,   152,   167,
     182,   197,   212,   235,   248,   250,   259,   262,   269,   272,
     282,   284,   286,   288,   290,   292,   294,   304,   306,   308,
     310,   312,   314,   316,   318,   320,   322,   345,   350,   355,
     373,   386,   395,   399,   404,   415
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FNUM", "NUM", "INT", "FLOAT", "CHAR",
  "VAR", "STR", "IF", "ELIF", "ELSE", "MAIN", "LP", "RP", "LB", "RB", "CM",
  "SM", "PLUS", "MINUS", "MULT", "DIV", "POW", "ASSIGN", "FOR", "COL",
  "WHILE", "BREAK", "DEFAULT", "CASE", "SWITCH", "GG", "PRINT", "EQ",
  "NEQ", "MOD", "SCAN", "FACTO", "PRIME", "MAX", "MIN", "OPP", "EE", "LTE",
  "GTE", "GT", "LT", "dec", "inc", "$accept", "program", "cstatement",
  "cdeclaration", "TYPE", "ID1", "statement", "BASE", "Cs", "Dflt",
  "expression", "else", "else_if", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    53,    53,    53,    54,    55,    55,    55,
      56,    56,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    58,    59,    59,    60,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    62,    62,    63,    63
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     0,     2,     2,     4,     1,     1,     1,
       3,     1,     1,     7,     2,     9,     9,    11,     9,     9,
       9,     9,     4,     5,     5,     5,     2,     6,     0,     4,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     1,     6,     6,     4,
       4,     4,     4,     0,     8,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     3,     0,    31,    30,
      46,    32,     0,     0,     2,    12,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     0,
       4,     0,     0,     0,    46,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    45,    44,     0,     0,
      14,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    43,     0,     0,     0,    46,     0,     0,
       0,     0,     0,     0,     0,    10,     7,     8,     9,     0,
      33,    34,    35,    36,    37,    38,    40,    42,    41,    39,
      22,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    49,    50,     0,     0,    51,     6,     0,     0,     0,
       0,     0,     0,    28,    23,    24,    25,     0,     0,    46,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      47,    48,    55,     0,     0,     0,     0,     0,     0,     0,
      13,     0,    26,     0,    53,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    15,    16,     0,    21,    20,
      19,    18,     0,     0,     0,     0,     0,    28,    29,     0,
       0,    17,    27,     0,    52,     0,    55,    54
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,    28,    79,    29,    30,   128,   129,   142,
      31,   155,   144
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -86
static const yytype_int16 yypact[] =
{
      -6,     2,     8,    18,   -86,     1,   -86,    67,   -86,   -86,
     -12,   -86,    23,   128,   -86,   -86,    45,    46,    47,    48,
      49,    50,    51,    52,    54,    55,   128,   128,   -86,    -9,
     -86,   415,   128,   128,   -86,   178,    69,    70,   128,   171,
      71,   128,   128,   128,   128,   128,   -86,   -86,    74,     5,
     -86,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   421,   207,   -86,    56,    10,   219,    63,   248,    72,
     260,   289,   378,   409,   301,   -86,   -86,   -86,   -86,    66,
      12,    12,    30,    30,   -86,   -86,   -19,   -19,   -19,   -19,
     -86,    73,    88,    90,    92,    93,    94,    84,    83,    85,
      95,   -86,   -86,   128,   128,   -86,   -86,   115,     0,    96,
      97,    98,   100,    89,   -86,   -86,   -86,   330,   342,    68,
     104,   106,   122,   111,   112,   114,   117,   131,   127,   116,
     -86,   -86,   134,   115,   133,   115,   115,   115,   115,   123,
     -86,   124,   -86,   138,   147,   143,   145,   146,   149,   155,
     156,   128,   128,   128,   160,   -86,   -86,   115,   -86,   -86,
     -86,   -86,   451,   457,   371,   115,   164,    89,   -86,   166,
     167,   -86,   -86,   115,   -86,   169,   134,   -86
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -86,   -86,   -86,   -86,   -86,   -86,   -85,   -86,    -5,   -86,
     -13,   -86,     7
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -12
static const yytype_int16 yytable[] =
{
      35,    51,    52,    53,    54,    55,   -11,     1,     4,    48,
      76,    77,    78,    46,    47,   121,     3,     6,    56,    61,
      62,   -11,   120,    32,    49,    66,    68,   122,    70,    71,
      72,    73,    74,     5,    53,    54,    55,    33,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,   145,    56,
     147,   148,   149,   150,    55,    93,    94,    95,    96,    36,
      37,    38,    39,    40,    41,    42,    43,    56,    44,    45,
       8,     9,   166,    64,    65,    10,    11,    12,    98,    69,
     170,    13,    75,    92,    14,   106,    15,   100,   175,   107,
     117,   118,   108,    16,   109,    17,   110,   111,   112,    18,
     113,    19,   114,    32,   115,    20,    21,    22,    23,    24,
      25,   123,   124,   125,   116,   126,    26,    27,     8,     9,
     127,   132,   133,   119,    11,    12,   134,   135,   136,    13,
     137,     8,     9,   138,    15,   139,    34,    11,   162,   163,
     164,    16,    13,    17,   140,   143,   141,    18,   146,    19,
     151,   152,   153,    20,    21,    22,    23,    24,    25,   154,
     156,   157,   172,   158,    26,    27,   159,    21,    22,    23,
      24,    25,   160,   161,     8,     9,   165,    26,    27,    67,
      11,   171,   173,   177,   174,    13,   176,     0,     0,     0,
       0,     0,     0,    63,     0,     0,     0,     0,    51,    52,
      53,    54,    55,     0,     0,     0,     0,     0,     0,     0,
      21,    22,    23,    24,    25,    56,     0,     0,     0,     0,
      26,    27,    91,    57,    58,    59,    60,    51,    52,    53,
      54,    55,     0,     0,    97,     0,     0,     0,     0,    51,
      52,    53,    54,    55,    56,     0,     0,     0,     0,     0,
       0,     0,    57,    58,    59,    60,    56,     0,     0,     0,
       0,     0,     0,    99,    57,    58,    59,    60,    51,    52,
      53,    54,    55,     0,     0,   101,     0,     0,     0,     0,
      51,    52,    53,    54,    55,    56,     0,     0,     0,     0,
       0,     0,     0,    57,    58,    59,    60,    56,     0,     0,
       0,     0,     0,     0,   102,    57,    58,    59,    60,    51,
      52,    53,    54,    55,     0,     0,   105,     0,     0,     0,
       0,    51,    52,    53,    54,    55,    56,     0,     0,     0,
       0,     0,     0,     0,    57,    58,    59,    60,    56,     0,
       0,     0,     0,     0,     0,   130,    57,    58,    59,    60,
      51,    52,    53,    54,    55,     0,     0,   131,     0,     0,
       0,     0,    51,    52,    53,    54,    55,    56,     0,     0,
       0,     0,     0,     0,     0,    57,    58,    59,    60,    56,
       0,     0,     0,     0,     0,     0,   169,    57,    58,    59,
      60,    51,    52,    53,    54,    55,   103,     0,    51,    52,
      53,    54,    55,     0,     0,     0,     0,     0,    56,     0,
       0,     0,     0,     0,     0,    56,    57,    58,    59,    60,
       0,     0,     0,    57,    58,    59,    60,   104,     0,    51,
      52,    53,    54,    55,    50,    51,    52,    53,    54,    55,
      90,    51,    52,    53,    54,    55,    56,     0,     0,     0,
       0,     0,    56,     0,    57,    58,    59,    60,    56,     0,
      57,    58,    59,    60,     0,     0,    57,    58,    59,    60,
     167,    51,    52,    53,    54,    55,   168,    51,    52,    53,
      54,    55,     0,     0,     0,     0,     0,     0,    56,     0,
       0,     0,     0,     0,    56,     0,    57,    58,    59,    60,
       0,     0,    57,    58,    59,    60
};

static const yytype_int16 yycheck[] =
{
      13,    20,    21,    22,    23,    24,    18,    13,     0,    18,
       5,     6,     7,    26,    27,    15,    14,    16,    37,    32,
      33,    33,   107,    35,    33,    38,    39,    27,    41,    42,
      43,    44,    45,    15,    22,    23,    24,    14,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,   133,    37,
     135,   136,   137,   138,    24,    45,    46,    47,    48,    14,
      14,    14,    14,    14,    14,    14,    14,    37,    14,    14,
       3,     4,   157,     4,     4,     8,     9,    10,    15,     8,
     165,    14,     8,    27,    17,    19,    19,    15,   173,    16,
     103,   104,     4,    26,     4,    28,     4,     4,     4,    32,
      16,    34,    19,    35,    19,    38,    39,    40,    41,    42,
      43,    15,    15,    15,    19,    15,    49,    50,     3,     4,
      31,    17,    16,     8,     9,    10,     4,    16,    16,    14,
      16,     3,     4,    16,    19,     4,     8,     9,   151,   152,
     153,    26,    14,    28,    17,    11,    30,    32,    15,    34,
      27,    27,    14,    38,    39,    40,    41,    42,    43,    12,
      17,    16,   167,    17,    49,    50,    17,    39,    40,    41,
      42,    43,    17,    17,     3,     4,    16,    49,    50,     8,
       9,    17,    16,   176,    17,    14,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,    42,    43,    37,    -1,    -1,    -1,    -1,
      49,    50,    15,    45,    46,    47,    48,    20,    21,    22,
      23,    24,    -1,    -1,    15,    -1,    -1,    -1,    -1,    20,
      21,    22,    23,    24,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    47,    48,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    15,    45,    46,    47,    48,    20,    21,
      22,    23,    24,    -1,    -1,    15,    -1,    -1,    -1,    -1,
      20,    21,    22,    23,    24,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    15,    45,    46,    47,    48,    20,
      21,    22,    23,    24,    -1,    -1,    15,    -1,    -1,    -1,
      -1,    20,    21,    22,    23,    24,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    47,    48,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    15,    45,    46,    47,    48,
      20,    21,    22,    23,    24,    -1,    -1,    15,    -1,    -1,
      -1,    -1,    20,    21,    22,    23,    24,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    15,    45,    46,    47,
      48,    20,    21,    22,    23,    24,    18,    -1,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    45,    46,    47,    48,
      -1,    -1,    -1,    45,    46,    47,    48,    18,    -1,    20,
      21,    22,    23,    24,    19,    20,    21,    22,    23,    24,
      19,    20,    21,    22,    23,    24,    37,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    45,    46,    47,    48,    37,    -1,
      45,    46,    47,    48,    -1,    -1,    45,    46,    47,    48,
      19,    20,    21,    22,    23,    24,    19,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    45,    46,    47,    48,
      -1,    -1,    45,    46,    47,    48
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    13,    52,    14,     0,    15,    16,    53,     3,     4,
       8,     9,    10,    14,    17,    19,    26,    28,    32,    34,
      38,    39,    40,    41,    42,    43,    49,    50,    54,    56,
      57,    61,    35,    14,     8,    61,    14,    14,    14,    14,
      14,    14,    14,    14,    14,    14,    61,    61,    18,    33,
      19,    20,    21,    22,    23,    24,    37,    45,    46,    47,
      48,    61,    61,    15,     4,     4,    61,     8,    61,     8,
      61,    61,    61,    61,    61,     8,     5,     6,     7,    55,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      19,    15,    27,    45,    46,    47,    48,    15,    15,    15,
      15,    15,    15,    18,    18,    15,    19,    16,     4,     4,
       4,     4,     4,    16,    19,    19,    19,    61,    61,     8,
      57,    15,    27,    15,    15,    15,    15,    31,    58,    59,
      15,    15,    17,    16,     4,    16,    16,    16,    16,     4,
      17,    30,    60,    11,    63,    57,    15,    57,    57,    57,
      57,    27,    27,    14,    12,    62,    17,    16,    17,    17,
      17,    17,    61,    61,    61,    16,    57,    19,    19,    15,
      57,    17,    59,    16,    17,    57,    17,    63
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
# if YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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

/* Line 1455 of yacc.c  */
#line 52 "parser.y"
    { printf("\nSuccessful compilation\n"); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 63 "parser.y"
    { set_var_type((yyvsp[(3) - (4)].number)); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 65 "parser.y"
    {(yyval.number) = 1; printf("Variable type--> Integer\n");;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 67 "parser.y"
    {(yyval.number) = 2; printf("Variable type--> Float\n");;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 69 "parser.y"
    {(yyval.number) = 3; printf("Variable type--> Character\n");;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 72 "parser.y"
    {
						if(look_for_key((yyvsp[(3) - (3)].string)))
						{
							printf("%s is already declared\n", (yyvsp[(3) - (3)].string) );
						}
						else
						{
							ins(&st[cnt],(yyvsp[(3) - (3)].string), cnt);
							cnt++;
							
						}
			        ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 85 "parser.y"
    {
				if(look_for_key((yyvsp[(1) - (1)].string)))
				{
					printf("%s is already declared\n", (yyvsp[(1) - (1)].string) );
				}
				else
				{
					ins(&st[cnt],(yyvsp[(1) - (1)].string), cnt);
					cnt++;
				}
			;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 100 "parser.y"
    {printf("SWITCH case.\n");val=(yyvsp[(3) - (7)].number);;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 102 "parser.y"
    { printf("\nvalue of expression: %d\n", ((yyvsp[(1) - (2)].number))); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 106 "parser.y"
    {
								if((yyvsp[(3) - (9)].number))
								{
									printf("\nWe are  in IF and the value is: %d\n",((yyvsp[(6) - (9)].string)));
								}
								else
								{
									printf("\ncondition value zero in IF block\n");
								}
							;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 117 "parser.y"
    {
	   printf("For Loop :\n");
	   if((yyvsp[(5) - (9)].number)>(yyvsp[(3) - (9)].number)){
            int i;
            for(i=(yyvsp[(3) - (9)].number);i<(yyvsp[(5) - (9)].number);i++){
                printf("Step : %d and value of expression : %d\n",i,(yyvsp[(8) - (9)].string));
	        }
       }
       else{
            int i;
            for(i=(yyvsp[(3) - (9)].number);i>(yyvsp[(5) - (9)].number);i--){
                printf("Step : %d and value of expression : %d\n",i,(yyvsp[(8) - (9)].string));
            }
        }
	;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 133 "parser.y"
    {
	   printf("For Loop :\n");
	   if((yyvsp[(5) - (11)].number)>(yyvsp[(3) - (11)].number)){
            int i;
            for(i=(yyvsp[(3) - (11)].number);i<(yyvsp[(5) - (11)].number);i+=(yyvsp[(7) - (11)].number)){
                printf("Step : %d and value of expression : %d\n",i,(yyvsp[(8) - (11)].string));
	        }
       }
       else{
            int i;
            for(i=(yyvsp[(3) - (11)].number);i>(yyvsp[(5) - (11)].number);i-=(yyvsp[(7) - (11)].number)){
                printf("Step : %d and value of expression : %d\n",i,(yyvsp[(8) - (11)].string));
            }
        }
	;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 152 "parser.y"
    {
								int i = (yyvsp[(5) - (9)].number),j=0;
								printf("While LOOP:\n");
								while((yyvsp[(3) - (9)].number) < i)
								{
									printf("step: %d value of expression :%d \n" ,j, (yyvsp[(8) - (9)].string));
									i--;
									j++;
								}
								printf("\n");
								
										

						;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 167 "parser.y"
    {
								int i = (yyvsp[(5) - (9)].number),j=0;
								printf("While LOOP:\n");
								while((yyvsp[(3) - (9)].number) > i)
								{
									printf("step: %d value of expression :%d \n" ,j, (yyvsp[(8) - (9)].string));
									i++;
									j++;
								}
								printf("\n");
								
										

						;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 182 "parser.y"
    {
								int i = (yyvsp[(5) - (9)].number),j=0;
								printf("While LOOP:\n");
								while((yyvsp[(3) - (9)].number) >= i)
								{
									printf("step: %d value of expression :%d \n" ,j, (yyvsp[(8) - (9)].string));
									i++;
									j++;
								}
								printf("\n");
								
										

						;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 197 "parser.y"
    {
								int i = (yyvsp[(5) - (9)].number),j=0;
								printf("While LOOP:\n");
								while((yyvsp[(3) - (9)].number) <= i)
								{
									printf("step: %d value of expression :%d \n" ,j, (yyvsp[(8) - (9)].string));
									i++;
									j++;
								}
								printf("\n");
								
										

						;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 212 "parser.y"
    {
                                (yyval.string) = (yyvsp[(3) - (4)].number);
                                if(look_for_key((yyvsp[(1) - (4)].string))){
                                    int i = look_for_key((yyvsp[(1) - (4)].string));
                                    if(st[i].var_type==3){
                                        //variable[i].cval = (char)$3;
                                        st[i].cval = (char*)&(yyvsp[(3) - (4)].number);
                                        printf("\nVariable value--> %s\n", st[i].cval);
                                    }
                                    else if(st[i].var_type==1){
                                        st[i].ival = (yyvsp[(3) - (4)].number);
                                        printf("\nVariable value--> %d\n", st[i].ival);
                                    }
                                    else if(st[i].var_type==2){
                                        st[i].fval = (float)(yyvsp[(3) - (4)].number);
                                        printf("\nVariable value--> %f\n", st[i].fval);
                                    }
                                }
                                else{
                                    printf("\nVariable is not declared\n");
                                }
                            ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 235 "parser.y"
    {
                            int i = look_for_key((yyvsp[(3) - (5)].string));
                            if(st[i].var_type == 1){
                                printf("Int Variable name--> %s, Value--> %d\n", st[i].str, st[i].ival);
                            }
                            else if(st[i].var_type == 2){
                                printf("Float Variable name--> %s, Value--> %f\n", st[i].str, st[i].fval);
                            }
                            else if(st[i].var_type == 3){
                                printf("Char Variable name--> %s, Value--> %s\n", st[i].str, st[i].cval);
                            }
                        ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 248 "parser.y"
    { printf("%d\n",(yyvsp[(3) - (5)].number)); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 250 "parser.y"
    {
                int i = look_for_key((yyvsp[(3) - (5)].string));
                printf("\nRead command found for variable--> %s, but no further implementaion\n",st[i].str);
            ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 262 "parser.y"
    {
            
            if(val==(yyvsp[(2) - (6)].number)){
                    track=1;
                    printf("\nCase No : %d  and Result :  %d\n",(yyvsp[(2) - (6)].number),(yyvsp[(4) - (6)].number));
            }
        ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 272 "parser.y"
    {
            if(track!=1){
                printf("\nResult in default Value is :  %d\n",(yyvsp[(3) - (4)].number));
            }
            track=0;
        ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 282 "parser.y"
    { (yyval.number) = (yyvsp[(1) - (1)].number); 	;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 284 "parser.y"
    { (yyval.number) = yylval.fnumber; 	;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 286 "parser.y"
    { (yyval.number) = yylval.string; ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 288 "parser.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) + (yyvsp[(3) - (3)].number); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 290 "parser.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) - (yyvsp[(3) - (3)].number); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 292 "parser.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) * (yyvsp[(3) - (3)].number); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 294 "parser.y"
    { 	if((yyvsp[(3) - (3)].number)) 
				  		{
				     			(yyval.number) = (yyvsp[(1) - (3)].number) / (yyvsp[(3) - (3)].number);
				  		}
				  		else
				  		{
							(yyval.number) = 0;
							printf("\ndivision by zero\t");
				  		} 	
				    	;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 304 "parser.y"
    { (yyval.number) = pow((yyvsp[(1) - (3)].number),(yyvsp[(3) - (3)].number)); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 306 "parser.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) % (yyvsp[(3) - (3)].number); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 308 "parser.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) < (yyvsp[(3) - (3)].number); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 310 "parser.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) <= (yyvsp[(3) - (3)].number); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 312 "parser.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) > (yyvsp[(3) - (3)].number); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 314 "parser.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) >= (yyvsp[(3) - (3)].number); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 316 "parser.y"
    { (yyval.number) = (yyvsp[(2) - (3)].number);	;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 318 "parser.y"
    { (yyval.number)=(yyvsp[(2) - (2)].number)+1; printf("inc: %d\n",(yyval.number));;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 320 "parser.y"
    { (yyval.number)=(yyvsp[(2) - (2)].number)-1; printf("dec: %d\n",(yyval.number));;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 322 "parser.y"
    {
	            int id_index = look_for_key((yyvsp[(1) - (1)].string));
	            if(id_index == 0)
	            {
		            yyerror("VARIABLE DOESN'T EXIST");
	            }
	            else
	            {
		            /*if(st[id_index].var_type == 3)
                    {
                    $$ = st[id_index].cval;
                    }*/
                    if(st[id_index].var_type == 1)
                    {
                        (yyval.number) = st[id_index].ival;
                    }
                    else if(st[id_index].var_type == 2)
                    {
                        (yyval.number) = st[id_index].fval;
                    }
	            }
            ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 345 "parser.y"
    {
            if((yyvsp[(3) - (6)].number)>(yyvsp[(5) - (6)].number)) {(yyval.number)=(yyvsp[(3) - (6)].number); printf("%d is greater than %d\n",(yyvsp[(3) - (6)].number),(yyvsp[(5) - (6)].number));}
            else {(yyval.number)=(yyvsp[(5) - (6)].number); printf("%d is greater than %d\n",(yyvsp[(5) - (6)].number),(yyvsp[(3) - (6)].number));}
        ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 350 "parser.y"
    {
            if((yyvsp[(3) - (6)].number)<(yyvsp[(5) - (6)].number)) {(yyval.number)=(yyvsp[(3) - (6)].number); printf("%d is less than %d\n",(yyvsp[(3) - (6)].number),(yyvsp[(5) - (6)].number));}
            else {(yyval.number)=(yyvsp[(5) - (6)].number); printf("%d is less than %d\n",(yyvsp[(5) - (6)].number),(yyvsp[(3) - (6)].number));}
        ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 355 "parser.y"
    {
            int j = (yyvsp[(3) - (4)].number);
            int i, result;
            result = 1;
            if(j==0){
                (yyval.number)=result;
                printf("\nFactorial of %d is %d", j, result);
            }
            else{
                for(i = 1; i <= j; i++){
                    result = result*i;
                }
                (yyval.number)=result;
                printf("\nFactorial of %d is %d", j, result);
            }
            
        ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 373 "parser.y"
    {
            int n, i, flag = 1;
            n = (yyvsp[(3) - (4)].number);
            for (i = 2; i <= n / 2; ++i) {
                if (n % i == 0) {
                    flag = 0;
                    break;
                }
            }
            (yyval.number)=flag;

        ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 386 "parser.y"
    {
        if((yyvsp[(3) - (4)].number)) (yyval.number)=0;
        else (yyval.number)=1;
    ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 395 "parser.y"
    {
            printf("\nELSE condition is detected");

            ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 404 "parser.y"
    {
                    if((yyvsp[(3) - (8)].number))
                        {
                            printf("\nWe are  in ELSEIF and the value is: %d\n",((yyvsp[(6) - (8)].string)));
                        }
                        else
                        {
                            printf("\ncondition value zero in ELSEIF block\n");
                        }
                    ;}
    break;



/* Line 1455 of yacc.c  */
#line 2155 "parser.tab.c"
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
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



/* Line 1675 of yacc.c  */
#line 418 "parser.y"

//////////////////////////
void ins(store *p, char *s, int n)
{
  p->str = s;
  p->n = n;
  p->var_type = 0;
}

int look_for_key(char *key)
{
    int i = 1;
    char *name = st[i].str;
    while (name) {
        if (strcmp(name, key) == 0)
            return st[i].n;
        name = st[++i].str;
    }
    return 0;
}



/////////////////////////


///////////////////////////


int yywrap()
{
return 1;
}


yyerror(char *s){
	printf( "%s\n", s);
}
