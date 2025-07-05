%{
#include <stdio.h>
#include <stdlib.h>

void yyerror(const char *s);
int yylex();
%}

%union {
    float fval;
    char* sval;
}

%token <sval> IDENTIFIER USER_TYPE METHOD CONTAINER
%token <sval> STRING
%token <fval> NUMBER
%token <sval> CHAR

%token INT FLOAT MAIN RETURN USING NAMESPACE STD
%token IF ELSE FOR WHILE DO
%token BOOL TRUE FALSE
%token CLASS LIBRARY PREPROCESSOR

%token EQ NE LE GE LT GT
%token AND OR NOT
%token INCREMENT DECREMENT
%token PLUS_ASSIGN MINUS_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN
%token LSHIFT RSHIFT
%token SCOPE
%token UNKNOWN

%left '+' '-' '*' '/' '%'
%nonassoc LT GT LE GE EQ NE

%start program

%%

program:
      program_part_list
    ;

program_part_list:
      program_part_list program_part
    | program_part
    ;

program_part:
      declaration
    | function_definition
    | class_definition
    | include_directive
    | using_namespace
    ;

include_directive:
      PREPROCESSOR LIBRARY      { printf("Parsed include directive\n"); }
    ;

using_namespace:
      USING NAMESPACE STD SCOPE IDENTIFIER ';' { printf("Parsed using namespace\n"); }
    ;

declaration:
      type IDENTIFIER ';'       { printf("Parsed variable declaration\n"); }
    | type IDENTIFIER '=' expression ';' { printf("Parsed variable initialization\n"); }
    ;

type:
      INT | FLOAT | BOOL | USER_TYPE
    ;

function_definition:
      type IDENTIFIER '(' parameter_list_opt ')' compound_statement {
          printf("Parsed function definition\n");
      }
    ;

parameter_list_opt:
      /* empty */
    | parameter_list
    ;

parameter_list:
      parameter
    | parameter_list ',' parameter
    ;

parameter:
      type IDENTIFIER
    ;

class_definition:
      CLASS IDENTIFIER '{' class_body '}' ';' {
          printf("Parsed class definition\n");
      }
    ;

class_body:
      /* empty */
    | class_body class_member
    ;

class_member:
      declaration
    | function_definition
    ;

compound_statement:
      '{' statement_list_opt '}'
    ;

statement_list_opt:
      /* empty */
    | statement_list
    ;

statement_list:
      statement
    | statement_list statement
    ;

statement:
      declaration
    | assignment_statement
    | expression_statement
    | compound_statement
    | if_statement
    | while_loop
    | for_loop
    | return_statement
    ;

assignment_statement:
      IDENTIFIER '=' expression ';' { printf("Parsed assignment\n"); }
    ;

expression_statement:
      expression ';' { printf("Parsed expression statement\n"); }
    ;

return_statement:
      RETURN expression ';' { printf("Parsed return statement\n"); }
    ;

if_statement:
      IF '(' expression ')' compound_statement %prec IF { printf("Parsed if statement\n"); }
    | IF '(' expression ')' compound_statement ELSE compound_statement { printf("Parsed if-else statement\n"); }
    ;

while_loop:
      WHILE '(' expression ')' compound_statement { printf("Parsed while loop\n"); }
    ;

for_loop:
      FOR '(' assignment_statement expression ';' expression ')' compound_statement {
          printf("Parsed for loop\n");
      }
    ;

expression:
      expression '+' expression
    | expression '-' expression
    | expression '*' expression
    | expression '/' expression
    | expression '%' expression
    | expression EQ expression
    | expression NE expression
    | expression LT expression
    | expression GT expression
    | expression LE expression
    | expression GE expression
    | expression AND expression
    | expression OR expression
    | NOT expression
    | '(' expression ')'
    | IDENTIFIER
    | NUMBER
    | STRING
    | CHAR
    | method_call
    ;

method_call:
      IDENTIFIER '.' METHOD '(' ')' {
          printf("Parsed method call\n");
      }
    ;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Syntax error: %s\n", s);
}
