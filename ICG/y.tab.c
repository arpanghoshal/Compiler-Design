/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "icg.y" /* yacc.c:339  */

	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>

	void yyerror(const char*);
	int yylex();
	void if_print();
	void before_if();

	extern FILE * yyin, *yyout;

	FILE *fp_icg, *fp_quad;
	
	extern int line;
	
	char buffer[100];
	int ln = 0, tempno = 0, num_flag = 0, for_else = 0, from_loop = 0, from_else = 0, while_count = 0;

	int assignop = -1;		//assignment operator == += -=
	int unaryop = -1;		//unary operator type
	int exprno = -1;		//FOR loop , 3rd expression
	int m = 0;				//string length for buffer

	int paramno = 0;		//Number of parameters

	char intbuf[20];
	char secIDbuf[20];




#line 99 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    ELSE = 259,
    HASH = 260,
    INCLUDE = 261,
    STDIO = 262,
    STDLIB = 263,
    MATH = 264,
    STRING = 265,
    TIME = 266,
    STRING_LITERAL = 267,
    HEADER_LITERAL = 268,
    PRINT = 269,
    RETURN = 270,
    UMINUS = 271,
    INTEGER_LITERAL = 272,
    CHARACTER_LITERAL = 273,
    FLOAT_LITERAL = 274,
    IDENTIFIER = 275,
    FOR = 276,
    WHILE = 277,
    IF = 278,
    INC_OP = 279,
    DEC_OP = 280,
    LE_OP = 281,
    GE_OP = 282,
    EQ_OP = 283,
    NE_OP = 284,
    MUL_ASSIGN = 285,
    DIV_ASSIGN = 286,
    MOD_ASSIGN = 287,
    ADD_ASSIGN = 288,
    SUB_ASSIGN = 289,
    CHAR = 290,
    INT = 291,
    FLOAT = 292,
    VOID = 293
  };
#endif
/* Tokens.  */
#define ELSE 259
#define HASH 260
#define INCLUDE 261
#define STDIO 262
#define STDLIB 263
#define MATH 264
#define STRING 265
#define TIME 266
#define STRING_LITERAL 267
#define HEADER_LITERAL 268
#define PRINT 269
#define RETURN 270
#define UMINUS 271
#define INTEGER_LITERAL 272
#define CHARACTER_LITERAL 273
#define FLOAT_LITERAL 274
#define IDENTIFIER 275
#define FOR 276
#define WHILE 277
#define IF 278
#define INC_OP 279
#define DEC_OP 280
#define LE_OP 281
#define GE_OP 282
#define EQ_OP 283
#define NE_OP 284
#define MUL_ASSIGN 285
#define DIV_ASSIGN 286
#define MOD_ASSIGN 287
#define ADD_ASSIGN 288
#define SUB_ASSIGN 289
#define CHAR 290
#define INT 291
#define FLOAT 292
#define VOID 293

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 44 "icg.y" /* yacc.c:355  */
	
	char sval[300];

#line 217 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 234 "y.tab.c" /* yacc.c:358  */

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
# elif ! defined YYSIZE_T
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

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   273

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  120
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  205

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   295

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    55,     2,     2,     2,    20,     2,     2,
      50,    51,    19,    16,    52,    17,     2,    18,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    54,    49,
      45,    21,    46,    53,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    47,     2,    48,    56,     2,     2,     2,
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
      15,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    57,    58
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    77,    77,    81,    82,    83,    88,    89,    94,    95,
     100,   101,   102,   103,   104,   109,   110,   115,   116,   121,
     122,   123,   124,   125,   130,   131,   136,   141,   142,   143,
     144,   149,   157,   149,   317,   317,   344,   360,   381,   359,
     403,   412,   420,   428,   436,   449,   461,   473,   485,   501,
     517,   533,   552,   553,   554,   555,   560,   561,   566,   580,
     585,   586,   672,   673,   674,   675,   676,   677,   682,   684,
     691,   683,   720,   721,   726,   727,   732,   733,   734,   735,
     736,   741,   742,   754,   769,   770,   806,   807,   808,   809,
     810,   811,   816,   817,   828,   844,   845,   856,   867,   878,
     893,   894,   905,   919,   920,   930,   940,   954,   955,   959,
     967,   976,   982,   986,   987,   992,   993,   998,   999,  1004,
    1009
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "\"reduce\"", "ELSE", "HASH", "INCLUDE",
  "STDIO", "STDLIB", "MATH", "STRING", "TIME", "STRING_LITERAL",
  "HEADER_LITERAL", "PRINT", "RETURN", "'+'", "'-'", "'/'", "'*'", "'%'",
  "'='", "UMINUS", "INTEGER_LITERAL", "CHARACTER_LITERAL", "FLOAT_LITERAL",
  "IDENTIFIER", "FOR", "WHILE", "IF", "INC_OP", "DEC_OP", "LE_OP", "GE_OP",
  "EQ_OP", "NE_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN",
  "SUB_ASSIGN", "CHAR", "INT", "FLOAT", "VOID", "'<'", "'>'", "'{'", "'}'",
  "';'", "'('", "')'", "','", "'?'", "':'", "'!'", "'~'", "\"INC_OP\"",
  "\"DEC_OP\"", "$accept", "S", "program", "translation_unit", "ext_dec",
  "libraries", "compound_statement", "block_item_list", "block_item",
  "printstat", "declaration", "statement", "iteration_statement", "$@1",
  "$@2", "$@3", "conditional_statement", "$@4", "$@5", "expr",
  "type_specifier", "init_declarator_list", "init_declarator",
  "assignment_expression", "assignment_operator", "conditional_expression",
  "$@6", "$@7", "expression_statement", "expression", "primary_expression",
  "postfix_expression", "unary_expression", "unary_operator",
  "equality_expression", "relational_expression", "additive_expression",
  "multiplicative_expression", "function_definition", "function_call",
  "declarator", "parameter_list", "parameter_declaration",
  "identifier_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,    43,    45,    47,    42,
      37,    61,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,    60,    62,   123,   125,    59,
      40,    41,    44,    63,    58,    33,   126,   294,   295
};
# endif

