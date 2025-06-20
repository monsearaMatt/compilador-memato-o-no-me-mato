/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "calc.y"

#include "calc.h"

// Variables globales
Variable* variables = NULL;
Funcion* funciones = NULL;

#line 79 "calc.tab.c"

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

#include "calc.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NUM = 3,                        /* NUM  */
  YYSYMBOL_ID = 4,                         /* ID  */
  YYSYMBOL_STRING = 5,                     /* STRING  */
  YYSYMBOL_ZAPATILLA = 6,                  /* ZAPATILLA  */
  YYSYMBOL_CALEFACTOR = 7,                 /* CALEFACTOR  */
  YYSYMBOL_TOROMAX = 8,                    /* TOROMAX  */
  YYSYMBOL_RETURN = 9,                     /* RETURN  */
  YYSYMBOL_TECLADO = 10,                   /* TECLADO  */
  YYSYMBOL_REFRIGERADOR = 11,              /* REFRIGERADOR  */
  YYSYMBOL_MICROONDAS = 12,                /* MICROONDAS  */
  YYSYMBOL_LICUADORA = 13,                 /* LICUADORA  */
  YYSYMBOL_IGUAL = 14,                     /* IGUAL  */
  YYSYMBOL_DIFERENTE = 15,                 /* DIFERENTE  */
  YYSYMBOL_MENORIGUAL = 16,                /* MENORIGUAL  */
  YYSYMBOL_MAYORIGUAL = 17,                /* MAYORIGUAL  */
  YYSYMBOL_MENOR = 18,                     /* MENOR  */
  YYSYMBOL_MAYOR = 19,                     /* MAYOR  */
  YYSYMBOL_20_ = 20,                       /* '+'  */
  YYSYMBOL_21_ = 21,                       /* '-'  */
  YYSYMBOL_22_ = 22,                       /* '*'  */
  YYSYMBOL_23_ = 23,                       /* '/'  */
  YYSYMBOL_24_ = 24,                       /* '='  */
  YYSYMBOL_25_ = 25,                       /* ';'  */
  YYSYMBOL_26_ = 26,                       /* '{'  */
  YYSYMBOL_27_ = 27,                       /* '}'  */
  YYSYMBOL_28_ = 28,                       /* '('  */
  YYSYMBOL_29_ = 29,                       /* ')'  */
  YYSYMBOL_YYACCEPT = 30,                  /* $accept  */
  YYSYMBOL_programa = 31,                  /* programa  */
  YYSYMBOL_instrucciones = 32,             /* instrucciones  */
  YYSYMBOL_instruccion = 33,               /* instruccion  */
  YYSYMBOL_expresion = 34,                 /* expresion  */
  YYSYMBOL_condicion = 35,                 /* condicion  */
  YYSYMBOL_bloque_else = 36                /* bloque_else  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
typedef yytype_int8 yy_state_t;

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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  22
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   143

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  30
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  7
/* YYNRULES -- Number of rules.  */
#define YYNRULES  29
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  77

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   274


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      28,    29,    22,    20,     2,    21,     2,    23,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    25,
       2,    24,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    26,     2,    27,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int8 yyrline[] =
{
       0,    33,    33,    37,    38,    42,    43,    44,    45,    46,
      48,    49,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    65,    66,    67,    68,    69,    70,    74,    75,    76
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NUM", "ID", "STRING",
  "ZAPATILLA", "CALEFACTOR", "TOROMAX", "RETURN", "TECLADO",
  "REFRIGERADOR", "MICROONDAS", "LICUADORA", "IGUAL", "DIFERENTE",
  "MENORIGUAL", "MAYORIGUAL", "MENOR", "MAYOR", "'+'", "'-'", "'*'", "'/'",
  "'='", "';'", "'{'", "'}'", "'('", "')'", "$accept", "programa",
  "instrucciones", "instruccion", "expresion", "condicion", "bloque_else", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-25)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     110,   -12,    91,    91,     9,    91,    91,    19,   110,   -25,
      91,    91,   -25,    -4,   -25,   -25,   102,    90,     5,    10,
     108,    20,   -25,   -25,   114,   -14,    91,    91,    91,    91,
      91,   -25,    91,    91,    91,    91,    91,    91,   110,    36,
     -25,   110,   -25,    26,    69,   -19,   -19,   -25,   -25,   120,
     120,   120,   120,   120,   120,    14,    16,    46,   -25,   -25,
     -25,    32,    30,   110,    35,    91,   -25,    61,   110,    38,
     -25,    70,   110,   -25,    76,    30,   -25
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     2,     4,
       0,     0,    12,    13,    14,    20,     0,     0,     0,     0,
       0,     0,     1,     3,     0,     0,     0,     0,     0,     0,
       0,     6,     0,     0,     0,     0,     0,     0,     0,     0,
      10,     0,     5,     0,     0,    15,    16,    17,    18,    25,
      26,    24,    23,    22,    21,     0,     0,     0,    11,    19,
       7,     0,    29,     0,     0,     0,     8,     0,     0,     0,
       9,     0,     0,    27,     0,    29,    28
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -25,   -25,   -24,    -8,     0,    -5,   -13
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     7,     8,     9,    17,    18,    66
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      23,    21,    16,    29,    30,    20,    27,    28,    29,    30,
      24,    25,    10,    19,    55,    43,    11,    57,     1,    22,
       2,     3,     4,     5,    26,     6,    44,    45,    46,    47,
      48,    38,    49,    50,    51,    52,    53,    54,    39,    67,
      56,    60,    64,    65,    71,    61,    41,    23,    74,    23,
       1,    58,     2,     3,     4,     5,     0,     6,    63,    23,
      69,    68,    76,    23,    72,     1,    23,     2,     3,     4,
       5,     0,     6,    62,     1,     0,     2,     3,     4,     5,
       1,     6,     2,     3,     4,     5,     0,     6,    70,    27,
      28,    29,    30,     0,    12,    13,    14,    73,    59,     0,
       0,    15,     0,    75,    32,    33,    34,    35,    36,    37,
      27,    28,    29,    30,     1,     0,     2,     3,     4,     5,
       0,     6,    27,    28,    29,    30,     0,    31,    27,    28,
      29,    30,     0,    40,    27,    28,    29,    30,     0,    42,
      27,    28,    29,    30
};

