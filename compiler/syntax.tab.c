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
#line 1 "syntax.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "extra/hashtbl.h"

#define MAX_PARSER_ERRORS   5

HASHTBL *symbol_table;
int scope = 0;

extern FILE *yyin;
extern int yylineno;
extern int yylex();
extern int yyval();

int error_counter;
void yyerror(const char *err);


#line 92 "syntax.tab.c"

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

#include "syntax.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* T_EOF  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_FUNCTION = 3,                 /* T_FUNCTION  */
  YYSYMBOL_T_SUBROUTINE = 4,               /* T_SUBROUTINE  */
  YYSYMBOL_T_END = 5,                      /* T_END  */
  YYSYMBOL_T_INTEGER = 6,                  /* T_INTEGER  */
  YYSYMBOL_T_REAL = 7,                     /* T_REAL  */
  YYSYMBOL_T_LOGICAL = 8,                  /* T_LOGICAL  */
  YYSYMBOL_T_CHARACTER = 9,                /* T_CHARACTER  */
  YYSYMBOL_T_COMPLEX = 10,                 /* T_COMPLEX  */
  YYSYMBOL_T_RECORD = 11,                  /* T_RECORD  */
  YYSYMBOL_T_ENDREC = 12,                  /* T_ENDREC  */
  YYSYMBOL_T_LIST = 13,                    /* T_LIST  */
  YYSYMBOL_T_DATA = 14,                    /* T_DATA  */
  YYSYMBOL_T_CONTINUE = 15,                /* T_CONTINUE  */
  YYSYMBOL_T_GOTO = 16,                    /* T_GOTO  */
  YYSYMBOL_T_CALL = 17,                    /* T_CALL  */
  YYSYMBOL_T_READ = 18,                    /* T_READ  */
  YYSYMBOL_T_WRITE = 19,                   /* T_WRITE  */
  YYSYMBOL_T_NEW = 20,                     /* T_NEW  */
  YYSYMBOL_T_LENGTH = 21,                  /* T_LENGTH  */
  YYSYMBOL_T_IF = 22,                      /* T_IF  */
  YYSYMBOL_T_THEN = 23,                    /* T_THEN  */
  YYSYMBOL_T_ELSE = 24,                    /* T_ELSE  */
  YYSYMBOL_T_ENDIF = 25,                   /* T_ENDIF  */
  YYSYMBOL_T_DO = 26,                      /* T_DO  */
  YYSYMBOL_T_ENDDO = 27,                   /* T_ENDDO  */
  YYSYMBOL_T_STOP = 28,                    /* T_STOP  */
  YYSYMBOL_T_RETURN = 29,                  /* T_RETURN  */
  YYSYMBOL_T_OROP = 30,                    /* T_OROP  */
  YYSYMBOL_T_ANDOP = 31,                   /* T_ANDOP  */
  YYSYMBOL_T_NOTOP = 32,                   /* T_NOTOP  */
  YYSYMBOL_T_RELOP = 33,                   /* T_RELOP  */
  YYSYMBOL_T_ADDOP = 34,                   /* T_ADDOP  */
  YYSYMBOL_T_MULOP = 35,                   /* T_MULOP  */
  YYSYMBOL_T_DIVOP = 36,                   /* T_DIVOP  */
  YYSYMBOL_T_POWEROP = 37,                 /* T_POWEROP  */
  YYSYMBOL_T_LPAREN = 38,                  /* T_LPAREN  */
  YYSYMBOL_T_RPAREN = 39,                  /* T_RPAREN  */
  YYSYMBOL_T_COMMA = 40,                   /* T_COMMA  */
  YYSYMBOL_T_ASSIGN = 41,                  /* T_ASSIGN  */
  YYSYMBOL_T_DOT = 42,                     /* T_DOT  */
  YYSYMBOL_T_COLON = 43,                   /* T_COLON  */
  YYSYMBOL_T_LBRACK = 44,                  /* T_LBRACK  */
  YYSYMBOL_T_RBRACK = 45,                  /* T_RBRACK  */
  YYSYMBOL_T_ID = 46,                      /* T_ID  */
  YYSYMBOL_T_ICONST = 47,                  /* T_ICONST  */
  YYSYMBOL_T_LCONST = 48,                  /* T_LCONST  */
  YYSYMBOL_T_RCONST = 49,                  /* T_RCONST  */
  YYSYMBOL_T_STRING = 50,                  /* T_STRING  */
  YYSYMBOL_T_CCONST = 51,                  /* T_CCONST  */
  YYSYMBOL_T_LISTFUNC = 52,                /* T_LISTFUNC  */
  YYSYMBOL_T_COMM = 53,                    /* T_COMM  */
  YYSYMBOL_YYACCEPT = 54,                  /* $accept  */
  YYSYMBOL_program = 55,                   /* program  */
  YYSYMBOL_body = 56,                      /* body  */
  YYSYMBOL_declarations = 57,              /* declarations  */
  YYSYMBOL_type = 58,                      /* type  */
  YYSYMBOL_vars = 59,                      /* vars  */
  YYSYMBOL_undef_variable = 60,            /* undef_variable  */
  YYSYMBOL_dims = 61,                      /* dims  */
  YYSYMBOL_dim = 62,                       /* dim  */
  YYSYMBOL_fields = 63,                    /* fields  */
  YYSYMBOL_field = 64,                     /* field  */
  YYSYMBOL_vals = 65,                      /* vals  */
  YYSYMBOL_value_list = 66,                /* value_list  */
  YYSYMBOL_values = 67,                    /* values  */
  YYSYMBOL_value = 68,                     /* value  */
  YYSYMBOL_sign = 69,                      /* sign  */
  YYSYMBOL_constant = 70,                  /* constant  */
  YYSYMBOL_simple_constant = 71,           /* simple_constant  */
  YYSYMBOL_complex_constant = 72,          /* complex_constant  */
  YYSYMBOL_statements = 73,                /* statements  */
  YYSYMBOL_labeled_statement = 74,         /* labeled_statement  */
  YYSYMBOL_label = 75,                     /* label  */
  YYSYMBOL_statement = 76,                 /* statement  */
  YYSYMBOL_simple_statement = 77,          /* simple_statement  */
  YYSYMBOL_assignment = 78,                /* assignment  */
  YYSYMBOL_variable = 79,                  /* variable  */
  YYSYMBOL_expressions = 80,               /* expressions  */
  YYSYMBOL_expression = 81,                /* expression  */
  YYSYMBOL_listexpression = 82,            /* listexpression  */
  YYSYMBOL_goto_statement = 83,            /* goto_statement  */
  YYSYMBOL_labels = 84,                    /* labels  */
  YYSYMBOL_if_statement = 85,              /* if_statement  */
  YYSYMBOL_subroutine_call = 86,           /* subroutine_call  */
  YYSYMBOL_io_statement = 87,              /* io_statement  */
  YYSYMBOL_read_list = 88,                 /* read_list  */
  YYSYMBOL_read_item = 89,                 /* read_item  */
  YYSYMBOL_iter_space = 90,                /* iter_space  */
  YYSYMBOL_step = 91,                      /* step  */
  YYSYMBOL_write_list = 92,                /* write_list  */
  YYSYMBOL_write_item = 93,                /* write_item  */
  YYSYMBOL_compound_statement = 94,        /* compound_statement  */
  YYSYMBOL_branch_statement = 95,          /* branch_statement  */
  YYSYMBOL_tail = 96,                      /* tail  */
  YYSYMBOL_loop_statement = 97,            /* loop_statement  */
  YYSYMBOL_subprograms = 98,               /* subprograms  */
  YYSYMBOL_subprogram = 99,                /* subprogram  */
  YYSYMBOL_header = 100,                   /* header  */
  YYSYMBOL_formal_parameters = 101         /* formal_parameters  */
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
typedef yytype_uint8 yy_state_t;

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

