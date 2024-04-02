/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SYNTAX_TAB_H_INCLUDED
# define YY_YY_SYNTAX_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    T_EOF = 0,                     /* T_EOF  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    T_FUNCTION = 258,              /* T_FUNCTION  */
    T_SUBROUTINE = 259,            /* T_SUBROUTINE  */
    T_END = 260,                   /* T_END  */
    T_INTEGER = 261,               /* T_INTEGER  */
    T_REAL = 262,                  /* T_REAL  */
    T_LOGICAL = 263,               /* T_LOGICAL  */
    T_CHARACTER = 264,             /* T_CHARACTER  */
    T_COMPLEX = 265,               /* T_COMPLEX  */
    T_RECORD = 266,                /* T_RECORD  */
    T_ENDREC = 267,                /* T_ENDREC  */
    T_LIST = 268,                  /* T_LIST  */
    T_DATA = 269,                  /* T_DATA  */
    T_CONTINUE = 270,              /* T_CONTINUE  */
    T_GOTO = 271,                  /* T_GOTO  */
    T_CALL = 272,                  /* T_CALL  */
    T_READ = 273,                  /* T_READ  */
    T_WRITE = 274,                 /* T_WRITE  */
    T_NEW = 275,                   /* T_NEW  */
    T_LENGTH = 276,                /* T_LENGTH  */
    T_IF = 277,                    /* T_IF  */
    T_THEN = 278,                  /* T_THEN  */
    T_ELSE = 279,                  /* T_ELSE  */
    T_ENDIF = 280,                 /* T_ENDIF  */
    T_DO = 281,                    /* T_DO  */
    T_ENDDO = 282,                 /* T_ENDDO  */
    T_STOP = 283,                  /* T_STOP  */
    T_RETURN = 284,                /* T_RETURN  */
    T_OROP = 285,                  /* T_OROP  */
    T_ANDOP = 286,                 /* T_ANDOP  */
    T_NOTOP = 287,                 /* T_NOTOP  */
    T_RELOP = 288,                 /* T_RELOP  */
    T_ADDOP = 289,                 /* T_ADDOP  */
    T_MULOP = 290,                 /* T_MULOP  */
    T_DIVOP = 291,                 /* T_DIVOP  */
    T_POWEROP = 292,               /* T_POWEROP  */
    T_LPAREN = 293,                /* T_LPAREN  */
    T_RPAREN = 294,                /* T_RPAREN  */
    T_COMMA = 295,                 /* T_COMMA  */
    T_ASSIGN = 296,                /* T_ASSIGN  */
    T_DOT = 297,                   /* T_DOT  */
    T_COLON = 298,                 /* T_COLON  */
    T_LBRACK = 299,                /* T_LBRACK  */
    T_RBRACK = 300,                /* T_RBRACK  */
    T_ID = 301,                    /* T_ID  */
    T_ICONST = 302,                /* T_ICONST  */
    T_LCONST = 303,                /* T_LCONST  */
    T_RCONST = 304,                /* T_RCONST  */
    T_STRING = 305,                /* T_STRING  */
    T_CCONST = 306,                /* T_CCONST  */
    T_LISTFUNC = 307,              /* T_LISTFUNC  */
    T_COMM = 308                   /* T_COMM  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 24 "syntax.y"

    char *id;
    int iconst;
    float rconst;
    char cconst;
    char *string;
    int lconst;
    int listfunc;

#line 127 "syntax.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SYNTAX_TAB_H_INCLUDED  */