static const yytype_int8 yycheck[] =
{
       8,     6,     2,    22,    23,     5,    20,    21,    22,    23,
      10,    11,    24,     4,    38,    29,    28,    41,     4,     0,
       6,     7,     8,     9,    28,    11,    26,    27,    28,    29,
      30,    26,    32,    33,    34,    35,    36,    37,    28,    63,
       4,    27,    12,    13,    68,    29,    26,    55,    72,    57,
       4,    25,     6,     7,     8,     9,    -1,    11,    26,    67,
      65,    26,    75,    71,    26,     4,    74,     6,     7,     8,
       9,    -1,    11,    27,     4,    -1,     6,     7,     8,     9,
       4,    11,     6,     7,     8,     9,    -1,    11,    27,    20,
      21,    22,    23,    -1,     3,     4,     5,    27,    29,    -1,
      -1,    10,    -1,    27,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     4,    -1,     6,     7,     8,     9,
      -1,    11,    20,    21,    22,    23,    -1,    25,    20,    21,
      22,    23,    -1,    25,    20,    21,    22,    23,    -1,    25,
      20,    21,    22,    23
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     6,     7,     8,     9,    11,    31,    32,    33,
      24,    28,     3,     4,     5,    10,    34,    34,    35,     4,
      34,    35,     0,    33,    34,    34,    28,    20,    21,    22,
      23,    25,    14,    15,    16,    17,    18,    19,    26,    28,
      25,    26,    25,    29,    34,    34,    34,    34,    34,    34,
      34,    34,    34,    34,    34,    32,     4,    32,    25,    29,
      27,    29,    27,    26,    12,    13,    36,    32,    26,    35,
      27,    32,    26,    27,    32,    27,    36
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    30,    31,    32,    32,    33,    33,    33,    33,    33,
      33,    33,    34,    34,    34,    34,    34,    34,    34,    34,
      34,    35,    35,    35,    35,    35,    35,    36,    36,    36
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     4,     3,     5,     6,     8,
       3,     5,     1,     1,     1,     3,     3,     3,     3,     4,
       1,     3,     3,     3,     3,     3,     3,     4,     6,     0
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 2: /* programa: instrucciones  */
#line 33 "calc.y"
                  { ejecutar((yyvsp[0].instr)); }
#line 1149 "calc.tab.c"
    break;

  case 3: /* instrucciones: instrucciones instruccion  */
#line 37 "calc.y"
                                { (yyval.instr) = agregar_instr((yyvsp[-1].instr), (yyvsp[0].instr)); }
#line 1155 "calc.tab.c"
    break;

  case 4: /* instrucciones: instruccion  */
#line 38 "calc.y"
                                { (yyval.instr) = (yyvsp[0].instr); }
#line 1161 "calc.tab.c"
    break;

  case 5: /* instruccion: ID '=' expresion ';'  */
#line 42 "calc.y"
                                   { (yyval.instr) = crear_asignacion((yyvsp[-3].id), (yyvsp[-1].expr)); }
#line 1167 "calc.tab.c"
    break;

  case 6: /* instruccion: ZAPATILLA expresion ';'  */
#line 43 "calc.y"
                                   { (yyval.instr) = crear_asignacion("_print", (yyvsp[-1].expr)); }
#line 1173 "calc.tab.c"
    break;

  case 7: /* instruccion: CALEFACTOR condicion '{' instrucciones '}'  */
#line 44 "calc.y"
                                                 { (yyval.instr) = crear_while((yyvsp[-3].expr), (yyvsp[-1].instr)); }
#line 1179 "calc.tab.c"
    break;

  case 8: /* instruccion: REFRIGERADOR condicion '{' instrucciones '}' bloque_else  */
#line 45 "calc.y"
                                                               { (yyval.instr) = crear_if((yyvsp[-4].expr), (yyvsp[-2].instr), (yyvsp[0].instr)); }
#line 1185 "calc.tab.c"
    break;

  case 9: /* instruccion: TOROMAX ID '(' ID ')' '{' instrucciones '}'  */
#line 46 "calc.y"
                                                  { agregar_funcion(crear_funcion((yyvsp[-6].id), (yyvsp[-4].id), (yyvsp[-1].instr))); 
    (yyval.instr) = crear_asignacion("_", crear_num(0));  }
#line 1192 "calc.tab.c"
    break;

  case 10: /* instruccion: RETURN expresion ';'  */
#line 48 "calc.y"
                                   { (yyval.instr) = crear_return((yyvsp[-1].expr)); }
#line 1198 "calc.tab.c"
    break;

  case 11: /* instruccion: ID '(' expresion ')' ';'  */
#line 49 "calc.y"
                                   { (yyval.instr) = agregar_instr(NULL, crear_asignacion("_", crear_llamada((yyvsp[-4].id), (yyvsp[-2].expr)))); }
#line 1204 "calc.tab.c"
    break;

  case 12: /* expresion: NUM  */
#line 53 "calc.y"
                                  { (yyval.expr) = crear_num((yyvsp[0].num)); }
#line 1210 "calc.tab.c"
    break;

  case 13: /* expresion: ID  */
#line 54 "calc.y"
                                  { (yyval.expr) = crear_var((yyvsp[0].id)); }
#line 1216 "calc.tab.c"
    break;

  case 14: /* expresion: STRING  */
#line 55 "calc.y"
                                  { (yyval.expr) = crear_string((yyvsp[0].str)); }
#line 1222 "calc.tab.c"
    break;

  case 15: /* expresion: expresion '+' expresion  */
#line 56 "calc.y"
                                  { (yyval.expr) = crear_op('+', (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1228 "calc.tab.c"
    break;

  case 16: /* expresion: expresion '-' expresion  */
#line 57 "calc.y"
                                  { (yyval.expr) = crear_op('-', (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1234 "calc.tab.c"
    break;

  case 17: /* expresion: expresion '*' expresion  */
#line 58 "calc.y"
                                  { (yyval.expr) = crear_op('*', (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1240 "calc.tab.c"
    break;

  case 18: /* expresion: expresion '/' expresion  */
#line 59 "calc.y"
                                  { (yyval.expr) = crear_op('/', (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1246 "calc.tab.c"
    break;

  case 19: /* expresion: ID '(' expresion ')'  */
#line 60 "calc.y"
                                  { (yyval.expr) = crear_llamada((yyvsp[-3].id), (yyvsp[-1].expr)); }
#line 1252 "calc.tab.c"
    break;

  case 20: /* expresion: TECLADO  */
#line 61 "calc.y"
                                  { (yyval.expr) = crear_input(); }
#line 1258 "calc.tab.c"
    break;

  case 21: /* condicion: expresion MAYOR expresion  */
#line 65 "calc.y"
                                      { (yyval.expr) = crear_op('>', (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1264 "calc.tab.c"
    break;

  case 22: /* condicion: expresion MENOR expresion  */
#line 66 "calc.y"
                                      { (yyval.expr) = crear_op('<', (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1270 "calc.tab.c"
    break;

  case 23: /* condicion: expresion MAYORIGUAL expresion  */
#line 67 "calc.y"
                                      { (yyval.expr) = crear_op('G', (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1276 "calc.tab.c"
    break;

  case 24: /* condicion: expresion MENORIGUAL expresion  */
#line 68 "calc.y"
                                      { (yyval.expr) = crear_op('L', (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1282 "calc.tab.c"
    break;

  case 25: /* condicion: expresion IGUAL expresion  */
#line 69 "calc.y"
                                      { (yyval.expr) = crear_op('E', (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1288 "calc.tab.c"
    break;

  case 26: /* condicion: expresion DIFERENTE expresion  */
#line 70 "calc.y"
                                      { (yyval.expr) = crear_op('N', (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1294 "calc.tab.c"
    break;

  case 27: /* bloque_else: MICROONDAS '{' instrucciones '}'  */
#line 74 "calc.y"
                                       { (yyval.instr) = (yyvsp[-1].instr); }
#line 1300 "calc.tab.c"
    break;

  case 28: /* bloque_else: LICUADORA condicion '{' instrucciones '}' bloque_else  */
#line 75 "calc.y"
                                                            { (yyval.instr) = crear_if((yyvsp[-4].expr), (yyvsp[-2].instr), (yyvsp[0].instr)); }
#line 1306 "calc.tab.c"
    break;

  case 29: /* bloque_else: %empty  */
#line 76 "calc.y"
                                    { (yyval.instr) = NULL; }
#line 1312 "calc.tab.c"
    break;


#line 1316 "calc.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 79 "calc.y"


// Implementación de todas las funciones auxiliares

Expresion* crear_num(int valor) {
    Expresion* e = malloc(sizeof(Expresion));
    e->tipo = 0; e->valor = valor; e->nombre = NULL; e->cadena = NULL;
    e->izq = e->der = e->args = NULL; e->op = 0;
    return e;
}

Expresion* crear_var(char* id) {
    Expresion* e = malloc(sizeof(Expresion));
    e->tipo = 1; e->nombre = strdup(id); e->valor = 0; e->cadena = NULL;
    e->izq = e->der = e->args = NULL; e->op = 0;
    return e;
}

Expresion* crear_string(char* str) {
    Expresion* e = malloc(sizeof(Expresion));
    e->tipo = 5; // Nuevo tipo para strings
    e->cadena = strdup(str); 
    e->nombre = NULL; e->valor = 0;
    e->izq = e->der = e->args = NULL; e->op = 0;
    return e;
}

Expresion* crear_op(int op, Expresion* izq, Expresion* der) {
    Expresion* e = malloc(sizeof(Expresion));
    e->tipo = 2; e->op = op; e->izq = izq; e->der = der;
    e->nombre = NULL; e->valor = 0; e->args = NULL; e->cadena = NULL;
    return e;
}

Expresion* crear_llamada(char* nombre, Expresion* arg) {
    Expresion* e = malloc(sizeof(Expresion));
    e->tipo = 3;
    e->nombre = strdup(nombre);
    e->izq = arg; e->der = NULL; e->op = 0; e->valor = 0; e->args = NULL; e->cadena = NULL;
    return e;
}

Expresion* crear_input(void) {
    Expresion* e = malloc(sizeof(Expresion));
    e->tipo = 4; // Tipo para input
    e->nombre = NULL; e->valor = 0; e->cadena = NULL;
    e->izq = e->der = e->args = NULL; e->op = 0;
    return e;
}

Instruccion* crear_asignacion(char* id, Expresion* expr) {
    Instruccion* i = malloc(sizeof(Instruccion));
    i->tipo = 0; i->id = strdup(id); i->expr = expr;
    i->cond = NULL; i->cuerpo = NULL; i->sig = NULL; i->cuerpo_else = NULL;
    return i;
}

Instruccion* crear_while(Expresion* cond, Instruccion* cuerpo) {
    Instruccion* i = malloc(sizeof(Instruccion));
    i->tipo = 1; i->cond = cond; i->cuerpo = cuerpo;
    i->id = NULL; i->expr = NULL; i->sig = NULL; i->cuerpo_else = NULL;
    return i;
}

Instruccion* crear_if(Expresion* cond, Instruccion* cuerpo, Instruccion* cuerpo_else) {
    Instruccion* i = malloc(sizeof(Instruccion));
    i->tipo = 3; i->cond = cond; i->cuerpo = cuerpo; i->cuerpo_else = cuerpo_else;
    i->id = NULL; i->expr = NULL; i->sig = NULL;
    return i;
}

Instruccion* crear_return(Expresion* expr) {
    Instruccion* i = malloc(sizeof(Instruccion));
    i->tipo = 2; i->expr = expr;
    i->id = NULL; i->cond = NULL; i->cuerpo = NULL; i->sig = NULL; i->cuerpo_else = NULL;
    return i;
}

Instruccion* agregar_instr(Instruccion* lista, Instruccion* nueva) {
    if (!lista) return nueva;
    Instruccion* temp = lista;
    while (temp->sig) temp = temp->sig;
    temp->sig = nueva;
    return lista;
}

Funcion* crear_funcion(char* nombre, char* parametro, Instruccion* cuerpo) {
    Funcion* f = malloc(sizeof(Funcion));
    f->nombre = strdup(nombre);
    f->parametro = strdup(parametro);
    f->cuerpo = cuerpo;
    f->sig = NULL;
    return f;
}

void agregar_funcion(Funcion* f) {
    f->sig = funciones;
    funciones = f;
}

Funcion* buscar_funcion(char* nombre) {
    Funcion* f = funciones;
    while (f) {
        if (strcmp(f->nombre, nombre) == 0)
            return f;
        f = f->sig;
    }
    return NULL;
}

Variable* buscar_variable(char* nombre) {
    Variable* v = variables;
    while (v) {
        if (strcmp(v->nombre, nombre) == 0)
            return v;
        v = v->sig;
    }
    return NULL;
}

void asignar_variable(char* nombre, int valor) {
    Variable* v = buscar_variable(nombre);
    if (v) {
        v->valor = valor;
    } else {
        v = malloc(sizeof(Variable));
        v->nombre = strdup(nombre);
        v->valor = valor;
        v->sig = variables;
        variables = v;
    }
}

int obtener_variable(char* nombre) {
    Variable* v = buscar_variable(nombre);
    if (v) {
        return v->valor;
    }
    return 0; // Variable no existe, devolver 0
}

// Función para evaluar una expresión matemática simple desde string
int evaluar_expresion_string(char* expr) {
    // Eliminar espacios
    char limpia[256];
    int j = 0;
    for (int i = 0; expr[i] && j < 255; i++) {
        if (expr[i] != ' ' && expr[i] != '\t') {
            limpia[j++] = expr[i];
        }
    }
    limpia[j] = '\0';
    
    // Buscar operadores (de derecha a izquierda para precedencia correcta)
    for (int i = strlen(limpia) - 1; i >= 0; i--) {
        if (limpia[i] == '+' || limpia[i] == '-') {
            if (i == 0) continue; // Es un signo negativo al inicio
            
            limpia[i] = '\0';
            int izq = evaluar_expresion_string(limpia);
            int der = evaluar_expresion_string(limpia + i + 1);
            return (limpia[i] == '+') ? izq + der : izq - der;
        }
    }
    
    for (int i = strlen(limpia) - 1; i >= 0; i--) {
        if (limpia[i] == '*' || limpia[i] == '/') {
            limpia[i] = '\0';
            int izq = evaluar_expresion_string(limpia);
            int der = evaluar_expresion_string(limpia + i + 1);
            if (limpia[i] == '*') {
                return izq * der;
            } else {
                if (der == 0) {
                    printf("Error: División por cero\n");
                    return 0;
                }
                return izq / der;
            }
        }
    }
    
    // Si no hay operadores, debe ser un número
    return atoi(limpia);
}

// Función para validar si una expresión es válida
int validar_expresion(char* expr) {
    int len = strlen(expr);
    if (len == 0) return 0;
    
    int ultimo_fue_operador = 1; // Empezamos como si el anterior fuera operador
    int parentesis = 0;
    
    for (int i = 0; i < len; i++) {
        char c = expr[i];
        
        if (c == ' ' || c == '\t') continue;
        
        if (c >= '0' && c <= '9') {
            ultimo_fue_operador = 0;
        } else if (c == '+' || c == '-' || c == '*' || c == '/') {
            if (ultimo_fue_operador && c != '-' && c != '+') return 0; // Operador inválido
            ultimo_fue_operador = 1;
        } else if (c == '(') {
            parentesis++;
            ultimo_fue_operador = 1;
        } else if (c == ')') {
            parentesis--;
            if (parentesis < 0) return 0;
            ultimo_fue_operador = 0;
        } else {
            return 0; // Carácter inválido
        }
    }
    
    return parentesis == 0 && !ultimo_fue_operador;
}

ResultadoRetorno ejecutar_con_retorno(Instruccion* instr) {
    ResultadoRetorno r = {0, 0};
    while (instr) {
        if (instr->tipo == 0) {
            int val = evaluar(instr->expr);
            asignar_variable(instr->id, val);
        } else if (instr->tipo == 1) {
            while (evaluar(instr->cond)) {
                ResultadoRetorno temp = ejecutar_con_retorno(instr->cuerpo);
                if (temp.hay_retorno) return temp;
            }
        } else if (instr->tipo == 2) {
            r.hay_retorno = 1;
            r.valor = evaluar(instr->expr);
            return r;
        } else if (instr->tipo == 3) { // IF
            if (evaluar(instr->cond)) {
                ResultadoRetorno temp = ejecutar_con_retorno(instr->cuerpo);
                if (temp.hay_retorno) return temp;
            } else if (instr->cuerpo_else) {
                ResultadoRetorno temp = ejecutar_con_retorno(instr->cuerpo_else);
                if (temp.hay_retorno) return temp;
            }
        }
        instr = instr->sig;
    }
    return r;
}

int evaluar(Expresion* expr) {
    if (!expr) return 0;
    switch (expr->tipo) {
        case 0: return expr->valor;
        case 1: return obtener_variable(expr->nombre);
        case 2: {
            int izq = evaluar(expr->izq);
            int der = evaluar(expr->der);
            switch (expr->op) {
                case '+': return izq + der;
                case '-': return izq - der;
                case '*': return izq * der;
                case '/': return (der == 0) ? 0 : izq / der;
                case '>': return izq > der;
                case '<': return izq < der;
                case 'G': return izq >= der; // MAYORIGUAL
                case 'L': return izq <= der; // MENORIGUAL
                case 'E': return izq == der; // IGUAL
                case 'N': return izq != der; // DIFERENTE
            }
        }
        case 3: {
            Funcion* f = buscar_funcion(expr->nombre);
            if (!f) {
                fprintf(stderr, "Función '%s' no definida\n", expr->nombre);
                exit(1);
            }
            int temp = obtener_variable(f->parametro);
            asignar_variable(f->parametro, evaluar(expr->izq));
            ResultadoRetorno r = ejecutar_con_retorno(f->cuerpo);
            asignar_variable(f->parametro, temp);
            return r.valor;
        }
        case 4: { // Input
            int valor;
            char buffer[256];
            
            while (1) {
                printf("Ingrese un número o expresión matemática: ");
                fflush(stdout);
                
                if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
                    fprintf(stderr, "Error al leer entrada\n");
                    return 0;
                }
                
                // Remover el salto de línea
                int len = strlen(buffer);
                if (len > 0 && buffer[len-1] == '\n') {
                    buffer[len-1] = '\0';
                    len--;
                }
                
                if (len == 0) {
                    printf("Error: Debe ingresar una expresión válida.\n");
                    continue;
                }
                
                // Verificar si es solo un número
                char *ptr = buffer;
                int es_numero_simple = 1;
                
                // Saltar espacios al inicio
                while (*ptr == ' ' || *ptr == '\t') ptr++;
                
                // Verificar signo negativo opcional
                if (*ptr == '-' || *ptr == '+') ptr++;
                
                // Verificar que todos los caracteres restantes sean dígitos
                while (*ptr != '\0') {
                    if (*ptr == ' ' || *ptr == '\t') {
                        ptr++;
                        continue;
                    }
                    if (*ptr < '0' || *ptr > '9') {
                        es_numero_simple = 0;
                        break;
                    }
                    ptr++;
                }
                
                if (es_numero_simple) {
                    valor = atoi(buffer);
                    break;
                } else {
                    if (validar_expresion(buffer)) {
                        valor = evaluar_expresion_string(buffer);
                        printf("Resultado: %d\n", valor);
                        break;
                    } else {
                        printf("Error: Expresión inválida. Use números y operadores +, -, *, /\n");
                        printf("Ejemplos válidos: 5, 10+3, 20-5*2, 15/3\n");
                    }
                }
            }
            return valor;
        }
        case 5: // String - para compatibilidad, devuelve 0
            return 0;
    }
    return 0;
}

void ejecutar(Instruccion* instr) {
    while (instr) {
        if (instr->tipo == 0) {
            if (strcmp(instr->id, "_print") == 0) {
                // Verificar si la expresión es un string
                if (instr->expr->tipo == 5) {
                    // Imprimir string sin comillas
                    char* str = instr->expr->cadena;
                    // Remover comillas si existen
                    if (str[0] == '"' && str[strlen(str)-1] == '"') {
                        str[strlen(str)-1] = '\0';
                        printf("%s\n", str + 1);
                        str[strlen(str)] = '"'; // Restaurar comilla final
                    } else {
                        printf("%s\n", str);
                    }
                } else {
                    printf("%d\n", evaluar(instr->expr));
                }
            } else {
                int val = evaluar(instr->expr);
                asignar_variable(instr->id, val);
            }
        } else if (instr->tipo == 1) {
            while (evaluar(instr->cond)) {
                ejecutar(instr->cuerpo);
            }
        } else if (instr->tipo == 3) { // IF
            if (evaluar(instr->cond)) {
                ejecutar(instr->cuerpo);
            } else if (instr->cuerpo_else) {
                ejecutar(instr->cuerpo_else);
            }
        }
        instr = instr->sig;
    }
}

void yyerror(const char* s) {
    fprintf(stderr, "Error: %s\n", s);
}

int main() {
    yyparse();
    return 0;
}