#define YYPACT_NINF -144

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-144)))

#define YYTABLE_NINF -115

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      38,     5,  -144,  -144,  -144,  -144,  -144,    17,  -144,   198,
    -144,  -144,   -13,  -144,    27,     1,  -144,  -144,    -3,    47,
    -144,    27,   105,   -16,  -144,    38,   236,   178,  -144,     8,
    -144,    25,   156,  -144,  -144,  -144,  -144,  -144,    33,  -144,
    -144,    39,  -144,  -144,   178,  -144,  -144,  -144,  -144,  -144,
     142,  -144,    18,  -144,  -144,  -144,  -144,     8,  -144,  -144,
    -144,    54,  -144,    -7,   102,   178,    31,    40,   108,   117,
      46,    52,  -144,  -144,    71,    92,  -144,    99,  -144,  -144,
    -144,  -144,  -144,  -144,    58,  -144,  -144,    86,  -144,    97,
    -144,    61,    63,   178,   125,  -144,  -144,  -144,  -144,   178,
    -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,   178,  -144,
     178,   178,   111,   178,   178,   178,   178,   178,   178,   178,
     178,   178,  -144,    50,  -144,  -144,    74,  -144,   101,    38,
     136,   156,   178,   123,  -144,  -144,  -144,  -144,    40,    40,
     178,   108,   108,   108,   108,   117,   117,  -144,  -144,  -144,
     128,   157,  -144,  -144,  -144,  -144,   178,   156,   197,    13,
     141,   146,   199,  -144,    13,   206,  -144,   161,  -144,   -11,
    -144,   223,   178,   186,   228,   229,   205,  -144,  -144,   231,
    -144,  -144,   235,   237,   238,   239,  -144,  -144,    13,   212,
     202,  -144,  -144,  -144,  -144,  -144,  -144,   240,   241,   242,
     243,  -144,  -144,  -144,  -144
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,   111,    53,    54,    55,    52,     0,     2,     5,
       6,     8,     0,     9,     0,     0,     1,     7,    59,     0,
      56,     0,     0,     0,   108,     0,     0,     0,    26,     0,
     107,     0,     0,    86,    87,    77,    79,    78,    76,    31,
      34,     0,    15,    72,     0,    88,    89,    90,    91,    27,
       0,    17,     0,    19,    20,    29,    30,     0,    74,    60,
      28,     0,    81,    84,   103,     0,    68,    92,    95,   100,
       0,     0,   119,   114,   118,     0,   115,     0,     4,    10,
      11,    12,    13,    14,     0,    76,    58,    59,    57,     0,
      21,     0,     0,     0,     0,    16,    18,    23,    73,     0,
      82,    83,    62,    65,    66,    67,    63,    64,     0,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    22,     0,   117,   112,     0,   113,     0,     0,
       0,     0,     0,     0,   103,    80,    75,    61,    93,    94,
       0,    98,    99,    96,    97,   101,   102,   105,   104,   106,
     110,     0,   116,   120,     3,    24,     0,     0,     0,     0,
      70,   109,     0,    32,     0,    27,    36,     0,    25,     0,
      35,     0,     0,     0,     0,     0,     0,    38,    71,     0,
      40,    41,     0,     0,     0,     0,    42,    43,     0,     0,
       0,    46,    47,    44,    45,    33,    39,     0,     0,     0,
       0,    48,    49,    51,    50
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -144,  -144,   -17,  -144,   258,  -144,   -14,  -144,   218,  -144,
      11,  -143,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,
     -18,  -144,   244,   -21,  -144,   -84,  -144,  -144,   -31,   -42,
    -144,  -144,   -62,  -144,  -144,   127,   116,   135,  -144,  -144,
       0,  -144,   143,   147
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    10,    84,    49,    50,    51,    52,
      11,    54,    55,    91,   169,    92,    56,   171,   189,   176,
      12,    19,    20,    58,   108,    59,   112,   167,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    13,    70,
      14,    75,    76,    77
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      24,    90,    94,   109,    57,    74,    86,    30,    78,   133,
      72,    15,    21,    18,    25,   173,   166,    16,    27,   174,
     175,   170,    71,   100,   101,     3,     4,     5,     6,    33,
      34,   134,    57,    53,    87,    73,    35,    36,    37,    85,
      39,    40,    41,     1,  -111,   195,    26,  -111,   134,   134,
      71,   134,   134,   134,   134,   134,   134,   147,   148,   149,
      22,    53,    43,    44,     2,   110,   111,    97,    45,    46,
      47,    48,   113,   114,    22,    89,    72,    23,   136,     3,
       4,     5,     6,  -111,   -69,   115,   116,   137,   178,    93,
     158,     3,     4,     5,     6,   122,    28,   124,   160,    29,
     157,   150,   123,    98,   129,    74,    99,    27,    74,   130,
     134,   131,   154,   132,   162,     3,     4,     5,     6,    31,
      32,    33,    34,   102,   117,   118,   163,   153,    35,    36,
      37,    38,    39,    40,    41,   119,   120,   121,   103,   104,
     105,   106,   107,   125,   126,   165,     3,     4,     5,     6,
     127,   128,    22,    42,    43,    44,    31,    32,    33,    34,
      45,    46,    47,    48,   140,    35,    36,    37,    38,    39,
      40,    41,    33,    34,   159,   196,   135,    99,  -114,    35,
      36,    37,    85,     3,     4,     5,     6,   155,   156,    22,
      95,    43,    44,    99,    33,    34,  -113,    45,    46,    47,
      48,    35,    36,    37,    85,    43,    44,   179,   161,   128,
     -37,    45,    46,    47,    48,   172,   180,   181,   197,   198,
     199,   200,   182,   183,     2,   184,   185,   177,    44,   141,
     142,   143,   144,    45,    46,    47,    48,   138,   139,     3,
       4,     5,     6,    79,    80,    81,    82,    83,   164,    99,
     168,    99,   145,   146,   186,   187,   188,   190,   191,    22,
     192,   193,   194,   201,   202,   203,   204,    17,    96,   152,
     151,     0,     0,    88
};

