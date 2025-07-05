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

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENTIFIER = 258,              /* IDENTIFIER  */
    USER_TYPE = 259,               /* USER_TYPE  */
    METHOD = 260,                  /* METHOD  */
    CONTAINER = 261,               /* CONTAINER  */
    STRING = 262,                  /* STRING  */
    NUMBER = 263,                  /* NUMBER  */
    CHAR = 264,                    /* CHAR  */
    INT = 265,                     /* INT  */
    FLOAT = 266,                   /* FLOAT  */
    MAIN = 267,                    /* MAIN  */
    RETURN = 268,                  /* RETURN  */
    USING = 269,                   /* USING  */
    NAMESPACE = 270,               /* NAMESPACE  */
    STD = 271,                     /* STD  */
    IF = 272,                      /* IF  */
    ELSE = 273,                    /* ELSE  */
    FOR = 274,                     /* FOR  */
    WHILE = 275,                   /* WHILE  */
    DO = 276,                      /* DO  */
    BOOL = 277,                    /* BOOL  */
    TRUE = 278,                    /* TRUE  */
    FALSE = 279,                   /* FALSE  */
    CLASS = 280,                   /* CLASS  */
    LIBRARY = 281,                 /* LIBRARY  */
    PREPROCESSOR = 282,            /* PREPROCESSOR  */
    EQ = 283,                      /* EQ  */
    NE = 284,                      /* NE  */
    LE = 285,                      /* LE  */
    GE = 286,                      /* GE  */
    LT = 287,                      /* LT  */
    GT = 288,                      /* GT  */
    AND = 289,                     /* AND  */
    OR = 290,                      /* OR  */
    NOT = 291,                     /* NOT  */
    INCREMENT = 292,               /* INCREMENT  */
    DECREMENT = 293,               /* DECREMENT  */
    PLUS_ASSIGN = 294,             /* PLUS_ASSIGN  */
    MINUS_ASSIGN = 295,            /* MINUS_ASSIGN  */
    MUL_ASSIGN = 296,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 297,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 298,              /* MOD_ASSIGN  */
    LSHIFT = 299,                  /* LSHIFT  */
    RSHIFT = 300,                  /* RSHIFT  */
    SCOPE = 301,                   /* SCOPE  */
    UNKNOWN = 302                  /* UNKNOWN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 9 "parser.y"

    float fval;
    char* sval;

#line 116 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
