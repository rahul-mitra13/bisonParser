/*
 * parser.y -- bison rules to generate parser for P-
 *
 * Rahul Mitra
 * Assignment 3
 * Department of Computer Science
 * Trinity College 
 * CPSC316, Assignment 3
 * Date: 12th October, 2019
 * Modification History: Version 4
 *
 */
 /*This parser handles the following errors :
  a) missing identifier
  b) missing end statement
  c) missing type
  d) missing return type
  e) unclosed paranthesis
  f) missing closing bracket
  g) missing equals
  h) missing semi colon 
  i) missing comma 
  j) missing colon
  */

%{
#include "msg.h"
%}

%start program

%union {
    int w;                 /* ICONST */
    double r;              /* FCONST */
    char *sb;              /* SCONST */
    struct he *phe;        /* IDENT  */

    /* more to be added during Phase 3 */
}

%token AMP ASGN BANG COLON COMMA DAMP DBAR DIV DOT EQ GE GT LBRACK LE 
%token LPAREN LT MINUS NE PLUS RBRACK RPAREN SEMI STAR ARRAY BEGINN BOOL  
%token ELSE ELIF END FALSE FOR FLOAT FUNCTION IF IN INT OF PROCEDURE PROGRAM
%token READ RECORD RETURN THEN TRUE WHILE WRITE
%token FCONST    
%token ICONST
%token IDENT
%token SCONST
%nonassoc ASGN
%nonassoc DBAR
%nonassoc DAMP
%nonassoc EQ GE GT LE LT NE
%left PLUS MINUS
%left STAR DIV
%right BANG

%%
/*Handles missing identifier*/
program        :  PROGRAM IDENT decl_part body

               |    PROGRAM error
                    {
                       yyerror(message[mnMissingIdent]);
                    }
                    
                    decl_part body
                    {
                       yyerrok;
                    }
               ;
/*Hadles missing end*/
body          : BEGINN statement_list END
              | BEGINN statement_list error
                 {
                   yyerror(message[mnMissingEnd]);
                 }
              ;
decl_part : 
          | decl_part variable_decl
          | decl_part procedure_decl
          | decl_part function_decl
          ;
          
/*Handles missing colon, missing type and missing equals*/       
variable_decl : ident_list COLON type
              | ident_list type
                {
                 yyerror(message[mnMissingColon]);
                }
              | IDENT ASGN type
              | ident_list COLON error
                {
                 yyerror(message[mnMissingType]);
                }
               | IDENT ASGN error
                {
                 yyerror(message[mnMissingType]);
                }
               | IDENT error 
                {
                 yyerror(message[mnMissingEquals]);
                }
                ASGN type
                {
                 yyerrok;
                }
              ;
/*Handles missing comma*/
ident_list : IDENT
           | IDENT error
            {
             yyerror(message[mnMissingComma]);
            }
           | ident_list COMMA IDENT
           ;
/*Handles unclosed paranthesis*/
procedure_decl : PROCEDURE IDENT LPAREN parameter_list RPAREN decl_part body
               | PROCEDURE IDENT LPAREN parameter_list error
                 {
                  yyerror(message[mnUnclosedParanthesis]);
                 }
                 decl_part body
                 {
                  yyerrok;
                 }
               | PROCEDURE IDENT LPAREN RPAREN decl_part body
               | PROCEDURE IDENT LPAREN error
                 {
                  yyerror(message[mnUnclosedParanthesis]);
                 }
                 decl_part body
                 {
                  yyerrok;
                 }
                | PROCEDURE error
                 {
                  yyerror(message[mnMissingIdent]);
                 }
               ;