#if 1

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
#endif /* 1 */

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   471

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  118
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  242

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   308


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
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   111,   111,   113,   115,   116,   117,   118,   120,   120,
     120,   120,   120,   122,   123,   125,   126,   127,   129,   130,
     132,   132,   134,   135,   137,   138,   140,   141,   143,   145,
     146,   148,   149,   151,   151,   153,   154,   156,   156,   156,
     156,   158,   160,   161,   163,   164,   166,   168,   169,   171,
     172,   173,   174,   175,   176,   177,   178,   180,   181,   183,
     184,   185,   186,   188,   189,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   208,   209,   211,   212,   214,   215,   217,   218,   220,
     222,   223,   225,   226,   228,   229,   231,   233,   234,   236,
     237,   239,   240,   241,   243,   244,   246,   248,   249,   251,
     253,   254,   256,   258,   259,   260,   261,   263,   264
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "T_EOF", "error", "\"invalid token\"", "T_FUNCTION", "T_SUBROUTINE",
  "T_END", "T_INTEGER", "T_REAL", "T_LOGICAL", "T_CHARACTER", "T_COMPLEX",
  "T_RECORD", "T_ENDREC", "T_LIST", "T_DATA", "T_CONTINUE", "T_GOTO",
  "T_CALL", "T_READ", "T_WRITE", "T_NEW", "T_LENGTH", "T_IF", "T_THEN",
  "T_ELSE", "T_ENDIF", "T_DO", "T_ENDDO", "T_STOP", "T_RETURN", "T_OROP",
  "T_ANDOP", "T_NOTOP", "T_RELOP", "T_ADDOP", "T_MULOP", "T_DIVOP",
  "T_POWEROP", "T_LPAREN", "T_RPAREN", "T_COMMA", "T_ASSIGN", "T_DOT",
  "T_COLON", "T_LBRACK", "T_RBRACK", "T_ID", "T_ICONST", "T_LCONST",
  "T_RCONST", "T_STRING", "T_CCONST", "T_LISTFUNC", "T_COMM", "$accept",
  "program", "body", "declarations", "type", "vars", "undef_variable",
  "dims", "dim", "fields", "field", "vals", "value_list", "values",
  "value", "sign", "constant", "simple_constant", "complex_constant",
  "statements", "labeled_statement", "label", "statement",
  "simple_statement", "assignment", "variable", "expressions",
  "expression", "listexpression", "goto_statement", "labels",
  "if_statement", "subroutine_call", "io_statement", "read_list",
  "read_item", "iter_space", "step", "write_list", "write_item",
  "compound_statement", "branch_statement", "tail", "loop_statement",
  "subprograms", "subprogram", "header", "formal_parameters", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-184)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -184,    43,    41,   104,  -184,  -184,  -184,  -184,  -184,  -184,
    -184,   152,    21,  -184,     9,    11,    -7,   263,    46,    33,
    -184,  -184,  -184,  -184,    55,     3,   153,  -184,   229,  -184,
    -184,  -184,    87,  -184,  -184,  -184,  -184,  -184,  -184,  -184,
     131,   152,     3,   452,  -184,    68,    67,    84,  -184,   105,
      -7,   105,    91,  -184,    96,   110,   347,   347,   263,   284,
    -184,  -184,  -184,  -184,  -184,  -184,   105,   198,  -184,   113,
    -184,   347,   132,   347,     3,   136,   137,  -184,  -184,  -184,
     347,   305,   130,   134,   175,   180,  -184,  -184,   459,   137,
       3,  -184,   -13,  -184,   138,   147,   148,    -7,   347,   347,
     347,  -184,  -184,    52,   149,  -184,    13,   198,   347,   347,
     347,   347,   347,   347,   347,   263,   353,   347,   378,  -184,
      18,     3,   -29,  -184,   198,  -184,   154,   141,   144,   188,
       3,   137,  -184,  -184,   109,  -184,    54,    68,   151,    16,
    -184,   388,   398,    52,  -184,   347,   326,   347,  -184,    63,
      63,   167,  -184,  -184,  -184,  -184,  -184,   191,   234,  -184,
    -184,  -184,  -184,    -4,  -184,  -184,  -184,   270,   156,   173,
    -184,   137,  -184,   -13,   163,  -184,  -184,  -184,  -184,  -184,
      37,   174,  -184,  -184,   408,   176,   198,   178,  -184,   181,
    -184,   347,   196,  -184,    18,     3,   179,   270,   270,  -184,
     183,  -184,   151,   347,  -184,   347,   347,    92,   151,   370,
    -184,  -184,   187,  -184,   197,   200,   206,  -184,   202,   203,
     418,  -184,  -184,  -184,   209,   347,  -184,    20,  -184,  -184,
     201,  -184,  -184,   244,   227,   151,   198,  -184,   214,  -184,
    -184,  -184
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       7,     0,     0,     0,     1,   111,     8,     9,    10,    11,
      12,     0,     0,    54,     0,     0,     0,     0,     0,     0,
      56,    55,    62,    46,     0,     0,     3,    43,     0,    45,
      47,    49,     0,    50,    51,    52,    53,    48,   104,   105,
       2,     0,     0,     0,    23,     0,     6,     0,    83,    89,
       0,    94,    90,    93,     0,     0,     0,     0,     0,     0,
      37,    39,    38,   103,    40,    75,    74,   101,    80,    91,
     100,     0,     0,     0,     0,    17,     4,    14,    42,    44,
       0,     0,     0,     0,     0,     0,   110,     7,     0,    24,
       0,    22,    34,    27,     0,     0,     0,     0,     0,     0,
       0,    72,    73,   101,     0,    82,     0,    64,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    15,
       0,     0,     0,    58,    57,    59,   116,     0,     0,     0,
       0,     5,    33,    32,     0,    30,     0,     0,     0,     0,
      92,     0,     0,     0,    78,     0,     0,     0,    81,    65,
      66,    67,    68,    69,    70,    71,    99,     0,     0,     7,
      61,    21,    20,     0,    19,    13,    60,     0,     0,     0,
     112,    25,    28,    34,     0,    31,    35,    36,    26,    86,
       0,    62,    77,    76,     0,    62,    63,     0,     7,     0,
      88,     0,     0,    16,     0,     0,     0,     0,     0,    29,
       0,    84,     0,     0,    79,     0,     0,     0,     0,    98,
     109,    18,   118,   115,     0,     0,    34,    85,     0,     0,
       0,     7,   108,   106,     0,     0,    96,     0,   114,   113,
       0,    95,   102,     0,     0,     0,    97,   117,     0,   107,
      87,    41
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -184,  -184,   -79,  -184,    -2,   -40,   -70,  -184,    60,   215,
     -36,  -184,   145,  -184,   112,    70,  -184,   157,  -184,  -184,
     261,   -11,   260,  -152,  -184,    -3,   212,   -39,  -184,  -184,
    -184,  -184,  -184,  -184,   239,   -91,  -181,  -184,   236,  -106,
    -184,  -184,  -184,  -184,  -184,  -184,  -184,  -183
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,     3,    42,    76,    77,   163,   164,    43,
      44,    46,    93,   134,   135,   136,   175,    65,   177,    26,
      27,    28,    29,    30,    31,    66,   106,    67,    68,    33,
     180,    34,    35,    36,    52,    53,   159,   226,    69,    70,
      37,    38,   223,    39,    40,    86,    87,   196
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      32,    25,    89,    48,   119,   190,   140,    91,   129,   156,
     166,   147,    49,    51,   214,   215,    74,   101,   102,   103,
     107,   132,   218,    32,   219,    32,     6,     7,     8,     9,
      10,    50,   116,    74,   118,   193,   194,   133,    85,    22,
     156,   107,   124,     4,   237,    24,     5,    51,   140,    75,
     131,   165,    91,   147,    50,    47,    23,    22,   148,   141,
     142,   143,   181,    24,   161,   162,    75,    45,    24,   149,
     150,   151,   152,   153,   154,   155,   201,   202,   158,    72,
     192,   190,   108,   109,    71,   110,   111,   112,   113,   114,
     171,   144,   174,    73,    51,   145,   110,   111,   112,   113,
     114,    60,    61,    62,    92,    64,   184,    94,   186,   207,
       6,     7,     8,     9,    10,    11,   221,   222,    12,    13,
      14,    15,    16,    17,    95,    80,    18,   179,    81,    82,
      19,    97,    20,    21,    98,    83,    51,     6,     7,     8,
       9,    10,   234,    80,    84,   172,   189,    82,    99,   173,
      22,    23,   209,   115,    32,   212,    24,   165,     6,     7,
       8,     9,    10,    41,   158,   195,   158,   220,    13,    14,
      15,    16,    17,   117,   120,    18,   125,   121,   127,    19,
     126,    20,    21,   128,   137,   138,   236,   168,   139,   146,
     169,   217,   167,   170,   197,   195,   195,   224,    23,    22,
      23,   111,   112,   113,   114,    24,    13,    14,    15,    16,
      17,   198,   200,   187,   188,   203,   206,   205,   213,    20,
      21,   208,   189,   210,   240,   195,   216,   227,   108,   109,
      32,   110,   111,   112,   113,   114,   228,    22,    23,   229,
     132,   231,   232,    24,    13,    14,    15,    16,    17,   235,
     238,    18,   239,   241,   211,    19,    88,    20,    21,    13,
      14,    15,    16,    17,   108,   109,   187,   110,   111,   112,
     113,   114,    20,    21,   191,    22,     6,     7,     8,     9,
      10,    24,   178,    54,    55,   199,   230,    78,    79,    96,
      22,    23,   122,   176,   104,    56,    24,    57,     0,     0,
       0,    58,     0,     0,    54,    55,     0,    59,     0,    22,
      60,    61,    62,    63,    64,    24,    56,     0,    57,     0,
       0,     0,   100,     0,     0,    54,    55,     0,    59,   105,
      22,    60,    61,    62,     0,    64,    24,    56,     0,    57,
       0,     0,     0,   100,     0,     0,    54,    55,     0,    59,
       0,    22,    60,    61,    62,   123,    64,    24,    56,     0,
      57,     0,     0,     0,    58,     0,     0,    54,    55,     0,
      59,     0,   185,    60,    61,    62,    63,    64,    24,    56,
       0,    57,     0,   108,   109,   100,   110,   111,   112,   113,
     114,    59,   157,    22,    60,    61,    62,     0,    64,    24,
     108,   109,     0,   110,   111,   112,   113,   114,   108,   109,
     225,   110,   111,   112,   113,   114,     0,   160,   108,   109,
       0,   110,   111,   112,   113,   114,     0,   182,   108,   109,
       0,   110,   111,   112,   113,   114,     0,   183,   108,   109,
       0,   110,   111,   112,   113,   114,     0,   204,   108,   109,
       0,   110,   111,   112,   113,   114,     0,   233,     6,     7,
       8,     9,    10,    41,    90,     6,     7,     8,     9,    10,
      41,   130
};