static const yytype_int16 yycheck[] =
{
      14,    32,    44,    65,    22,    23,    27,    21,    25,    93,
      26,     6,    12,    26,    13,    26,   159,     0,    21,    30,
      31,   164,    22,    30,    31,    41,    42,    43,    44,    16,
      17,    93,    50,    22,    26,    51,    23,    24,    25,    26,
      27,    28,    29,     5,    47,   188,    45,    50,   110,   111,
      50,   113,   114,   115,   116,   117,   118,   119,   120,   121,
      47,    50,    49,    50,    26,    34,    35,    49,    55,    56,
      57,    58,    32,    33,    47,    50,    26,    50,    99,    41,
      42,    43,    44,    50,    53,    45,    46,   108,   172,    50,
     132,    41,    42,    43,    44,    49,    49,    26,   140,    52,
     131,    51,    50,    49,    46,   123,    52,    21,   126,    12,
     172,    50,   129,    50,   156,    41,    42,    43,    44,    14,
      15,    16,    17,    21,    16,    17,   157,    26,    23,    24,
      25,    26,    27,    28,    29,    18,    19,    20,    36,    37,
      38,    39,    40,    51,    52,   159,    41,    42,    43,    44,
      51,    52,    47,    48,    49,    50,    14,    15,    16,    17,
      55,    56,    57,    58,    53,    23,    24,    25,    26,    27,
      28,    29,    16,    17,    51,   189,    51,    52,    50,    23,
      24,    25,    26,    41,    42,    43,    44,    51,    52,    47,
      48,    49,    50,    52,    16,    17,    50,    55,    56,    57,
      58,    23,    24,    25,    26,    49,    50,    21,    51,    52,
       4,    55,    56,    57,    58,    54,    30,    31,    16,    17,
      18,    19,    36,    37,    26,    39,    40,     4,    50,   113,
     114,   115,   116,    55,    56,    57,    58,   110,   111,    41,
      42,    43,    44,     7,     8,     9,    10,    11,    51,    52,
      51,    52,   117,   118,    26,    26,    51,    26,    23,    47,
      23,    23,    23,    23,    23,    23,    23,     9,    50,   126,
     123,    -1,    -1,    29
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    26,    41,    42,    43,    44,    60,    61,    62,
      63,    69,    79,    97,    99,     6,     0,    63,    26,    80,
      81,    99,    47,    50,    65,    13,    45,    21,    49,    52,
      65,    14,    15,    16,    17,    23,    24,    25,    26,    27,
      28,    29,    48,    49,    50,    55,    56,    57,    58,    65,
      66,    67,    68,    69,    70,    71,    75,    79,    82,    84,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      98,    99,    26,    51,    79,   100,   101,   102,    61,     7,
       8,     9,    10,    11,    64,    26,    82,    26,    81,    50,
      87,    72,    74,    50,    88,    48,    67,    49,    49,    52,
      30,    31,    21,    36,    37,    38,    39,    40,    83,    91,
      34,    35,    85,    32,    33,    45,    46,    16,    17,    18,
      19,    20,    49,    50,    26,    51,    52,    51,    52,    46,
      12,    50,    50,    84,    91,    51,    82,    82,    94,    94,
      53,    95,    95,    95,    95,    96,    96,    91,    91,    91,
      51,   102,   101,    26,    61,    51,    52,    87,    88,    51,
      88,    51,    88,    87,    51,    65,    70,    86,    51,    73,
      70,    76,    54,    26,    30,    31,    78,     4,    84,    21,
      30,    31,    36,    37,    39,    40,    26,    26,    51,    77,
      26,    23,    23,    23,    23,    70,    65,    16,    17,    18,
      19,    23,    23,    23,    23
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    59,    60,    61,    61,    61,    62,    62,    63,    63,
      64,    64,    64,    64,    64,    65,    65,    66,    66,    67,
      67,    67,    67,    67,    68,    68,    69,    70,    70,    70,
      70,    72,    73,    71,    74,    71,    75,    76,    77,    75,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    79,    79,    79,    79,    80,    80,    81,    81,
      82,    82,    83,    83,    83,    83,    83,    83,    84,    85,
      86,    84,    87,    87,    88,    88,    89,    89,    89,    89,
      89,    90,    90,    90,    91,    91,    92,    92,    92,    92,
      92,    92,    93,    93,    93,    94,    94,    94,    94,    94,
      95,    95,    95,    96,    96,    96,    96,    97,    97,    98,
      98,    99,    99,    99,    99,   100,   100,   101,   101,   102,
     102
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     6,     4,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     2,     3,     1,     2,     1,
       1,     2,     2,     2,     4,     6,     3,     1,     1,     1,
       1,     0,     0,     9,     0,     6,     5,     0,     0,     9,
       2,     2,     2,     2,     3,     3,     3,     3,     5,     5,
       5,     5,     1,     1,     1,     1,     1,     3,     3,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     0,
       0,     7,     1,     2,     1,     3,     1,     1,     1,     1,
       3,     1,     2,     2,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     2,     4,
       3,     1,     4,     4,     3,     1,     3,     2,     1,     1,
       3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
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
  unsigned long int yylno = yyrline[yyrule];
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
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
| yyreduce -- Do a reduction.  |
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
        case 31:
#line 149 "icg.y" /* yacc.c:1646  */
    {from_loop = 0;}
#line 1484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 157 "icg.y" /* yacc.c:1646  */
    {
			// fprintf(fp_icg, "if False t%d goto L%d\n", --tempno, ln);
			// fprintf(fp_quad, "\tifFalse\t\tt%d\t\t  \t\tL%d\n", tempno, ln);
			// tempno++;
		}
#line 1494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 163 "icg.y" /* yacc.c:1646  */
    {
		
			//expression 3

			switch(exprno){
				case 0:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s + 1\n",buffer, (yyvsp[-2].sval));
						fprintf(fp_quad, "\t+\t\t%s\t\t1 \t\t%s\n", (yyvsp[-2].sval), buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-2].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-2].sval));
						break;

				case 1:	
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s - 1\n",buffer, (yyvsp[-2].sval));
						fprintf(fp_quad, "\t-\t\t%s\t\t1 \t\t%s\n", (yyvsp[-2].sval), buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-2].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-2].sval));
						break;

				case 2:	
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s + 1\n",buffer, (yyvsp[-2].sval));
						fprintf(fp_quad, "\t+\t\t%s\t\t1 \t\t%s\n", (yyvsp[-2].sval), buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-2].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-2].sval));
						break;

				case 3:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s - 1\n",buffer, (yyvsp[-2].sval));
						fprintf(fp_quad, "\t-\t\t%s\t\t1 \t\t%s\n", (yyvsp[-2].sval), buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-2].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-2].sval));
						break;

				case 4:						
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s + %s\n",buffer, (yyvsp[-2].sval), intbuf);
						fprintf(fp_quad, "\t+\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), intbuf, buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-2].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-2].sval));
						break;

				case 5:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s - %s\n",buffer, (yyvsp[-2].sval), intbuf);
						fprintf(fp_quad, "\t-\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), intbuf, buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-2].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-2].sval));
						break;

				case 6:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s * %s\n",buffer, (yyvsp[-2].sval), intbuf);
						fprintf(fp_quad, "\t*\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), intbuf, buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-2].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-2].sval));
						break;

				case 7:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s / %s\n",buffer, (yyvsp[-2].sval), intbuf);
						fprintf(fp_quad, "\t/\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), intbuf, buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-2].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-2].sval));
						break;

				case 8:	
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s + %s\n",buffer, secIDbuf, intbuf);
						fprintf(fp_quad, "\t+\t\t%s\t\t%s\t\t%s\n", secIDbuf, intbuf, buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-2].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-2].sval));
						break;

				case 9:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s - %s\n",buffer, secIDbuf, intbuf);
						fprintf(fp_quad, "\t-\t\t%s\t\t%s\t\t%s\n", secIDbuf, intbuf, buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-2].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-2].sval));
						break;

				case 10:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s * %s\n",buffer, secIDbuf, intbuf);
						fprintf(fp_quad, "\t*\t\t%s\t\t%s\t\t%s\n", secIDbuf, intbuf, buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-2].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-2].sval));
						break;

				case 11:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s / %s\n",buffer, secIDbuf, intbuf);
						fprintf(fp_quad, "\t/\t\t%s\t\t%s\t\t%s\n", secIDbuf, intbuf, buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[-2].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-2].sval));
						break;
			}

			exprno = -1;

			//end of expression 3

			fprintf(fp_icg, "goto L%d\n", --ln);
			fprintf(fp_quad, "\tgoto\t\t  \t\t  \t\tL%d\n", ln);
			ln++;

			fprintf(fp_icg, "L%d:\n", ln);
			fprintf(fp_quad, "\tLabel\t\t  \t\t  \t\tL%d\n", ln);
			ln++;

		}