/*Handles missing return type, unclosed paranthesis, missing colon, and missing identifier*/              
function_decl  : FUNCTION IDENT LPAREN parameter_list RPAREN COLON simple_type decl_part body
               | FUNCTION IDENT LPAREN parameter_list RPAREN COLON error
                 {
                  yyerror(message[mnMissingReturnType]);
                 }
                 decl_part body
                 {
                  yyerrok;
                 }
               | FUNCTION IDENT LPAREN parameter_list error
                 {
                  yyerror(message[mnUnclosedParanthesis]);
                 }
                 simple_type decl_part body
                 { 
                  yyerrok;
                 }
               | FUNCTION IDENT LPAREN parameter_list RPAREN error
                 {
                  yyerror(message[mnMissingColon]);
                 }
                 simple_type decl_part body
                 {
                  yyerrok;
                 }
               | FUNCTION IDENT LPAREN RPAREN COLON simple_type decl_part body
               | FUNCTION IDENT LPAREN RPAREN COLON error
                 {
                  yyerror(message[mnMissingReturnType]);
                 }
                 decl_part body
                 {
                  yyerrok;
                 }
                | FUNCTION IDENT LPAREN error
                {
                 yyerror(message[mnUnclosedParanthesis]);
                }
                simple_type decl_part body
                {
                 yyerrok;
                }
               | FUNCTION IDENT LPAREN RPAREN error
                {
                 yyerror(message[mnMissingColon]);
                }
                simple_type decl_part body
                {
                 yyerrok;
                }
               | FUNCTION error
                 {
                  yyerror(message[mnMissingIdent]);
                 }
               ;
               
parameter_list : ident_list_amp COLON parameter_type parameter_list_list
               ;
/*Handes missing semi colon between paramters*/
parameter_list_list : 
                    | SEMI parameter_list
                    | parameter_list
                      {
                       yyerror(message[mnMissingSemiColon]);
                      }
                    ;               

/*Handles missing commas between identifiers*/               
ident_list_amp : IDENT
               | IDENT error
                 {
                  yyerror(message[mnMissingComma]);
                 }
               | AMP IDENT
               | AMP IDENT error
                 {
                  yyerror(message[mnMissingComma]);
                 }
               | ident_list_amp COMMA IDENT
               | ident_list_amp COMMA AMP IDENT
               ;
parameter_type : simple_type
               | IDENT
               ;
/*Handles missing type and missing closing bracket*/               
type : simple_type
     | IDENT
     | ARRAY LBRACK index RBRACK OF type
     | ARRAY LBRACK index RBRACK OF error
      {
       yyerror(message[mnMissingType]);
      }
     | ARRAY LBRACK index error
       {
        yyerror(message[mnMissingClosingBracket]);
       }
       OF type
       {
        yyerrok;
       }
     | RECORD field_list END
     ;

simple_type : INT 
            | FLOAT
            | BOOL
            ;     
            
/*Handles missing colon*/     
index : ICONST COLON ICONST index_list
      | ICONST error
        {
         yyerror(message[mnMissingColon]);
        }
        ICONST index_list
        {
         yyerrok;
        }
      ;
/*Handles missing comma*/
index_list :
           | COMMA index
           | index
             {
              yyerror(message[mnMissingComma]);
             }
           ;  
/*Handles missing colon*/           
field_list : ident_list COLON type field_list_list
           | ident_list type field_list_list
            {
             yyerror(message[mnMissingColon]);
            }
           ;
field_list_list : 
                | field_list 
                ;
statement_list : 
                | statement_list assignment_statement
                | statement_list subroutine_call
                | statement_list return_statement
                | statement_list for_statement
                | statement_list while_statement
                | statement_list if_statement
                | statement_list read_statement
                | statement_list write_statement
                ;
/*Handles missing equals*/
assignment_statement : variable ASGN expression
                     | variable error
                       {
                        yyerror(message[mnMissingEquals]);
                       }
                       expression
                       {
                        yyerrok;
                       }
                     ;
/*Handles unclosed paranthesis*/                     
subroutine_call : IDENT LPAREN RPAREN
                | IDENT LPAREN error
                  {
                   yyerror(message[mnUnclosedParanthesis]);
                  }
                | IDENT LPAREN expression_list RPAREN
                | IDENT LPAREN expression_list error
                  {
                   yyerror(message[mnUnclosedParanthesis]);
                  }
                ;
expression_list : expression
                | expression_list COMMA expression
                ;
            
          
return_statement : RETURN expression
                 ;
/*Handles missing end, missing colon and missing ident*/                
for_statement : FOR IDENT IN expression COLON expression statement_list END
              | FOR IDENT IN expression COLON expression statement_list error 
                {
                  yyerror(message[mnMissingEnd]);                
                }
              | FOR IDENT IN expression error
               {
                yyerror(message[mnMissingColon]);
               }
               expression statement_list END
               {
                yyerrok;
               }
              | FOR error
               {
                yyerror(message[mnMissingIdent]);
               }
               IN expression COLON expression statement_list END
               {
                yyerrok;
               }
              ;