static const yytype_int16 yycheck[] =
{
       3,     3,    42,    14,    74,   157,    97,    43,    87,   115,
      39,    40,    15,    16,   197,   198,    13,    56,    57,    58,
      59,    34,   203,    26,   205,    28,     6,     7,     8,     9,
      10,    38,    71,    13,    73,    39,    40,    50,    40,    46,
     146,    80,    81,     0,   227,    52,     5,    50,   139,    46,
      90,   121,    88,    40,    38,    46,    47,    46,    45,    98,
      99,   100,    46,    52,    46,    47,    46,    46,    52,   108,
     109,   110,   111,   112,   113,   114,    39,    40,   117,    46,
     159,   233,    30,    31,    38,    33,    34,    35,    36,    37,
     130,    39,    38,    38,    97,    43,    33,    34,    35,    36,
      37,    47,    48,    49,    36,    51,   145,    40,   147,   188,
       6,     7,     8,     9,    10,    11,    24,    25,    14,    15,
      16,    17,    18,    19,    40,    38,    22,   138,    41,    42,
      26,    40,    28,    29,    38,     4,   139,     6,     7,     8,
       9,    10,   221,    38,    13,    36,   157,    42,    38,    40,
      46,    47,   191,    40,   157,   195,    52,   227,     6,     7,
       8,     9,    10,    11,   203,   167,   205,   206,    15,    16,
      17,    18,    19,    41,    38,    22,    46,    40,     3,    26,
      46,    28,    29,     3,    46,    38,   225,    46,    40,    40,
      46,   202,    38,     5,    38,   197,   198,   208,    47,    46,
      47,    34,    35,    36,    37,    52,    15,    16,    17,    18,
      19,    38,    49,    22,    23,    41,    38,    41,    39,    28,
      29,    40,   233,    27,   235,   227,    43,    40,    30,    31,
     233,    33,    34,    35,    36,    37,    39,    46,    47,    39,
      34,    39,    39,    52,    15,    16,    17,    18,    19,    40,
      49,    22,    25,    39,   194,    26,    41,    28,    29,    15,
      16,    17,    18,    19,    30,    31,    22,    33,    34,    35,
      36,    37,    28,    29,    40,    46,     6,     7,     8,     9,
      10,    52,   137,    20,    21,   173,   216,    26,    28,    50,
      46,    47,    80,   136,    58,    32,    52,    34,    -1,    -1,
      -1,    38,    -1,    -1,    20,    21,    -1,    44,    -1,    46,
      47,    48,    49,    50,    51,    52,    32,    -1,    34,    -1,
      -1,    -1,    38,    -1,    -1,    20,    21,    -1,    44,    45,
      46,    47,    48,    49,    -1,    51,    52,    32,    -1,    34,
      -1,    -1,    -1,    38,    -1,    -1,    20,    21,    -1,    44,
      -1,    46,    47,    48,    49,    50,    51,    52,    32,    -1,
      34,    -1,    -1,    -1,    38,    -1,    -1,    20,    21,    -1,
      44,    -1,    46,    47,    48,    49,    50,    51,    52,    32,
      -1,    34,    -1,    30,    31,    38,    33,    34,    35,    36,
      37,    44,    39,    46,    47,    48,    49,    -1,    51,    52,
      30,    31,    -1,    33,    34,    35,    36,    37,    30,    31,
      40,    33,    34,    35,    36,    37,    -1,    39,    30,    31,
      -1,    33,    34,    35,    36,    37,    -1,    39,    30,    31,
      -1,    33,    34,    35,    36,    37,    -1,    39,    30,    31,
      -1,    33,    34,    35,    36,    37,    -1,    39,    30,    31,
      -1,    33,    34,    35,    36,    37,    -1,    39,     6,     7,
       8,     9,    10,    11,    12,     6,     7,     8,     9,    10,
      11,    12
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    55,    56,    57,     0,     5,     6,     7,     8,     9,
      10,    11,    14,    15,    16,    17,    18,    19,    22,    26,
      28,    29,    46,    47,    52,    58,    73,    74,    75,    76,
      77,    78,    79,    83,    85,    86,    87,    94,    95,    97,
      98,    11,    58,    63,    64,    46,    65,    46,    75,    79,
      38,    79,    88,    89,    20,    21,    32,    34,    38,    44,
      47,    48,    49,    50,    51,    71,    79,    81,    82,    92,
      93,    38,    46,    38,    13,    46,    59,    60,    74,    76,
      38,    41,    42,     4,    13,    58,    99,   100,    63,    59,
      12,    64,    36,    66,    40,    40,    88,    40,    38,    38,
      38,    81,    81,    81,    92,    45,    80,    81,    30,    31,
      33,    34,    35,    36,    37,    40,    81,    41,    81,    60,
      38,    40,    80,    50,    81,    46,    46,     3,     3,    56,
      12,    59,    34,    50,    67,    68,    69,    46,    38,    40,
      89,    81,    81,    81,    39,    43,    40,    40,    45,    81,
      81,    81,    81,    81,    81,    81,    93,    39,    81,    90,
      39,    46,    47,    61,    62,    60,    39,    38,    46,    46,
       5,    59,    36,    40,    38,    70,    71,    72,    66,    75,
      84,    46,    39,    39,    81,    46,    81,    22,    23,    75,
      77,    40,    56,    39,    40,    58,   101,    38,    38,    68,
      49,    39,    40,    41,    39,    41,    38,    56,    40,    81,
      27,    62,    59,    39,   101,   101,    43,    75,    90,    90,
      81,    24,    25,    96,    75,    40,    91,    40,    39,    39,
      69,    39,    39,    39,    56,    40,    81,   101,    49,    25,
      75,    39
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    55,    56,    57,    57,    57,    57,    58,    58,
      58,    58,    58,    59,    59,    60,    60,    60,    61,    61,
      62,    62,    63,    63,    64,    64,    65,    65,    66,    67,
      67,    68,    68,    69,    69,    70,    70,    71,    71,    71,
      71,    72,    73,    73,    74,    74,    75,    76,    76,    77,
      77,    77,    77,    77,    77,    77,    77,    78,    78,    79,
      79,    79,    79,    80,    80,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    82,    82,    83,    83,    84,    84,    85,    85,    86,
      87,    87,    88,    88,    89,    89,    90,    91,    91,    92,
      92,    93,    93,    93,    94,    94,    95,    96,    96,    97,
      98,    98,    99,   100,   100,   100,   100,   101,   101
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     2,     3,     5,     3,     0,     1,     1,
       1,     1,     1,     3,     1,     2,     4,     1,     3,     1,
       1,     1,     2,     1,     2,     4,     4,     2,     3,     3,
       1,     2,     1,     1,     0,     1,     1,     1,     1,     1,
       1,     6,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       4,     4,     1,     3,     1,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     1,     1,     4,     4,     3,     5,
       1,     3,     2,     2,     6,     3,     1,     9,     5,     2,
       2,     2,     3,     1,     1,     7,     4,     2,     0,     3,
       1,     1,     7,     1,     1,     1,     7,     3,     1,     6,
       2,     0,     3,     6,     6,     5,     2,     4,     2
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
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
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
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
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
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

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

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

  if (yychar <= T_EOF)
    {
      yychar = T_EOF;
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

#line 1663 "syntax.tab.c"

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
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= T_EOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == T_EOF)
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
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 266 "syntax.y"



int main(int argc, char *argv[]){
	int token;        
	if(argc > 1){       
		yyin = fopen(argv[1], "r");
		if (yyin == NULL){
			perror ("Error opening file"); 
			return -1;
		}
	 }        

    symbol_table = hashtbl_create(100, NULL);

    yyparse();

    hashtbl_get(symbol_table, scope);
    hashtbl_destroy(symbol_table);
 
	return 0;
}

void yyerror(const char *err){

    error_counter++;

    printf("\n[LINE %d] %s", yylineno, err);

    if (error_counter == MAX_PARSER_ERRORS) {   
        printf("\nMax parser error limit reached (%d)\n", MAX_PARSER_ERRORS);
        exit(EXIT_FAILURE);
    }
}