#line 1650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 317 "icg.y" /* yacc.c:1646  */
    {from_loop = 1;}
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 328 "icg.y" /* yacc.c:1646  */
    {
			//end of expression 3

			fprintf(fp_icg, "goto L%d\n", for_else);
			--ln;
			fprintf(fp_quad, "\tgoto\t\t  \t\t  \t\tL%d\n", ln);
			ln++;

			fprintf(fp_icg, "Loop1:\n");
			fprintf(fp_quad, "\tLabel\t\t  \t\t  \t\tL%d\n", ln);
			ln++;

		}
#line 1674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 345 "icg.y" /* yacc.c:1646  */
    {
			//end of expression 3

			// fprintf(fp_icg, "goto L%d\n", --ln);
			// fprintf(fp_quad, "\tgoto\t\t  \t\t  \t\tL%d\n", ln);
			// ln++;

			fprintf(fp_icg, "L%d:\n", ln);
			fprintf(fp_quad, "\tLabel\t\t  \t\t  \t\tL%d\n", ln);
			ln++;
		}
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 360 "icg.y" /* yacc.c:1646  */
    {
			//end of expression 3

			// fprintf(fp_icg, "goto L%d\n", --ln);
			// fprintf(fp_quad, "\tgoto\t\t  \t\t  \t\tL%d\n", ln);
			// ln++;

			fprintf(fp_icg, "L%d:\n", ln);
			fprintf(fp_quad, "\tLabel\t\t  \t\t  \t\tL%d\n", ln);
			ln++;

			// ELSE
				
			// fprintf(fp_icg,"L%d:\n", ln);
			// ln++;			
			// fprintf(fp_quad, "\tLabel\t\t  \t\t  \t\tL%d\n", ln);
			// fprintf(fp_icg, "if True t%d goto L%d\n", --tempno, ln);
			// fprintf(fp_quad, "\tifTrue\t\tt%d\t\t  \t\tL%d\n", tempno, ln);
			// tempno++; 

		}