/*Handles missing end and unclosed paranthesis*/              
while_statement : WHILE LPAREN expression RPAREN statement_list END
                | WHILE LPAREN expression RPAREN statement_list error
                  {
                    yyerror(message[mnMissingEnd]);
                  }
                 | WHILE LPAREN expression error
                  {
                   yyerror(message[mnUnclosedParanthesis]);
                  }
                  statement_list END
                  {
                   yyerrok;
                  }
                ;
/*Handles unclosed paranthesis and missing end*/                
if_statement : IF LPAREN expression RPAREN THEN statement_list END
             | IF LPAREN expression error
               {
                yyerror(message[mnUnclosedParanthesis]);
               }
               THEN statement_list END
               {
                yyerrok;
               }
             | IF LPAREN expression RPAREN THEN statement_list error
               {
                yyerror(message[mnMissingEnd]);
               }
             | IF LPAREN expression RPAREN THEN statement_list elif_part END
             | IF LPAREN expression RPAREN THEN statement_list elif_part error
               {
                yyerror(message[mnMissingEnd]);
               }
               
             | IF LPAREN expression RPAREN THEN statement_list else_part END
             | IF LPAREN expression RPAREN THEN statement_list else_part error
               {
                yyerror(message[mnMissingEnd]);
               }
               
             | IF LPAREN expression RPAREN THEN statement_list elif_part else_part END
             | IF LPAREN expression RPAREN THEN statement_list elif_part else_part error
               {
                yyerror(message[mnMissingEnd]);
               }
             ;
             
else_part : ELSE statement_list
          ;
/*Handles unclosed paranthesis*/
elif_part : ELIF LPAREN expression RPAREN THEN statement_list elif_part_list
          | ELIF LPAREN expression error
           {
            yyerror(message[mnUnclosedParanthesis]);
           }
           THEN statement_list elif_part_list
           {
            yyerrok;
           }
          ;
elif_part_list  : 
                | elif_part
                ;
/*Handles unclosed paranthesis*/          
write_statement : WRITE LPAREN SCONST RPAREN
                | WRITE LPAREN SCONST error
                  {
                   yyerror(message[mnUnclosedParanthesis]);
                  }
                | WRITE LPAREN SCONST expression_comma_list RPAREN
                | WRITE LPAREN SCONST expression_comma_list error
                 {
                  yyerror(message[mnUnclosedParanthesis]);
                 }
                ;
expression_comma_list : COMMA expression
                      | expression_comma_list COMMA expression
                      ;
/*Handles unclosed paranthesis*/                 
read_statement : READ LPAREN SCONST expression_comma_list RPAREN
               | READ LPAREN SCONST expression_comma_list error
                 {
                  yyerror(message[mnUnclosedParanthesis]);
                 }
               ;

expression : and_expression
           | and_expression DBAR and_expression
           ;         
and_expression : logic_expression
               | logic_expression DAMP logic_expression
               ;
               
logic_expression : simple_expression
                 | simple_expression LT simple_expression
                 | simple_expression LE simple_expression
                 | simple_expression EQ simple_expression
                 | simple_expression NE simple_expression
                 | simple_expression GE simple_expression
                 | simple_expression GT simple_expression
                 ;
                 
simple_expression : simple_expression PLUS term
                  | simple_expression MINUS term
                  | PLUS term
                  | MINUS term
                  | term
                  ;     
term : factor
     | factor factor_list
     ;

factor_list : STAR factor
            | DIV factor
            | factor_list STAR factor
            | factor_list DIV factor
            ;
factor : constant
       | variable
       | subroutine_call
       | LPAREN expression RPAREN
       | BANG factor
       ;
       
variable : IDENT
         | IDENT arrayvar
         | IDENT recvar
         | IDENT arrayvar recvar
         ;
/*Handles missing closing bracket*/         
arrayvar : LBRACK expression_list RBRACK
         | LBRACK expression_list error
           {
            yyerror(message[mnMissingClosingBracket]);
           }
         ;
            
recvar : DOT variable_list 
       ;
variable_list : variable
              | recvar variable
              ;

constant : ICONST
         | FCONST
         | TRUE
         | FALSE
         ;
%%
