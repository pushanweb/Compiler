
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
#line 28 "parser.y"

        int number;
        char *string;
        float fnumber;



/* Line 1676 of yacc.c  */
#line 110 "parser.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