#line 1716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 381 "icg.y" /* yacc.c:1646  */
    {
		  	fprintf(fp_icg, "if True t%d goto L%d\n", from_else, ln);
			--tempno;
			fprintf(fp_quad, "\tifTrue\t\tt%d\t\t  \t\tL%d\n", tempno, ln);
			tempno++;
	  }
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 388 "icg.y" /* yacc.c:1646  */
    {
			//end of expression 3

			// fprintf(fp_icg, "goto L%d\n", --ln);
			// fprintf(fp_quad, "\tgoto\t\t  \t\t  \t\tL%d\n", ln);
			// ln++;

			fprintf(fp_icg, "L%d:\n", ln);
			fprintf(fp_quad, "\tLabel\t\t  \t\t  \t\tL%d\n", ln);
			ln++;
		}
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 404 "icg.y" /* yacc.c:1646  */
    {  
			// printf("ID %s\n", $1);
			exprno = 0; 

			m = strlen((yyvsp[-1].sval));
			strncpy((yyval.sval), (yyvsp[-1].sval), m);
			(yyval.sval)[m] = '\0';
		}
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 413 "icg.y" /* yacc.c:1646  */
    {  
			exprno = 1;

			m = strlen((yyvsp[-1].sval));
			strncpy((yyval.sval), (yyvsp[-1].sval), m);
			(yyval.sval)[m] = '\0';
		}
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 421 "icg.y" /* yacc.c:1646  */
    {  
			exprno = 2;

			m = strlen((yyvsp[0].sval));
			strncpy((yyval.sval), (yyvsp[0].sval), m);
			(yyval.sval)[m] = '\0';
		}
#line 1780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 429 "icg.y" /* yacc.c:1646  */
    {  
			exprno = 3; 

			m = strlen((yyvsp[0].sval));
			strncpy((yyval.sval), (yyvsp[0].sval), m);
			(yyval.sval)[m] = '\0';
		}
#line 1792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 437 "icg.y" /* yacc.c:1646  */
    {  
			exprno = 4; 

			m = strlen((yyvsp[-2].sval));
			strncpy((yyval.sval), (yyvsp[-2].sval), m);
			(yyval.sval)[m] = '\0';

			m = strlen((yyvsp[0].sval));
			strncpy(intbuf, (yyvsp[0].sval), m);
			intbuf[m] = '\0';

		}
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 450 "icg.y" /* yacc.c:1646  */
    {  
			exprno = 5;
			
			m = strlen((yyvsp[-2].sval));
			strncpy((yyval.sval), (yyvsp[-2].sval), m);
			(yyval.sval)[m] = '\0';

			m = strlen((yyvsp[0].sval));
			strncpy(intbuf, (yyvsp[0].sval), m);
			intbuf[m] = '\0';
		}
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 462 "icg.y" /* yacc.c:1646  */
    {  
			exprno = 7;
			
			m = strlen((yyvsp[-2].sval));
			strncpy((yyval.sval), (yyvsp[-2].sval), m);
			(yyval.sval)[m] = '\0';

			m = strlen((yyvsp[0].sval));
			strncpy(intbuf, (yyvsp[0].sval), m);
			intbuf[m] = '\0';
		}
#line 1841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 474 "icg.y" /* yacc.c:1646  */
    {  
			exprno = 7; 
			
			m = strlen((yyvsp[-2].sval));
			strncpy((yyval.sval), (yyvsp[-2].sval), m);
			(yyval.sval)[m] = '\0';

			m = strlen((yyvsp[0].sval));
			strncpy(intbuf, (yyvsp[0].sval), m);
			intbuf[m] = '\0';
		}
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 486 "icg.y" /* yacc.c:1646  */
    {  
			exprno = 8;

			m = strlen((yyvsp[-4].sval));
			strncpy((yyval.sval), (yyvsp[-4].sval), m);
			(yyval.sval)[m] = '\0';

			m = strlen((yyvsp[0].sval));
			strncpy(intbuf, (yyvsp[0].sval), m);
			intbuf[m] = '\0';

			m = strlen((yyvsp[-2].sval));
			strncpy(secIDbuf, (yyvsp[-2].sval), m);
			secIDbuf[m] = '\0';
		}
#line 1877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 502 "icg.y" /* yacc.c:1646  */
    {  
			exprno = 9;
			
			m = strlen((yyvsp[-4].sval));
			strncpy((yyval.sval), (yyvsp[-4].sval), m);
			(yyval.sval)[m] = '\0';

			m = strlen((yyvsp[0].sval));
			strncpy(intbuf, (yyvsp[0].sval), m);
			intbuf[m] = '\0';

			m = strlen((yyvsp[-2].sval));
			strncpy(secIDbuf, (yyvsp[-2].sval), m);
			secIDbuf[m] = '\0';
		}
#line 1897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 518 "icg.y" /* yacc.c:1646  */
    {  
			exprno = 10; 
			
			m = strlen((yyvsp[-4].sval));
			strncpy((yyval.sval), (yyvsp[-4].sval), m);
			(yyval.sval)[m] = '\0';

			m = strlen((yyvsp[0].sval));
			strncpy(intbuf, (yyvsp[0].sval), m);
			intbuf[m] = '\0';

			m = strlen((yyvsp[-2].sval));
			strncpy(secIDbuf, (yyvsp[-2].sval), m);
			secIDbuf[m] = '\0';
		}
#line 1917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 534 "icg.y" /* yacc.c:1646  */
    {  
			exprno = 11; 

			m = strlen((yyvsp[-4].sval));
			strncpy((yyval.sval), (yyvsp[-4].sval), m);
			(yyval.sval)[m] = '\0';

			m = strlen((yyvsp[0].sval));
			strncpy(intbuf, (yyvsp[0].sval), m);
			intbuf[m] = '\0';

			m = strlen((yyvsp[-2].sval));
			strncpy(secIDbuf, (yyvsp[-2].sval), m);
			secIDbuf[m] = '\0';
		}
