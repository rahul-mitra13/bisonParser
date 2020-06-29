/*
 * scanner.l -- a lexical analyzer for P-
 *
 * Rahul Mitra
 * Department of Computer Science
 * Trinity College
 * CPSC316, Assignment 3
 * Date: October 12th, 2019
 * Modification History: Version 3
 *
 */

%{
#include "scanner.h"
#define N 10000
void modify(char a[], char b[]);

%}

D                        [0-9]                       
%x                       STRING COMMENT
%%
						
                        struct he *phe;
                        char msg[MAX_MSG_LEN];
                        char ch;
                        int ret;

" "                     |
"\t"                    |
"\f"                    ;
"\n"                    cLine++;


"array"|"ARRAY"             return(ARRAY);
"begin"|"BEGIN"             return(BEGINN);
"bool"|"BOOL"               return(BOOL);
"else"|"ELSE"               return(ELSE);
"elif"|"ELIF"               return(ELIF);   
"end"|"END"                 return(END);
"false"|"FALSE"             return(FALSE);
"for"|"FOR"                 return(FOR);
"float"|"FLOAT"             return(FLOAT);
"function"|"FUNCTION"       return(FUNCTION);
"if"|"IF"                   return(IF);
"in"|"IN"                   return (IN);
"int"|"INT"                 return(INT);
"of"|"OF"                   return(OF);
"procedure"|"PROCEDURE"     return(PROCEDURE);
"program"|"PROGRAM"         return(PROGRAM);
"read"|"READ"               return(READ);
"record"|"RECORD"           return(RECORD);
"return"|"RETURN"           return(RETURN);
"then"|"THEN"               return(THEN);
"true"|"TRUE"               return(TRUE);
"while"|"WHILE"             return(WHILE);
"write"|"WRITE"             return(WRITE);
"&"                         return(AMP);
"="                         return(ASGN);
"!"                         return(BANG);
":"                         return(COLON);
","                         return(COMMA);
"/"                         return(DIV);
"."                         return(DOT);
">"                         return(GT);
"["                         return(LBRACK);
"("                         return(LPAREN);
"<"                         return(LT);
"-"                         return(MINUS);
"+"                         return(PLUS);
"]"                         return(RBRACK);
")"                         return(RPAREN);
";"                         return(SEMI);
"*"                         return(STAR);
"&&"                        return(DAMP);
"||"                        return(DBAR);
"<="                        return(LE);
"!="                        return (NE);
"=="                        return(EQ);
">="                        return(GE);


                        
["]                                {yymore(); BEGIN(STRING);}/*Strings*/
<STRING>(\\.|[^"\\^\n])*           {yymore();}  /*Collect all escape characters and anything that's not a quote*/
<STRING>(\n)                       {yymore(); cLine++;}
<STRING>["]                        {
                                        BEGIN(INITIAL);
                                        char copy[N];
                                        modify(yytext,copy);    
                                        yylval.sb = MakeString(copy);
                                        return(SCONST);
                                    }
<STRING><<EOF>>                    {sprintf(msg, message[mnIllegalString],yytext);PrintErrMsg(msg); yyterminate();}/*Terminate if you see an unclosed string*/

[0-9]+                    {   yylval.w = atoi(yytext);
                                return(ICONST);
                          }
[0-9]*"."[0-9]+             {   yylval.r = atof(yytext);
                                return(FCONST);
                            }

"/*"                  {BEGIN(COMMENT);}/*Comments*/
<COMMENT>[^/*\n]*     
<COMMENT>["/"]*
<COMMENT>\n           {cLine++;} /*Increment cLine if you see a new line character*/
<COMMENT>"*"+"/"      {BEGIN(INITIAL);}

([a-zA-Z]|"_")([0-9]|[a-zA-Z]|"_")*                      {/*Inesrting identifiers into the symbol table*/
                                                                if ((phe = Lookup(yytext)) == NULL) {
                                                                phe = Insert(yytext);
                                                                yylval.phe = phe;
                                                                }
                                                                return(IDENT);
                                                         }

.                       {
                            sprintf(msg, message[mnUnknownChar], yytext[0]);
                            PrintErrMsg(msg);
                        }
%%
/* User routines go here */
/*This is a function to handle escape characters in a string*
*Parameters: char array a[] which is to be modified
*Parameters: char array b[] which stores the modified string
*Return type: void
*/
void modify(char a[], char b[]){
    int i;
    i = 0;
    int k;
    k = 0;
    while ( a[i] != '\0'){
        if ( a[i] == '\\' && a[i+1] == '\\'){/*If theres is an escape character for a backslash*/
                b[k++] = '\\';
                i = i + 2;
         }
         else if ( a[i] == '\\' && a[i + 1] == '"'){/*If there is an escape character for a quote*/
                b[k++] = '"';
                i = i + 2;
         }
         else{
                b[k++] = a[i];
                i++;
        }
   }
   b[k] = '\0';
}