#line 1937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 567 "icg.y" /* yacc.c:1646  */
    {
			if(tempno > 0){
				fprintf(fp_icg, "%s = t%d\n", (yyvsp[-2].sval), --tempno); 
				fprintf(fp_quad, "\t=\t\tt%d\t\t  \t\t%s\n", tempno, (yyvsp[-2].sval));
				tempno++;
			}
			else if(tempno == 0){
				fprintf(fp_icg, "%s = %s\n", (yyvsp[-2].sval), (yyvsp[0].sval)); 
				fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", (yyvsp[0].sval), (yyvsp[-2].sval));
		
			}
			
		}
#line 1955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 585 "icg.y" /* yacc.c:1646  */
    {	strcpy((yyval.sval), (yyvsp[0].sval)); }
#line 1961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 587 "icg.y" /* yacc.c:1646  */
    {
			switch(assignop){
				case 0: 
						if(tempno == 0 || num_flag == 1){
							fprintf(fp_icg, "%s = %s\n", (yyvsp[-2].sval), (yyvsp[0].sval)); 
							fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", (yyvsp[0].sval), (yyvsp[-2].sval));
							num_flag = 0;								
						}
						else if(tempno > 0 ){
							fprintf(fp_icg, "%s = t%d\n", (yyvsp[-2].sval), --tempno); 
							fprintf(fp_quad, "\t=\t\tt%d\t\t  \t\t%s\n", tempno, (yyvsp[-2].sval));
							tempno++;
						}
						break;

				case 1: 
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s + %s\n",buffer, (yyvsp[-2].sval), (yyvsp[0].sval));
						fprintf(fp_quad, "\t+\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), (yyvsp[0].sval), buffer);

						fprintf(fp_icg, "%s = t%d\n", (yyvsp[-2].sval), --tempno); 
						fprintf(fp_quad, "\t=\t\tt%d\t\t  \t\t%s\n", tempno, (yyvsp[-2].sval));
						tempno++;
					
						break;
				case 2:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s - %s\n",buffer, (yyvsp[-2].sval), (yyvsp[0].sval));
						fprintf(fp_quad, "\t-\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), (yyvsp[0].sval), buffer);

						fprintf(fp_icg, "%s = t%d\n", (yyvsp[-2].sval), --tempno); 
						fprintf(fp_quad, "\t=\t\tt%d\t\t  \t\t%s\n", tempno, (yyvsp[-2].sval));
						tempno++;

						break;
				case 3:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s * %s\n",buffer, (yyvsp[-2].sval), (yyvsp[0].sval));
						fprintf(fp_quad, "\t*\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), (yyvsp[0].sval), buffer);

						fprintf(fp_icg, "%s = t%d\n", (yyvsp[-2].sval), --tempno); 
						fprintf(fp_quad, "\t=\t\tt%d\t\t  \t\t%s\n", tempno, (yyvsp[-2].sval));
						tempno++;

						break;
				case 4:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s / %s\n",buffer, (yyvsp[-2].sval), (yyvsp[0].sval));
						fprintf(fp_quad, "\t/\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), (yyvsp[0].sval), buffer);

						fprintf(fp_icg, "%s = t%d\n", (yyvsp[-2].sval), --tempno); 
						fprintf(fp_quad, "\t=\t\tt%d\t\t  \t\t%s\n", tempno, (yyvsp[-2].sval));
						tempno++;

						break;
				case 5:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s %c %s\n",buffer, (yyvsp[-2].sval), '%',(yyvsp[0].sval));
						fprintf(fp_quad, "\t%c\t\t%s\t\t%s\t\t%s\n", '%', (yyvsp[-2].sval), (yyvsp[0].sval), buffer);

						fprintf(fp_icg, "%s = t%d\n", (yyvsp[-2].sval), --tempno); 
						fprintf(fp_quad, "\t=\t\tt%d\t\t  \t\t%s\n", tempno, (yyvsp[-2].sval));
						tempno++;

						break;
			}
			
			assignop = -1;

			
		}
#line 2047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 672 "icg.y" /* yacc.c:1646  */
    { assignop = 0; 	}
#line 2053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 673 "icg.y" /* yacc.c:1646  */
    { assignop = 1; 	}
#line 2059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 674 "icg.y" /* yacc.c:1646  */
    { assignop = 2; 	}
#line 2065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 675 "icg.y" /* yacc.c:1646  */
    { assignop = 3; 	}
#line 2071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 676 "icg.y" /* yacc.c:1646  */
    { assignop = 4; 	}
#line 2077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 677 "icg.y" /* yacc.c:1646  */
    { assignop = 5; 	}
#line 2083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 682 "icg.y" /* yacc.c:1646  */
    {	strcpy((yyval.sval), (yyvsp[0].sval));  }
#line 2089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 684 "icg.y" /* yacc.c:1646  */
    { 
			fprintf(fp_icg,"ifFalse t%d goto L%d\n", --tempno, ln); 
			fprintf(fp_quad, "\tifFalse\t\tt%d\t\t  \t\tL%d\n", tempno, ln);
			tempno++;		
			ln++;
		}
#line 2100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 691 "icg.y" /* yacc.c:1646  */
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s\n", buffer, (yyvsp[0].sval));
			fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", (yyvsp[0].sval), buffer);

			fprintf(fp_icg,"goto L%d\n", ln);
			fprintf(fp_quad, "\tgoto\t\t  \t\t  \t\tL%d\n", ln);

			fprintf(fp_icg,"L%d:\n", --ln);
			fprintf(fp_quad, "\tLabel\t\t  \t\t  \t\tL%d\n", ln);
			ln++;
		}
#line 2119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 706 "icg.y" /* yacc.c:1646  */
    {
			
			fprintf(fp_icg, "%s = %s\n", buffer, (yyvsp[0].sval));
			fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", (yyvsp[0].sval), buffer);

			fprintf(fp_icg,"L%d:\n", ln);
			fprintf(fp_quad, "\tLabel\t\t  \t\t  \t\tL%d\n", ln);
			ln++;
		}
#line 2133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 726 "icg.y" /* yacc.c:1646  */
    {	strcpy((yyval.sval), (yyvsp[0].sval)); }
#line 2139 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 732 "icg.y" /* yacc.c:1646  */
    {	strcpy((yyval.sval), (yyvsp[0].sval)); 	num_flag = 1;}
#line 2145 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 733 "icg.y" /* yacc.c:1646  */
    {	strcpy((yyval.sval), (yyvsp[0].sval)); 	}
#line 2151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 734 "icg.y" /* yacc.c:1646  */
    {	strcpy((yyval.sval), (yyvsp[0].sval)); 	}
#line 2157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 735 "icg.y" /* yacc.c:1646  */
    {	strcpy((yyval.sval), (yyvsp[0].sval)); 	}
#line 2163 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 736 "icg.y" /* yacc.c:1646  */
    {	strcpy((yyval.sval), (yyvsp[-1].sval)); 	}
#line 2169 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 741 "icg.y" /* yacc.c:1646  */
    {	strcpy((yyval.sval), (yyvsp[0].sval)); }
#line 2175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 743 "icg.y" /* yacc.c:1646  */
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s + 1\n",buffer, (yyvsp[-1].sval));
			fprintf(fp_quad, "\t+\t\t%s\t\t1 \t\t%s\n", (yyvsp[-1].sval), buffer);

			fprintf(fp_icg, "%s = %s\n", (yyvsp[-1].sval), buffer);
			fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-1].sval));
			
		}
#line 2191 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 755 "icg.y" /* yacc.c:1646  */
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s - 1\n",buffer, (yyvsp[-1].sval));
			fprintf(fp_quad, "\t-\t\t%s\t\t1 \t\t%s\n", (yyvsp[-1].sval), buffer);

			fprintf(fp_icg, "%s = %s\n", (yyvsp[-1].sval), buffer);
			fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[-1].sval));
		}
#line 2206 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 769 "icg.y" /* yacc.c:1646  */
    {	strcpy((yyval.sval), (yyvsp[0].sval)); }
#line 2212 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 771 "icg.y" /* yacc.c:1646  */
    {
			switch(unaryop){
				case 1: 
						sprintf(buffer,"t%d",tempno++);	
						m = strlen(buffer);
						buffer[m] = '\0';					
						fprintf(fp_icg, "%s = -%s\n",buffer, (yyvsp[0].sval));	
						fprintf(fp_quad, "\t-\t\t%s\t\t  \t\t%s\n", (yyvsp[0].sval), buffer);
						strncpy((yyval.sval), buffer, m+1);						
						break;

				case 4: 
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s + 1\n",buffer, (yyvsp[0].sval));
						fprintf(fp_quad, "\t+\t\t%s\t\t1 \t\t%s\n", (yyvsp[0].sval), buffer);
						strncpy((yyval.sval), buffer, m+1);		//check out
						break;

				case 5:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s - 1\n",buffer, (yyvsp[0].sval));
						fprintf(fp_quad, "\t-\t\t%s\t\t1 \t\t%s\n", (yyvsp[0].sval), buffer);
						strncpy((yyval.sval), buffer, m+1);		//check out
						break;
			}
			unaryop = -1;
		}
#line 2248 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 806 "icg.y" /* yacc.c:1646  */
    {	unaryop = 0; }
#line 2254 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 807 "icg.y" /* yacc.c:1646  */
    {	unaryop = 1; }
#line 2260 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 808 "icg.y" /* yacc.c:1646  */
    {	unaryop = 2; }
#line 2266 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 809 "icg.y" /* yacc.c:1646  */
    {	unaryop = 3; }
#line 2272 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 810 "icg.y" /* yacc.c:1646  */
    {	unaryop = 4; }
#line 2278 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 811 "icg.y" /* yacc.c:1646  */
    {	unaryop = 5; }
#line 2284 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 816 "icg.y" /* yacc.c:1646  */
    {	strcpy((yyval.sval), (yyvsp[0].sval)); }
#line 2290 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 818 "icg.y" /* yacc.c:1646  */
    {
			before_if();
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s == %s\n", buffer, (yyvsp[-2].sval), (yyvsp[0].sval));
			fprintf(fp_quad, "\t==\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), (yyvsp[0].sval), buffer);
			if_print();
			strncpy((yyval.sval), buffer, m+1);		//check out
		}
#line 2305 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 829 "icg.y" /* yacc.c:1646  */
    {
			before_if();
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			
			fprintf(fp_icg, "%s = %s != %s\n",buffer, (yyvsp[-2].sval), (yyvsp[0].sval));
			fprintf(fp_quad, "\t!=\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), (yyvsp[0].sval), buffer);
			if_print();
			strncpy((yyval.sval), buffer, m+1);		//check out
		}
#line 2321 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 844 "icg.y" /* yacc.c:1646  */
    {	strcpy((yyval.sval), (yyvsp[0].sval)); }
#line 2327 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 846 "icg.y" /* yacc.c:1646  */
    {
			before_if();
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s < %s\n",buffer, (yyvsp[-2].sval), (yyvsp[0].sval));
			fprintf(fp_quad, "\t<\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), (yyvsp[0].sval), buffer);
			if_print();
			strncpy((yyval.sval), buffer, m+1);		//check out
		}
#line 2342 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 857 "icg.y" /* yacc.c:1646  */
    {
			before_if();
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s > %s\n",buffer, (yyvsp[-2].sval), (yyvsp[0].sval));
			fprintf(fp_quad, "\t>\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), (yyvsp[0].sval), buffer);
			if_print();
			strncpy((yyval.sval), buffer, m+1);		//check out
		}
#line 2357 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 868 "icg.y" /* yacc.c:1646  */
    {
			before_if();
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s <= %s\n",buffer, (yyvsp[-2].sval), (yyvsp[0].sval));
			fprintf(fp_quad, "\t<=\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), (yyvsp[0].sval), buffer);
			if_print();
			strncpy((yyval.sval), buffer, m+1);		//check out
		}
#line 2372 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 879 "icg.y" /* yacc.c:1646  */
    {
			before_if();
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s >= %s\n",buffer, (yyvsp[-2].sval), (yyvsp[0].sval));
			fprintf(fp_quad, "\t>=\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), (yyvsp[0].sval), buffer);
			if_print();
			strncpy((yyval.sval), buffer, m+1);		//check out
		}
#line 2387 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 893 "icg.y" /* yacc.c:1646  */
    {	strcpy((yyval.sval), (yyvsp[0].sval)); }
#line 2393 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 895 "icg.y" /* yacc.c:1646  */
    {
			// printf("%s + %s\n", $1, $3 );
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s + %s\n",buffer, (yyvsp[-2].sval), (yyvsp[0].sval));
			fprintf(fp_quad, "\t+\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), (yyvsp[0].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
#line 2408 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 906 "icg.y" /* yacc.c:1646  */
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s - %s\n",buffer, (yyvsp[-2].sval), (yyvsp[0].sval));
			fprintf(fp_quad, "\t-\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), (yyvsp[0].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
#line 2422 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 921 "icg.y" /* yacc.c:1646  */
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s * %s\n",buffer, (yyvsp[-2].sval), (yyvsp[0].sval));
			fprintf(fp_quad, "\t*\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), (yyvsp[0].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
#line 2436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 931 "icg.y" /* yacc.c:1646  */
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s / %s\n",buffer, (yyvsp[-2].sval), (yyvsp[0].sval));
			fprintf(fp_quad, "\t/\t\t%s\t\t%s\t\t%s\n", (yyvsp[-2].sval), (yyvsp[0].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
#line 2450 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 941 "icg.y" /* yacc.c:1646  */
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s %c %s\n",buffer, (yyvsp[-2].sval), '%',(yyvsp[0].sval));
			fprintf(fp_quad, "\t%c\t\t%s\t\t%s\t\t%s\n", '%',(yyvsp[-2].sval), (yyvsp[0].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
#line 2464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 960 "icg.y" /* yacc.c:1646  */
    {
			paramno++;	
			fprintf(fp_icg, "call(%s, %d)\n", (yyvsp[-3].sval), paramno);	
			fprintf(fp_quad, "\tcall\t\t%s\t\t%d\n", (yyvsp[-3].sval), paramno);

			paramno = 0;	
		}
#line 2476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 968 "icg.y" /* yacc.c:1646  */
    {
			fprintf(fp_icg, "call(%s, 0)\n", (yyvsp[-2].sval));	
			fprintf(fp_quad, "\tcall\t\t%s\t\t0\n", (yyvsp[-2].sval));
		}
#line 2485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 977 "icg.y" /* yacc.c:1646  */
    { 
			m = strlen((yyvsp[0].sval));
			strncpy((yyval.sval), (yyvsp[0].sval), m);	
			(yyval.sval)[m] = '\0';
		}
#line 2495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 983 "icg.y" /* yacc.c:1646  */
    {
			
		}
#line 2503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1005 "icg.y" /* yacc.c:1646  */
    {
			fprintf(fp_icg, "param %s\n", (yyvsp[0].sval));
			fprintf(fp_quad, "\tparam\t\t%s\n", (yyvsp[0].sval));
		}
#line 2512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1010 "icg.y" /* yacc.c:1646  */
    {
			fprintf(fp_icg, "param %s\n", (yyvsp[0].sval));
			fprintf(fp_quad, "\tparam\t\t%s\n", (yyvsp[0].sval));	
			
			paramno++; 
		}
#line 2523 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2527 "y.tab.c" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
#line 1019 "icg.y" /* yacc.c:1906  */



void yyerror(const char *str){
	fflush(stdout);
	printf("Line:%d: ", line);
	printf("\033[1;31m");
	printf("error: ");
	printf("\033[0m");
	printf("%s\n", str);
}


int main(){
	
	fp_icg 	 	= fopen("IntermediateCode/icg.txt", "w");
	fp_quad		= fopen("IntermediateCode/quad.txt", "w");
	printf("\n");
	

	fprintf(fp_quad, "\tOp\t\tArg1\t\tArg2\t\tRes\n");
	fprintf(fp_quad, "------------------------------------------------------------------------\n");

	yyparse();
	
	fclose(fp_icg);
	
	printf("\n\nIntermediate Code\n\n");
	system("cat IntermediateCode/icg.txt");

	printf("\n\nQuadruple Format\n\n");
	
	

	fclose(fp_quad);
	system("cat IntermediateCode/quad.txt");
	
	return 0;
}


void before_if(){
	fprintf(fp_icg,"L%d:\n", ln);
	if (from_loop == 1){
		for_else = ln;
		// printf("for_else value %d", for_else);
		from_loop = 2;
	}
	fprintf(fp_quad, "\tLabel\t\t  \t\t  \t\tL%d\n", ln);
	ln++;
}


void if_print(){
	if (from_loop == 2){
		from_loop = 0;
		fprintf(fp_icg, "if False t%d goto Loop1\n", --tempno);
		fprintf(fp_quad, "\tifFalse\t\tt%d\t\t  \t\tL%d\n", tempno, ln);
		tempno++;
		return;
	}
	from_else = tempno - 1;
	fprintf(fp_icg, "if False t%d goto L%d\n", --tempno, ln);
	fprintf(fp_quad, "\tifFalse\t\tt%d\t\t  \t\tL%d\n", tempno, ln);
	tempno++;
}
