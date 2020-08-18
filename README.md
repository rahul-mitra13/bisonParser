
README

This project uses flex and bison to parse code for the P- toy programming langauge. Identifier tokens are added to the symbol table by the flex scanner. Flex is used to return tokens and bison is used to implement grammar rules. The parser written with the help of bison is able to parse syntactically correct programs in the P- language. 

On top of that, the parser also catches the following errors:

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

Error (a) : Missing identifier error is caught when either the program has no name or a function/procedure is declared without an explicit name. Also, when a for loop is missing an identifier, a       missing identifier error is thrown.

Error (b) : Missing end statement error is caught when either the body, a for loop,a while loop or if statement terminates without the end keyword. 

Error(c) : The missing type error is caught when a variable or array is declared without an explicit type. 

Error (d) : The missing return type error is caught when a function is declared without a return type.

Error (e) : Unclosed paranthesis error is caught when there are unbalanced paranthesis in either a procedure declaration, function declaration, subroutine call, while statement, if statement, elif statement, write statement and read statement. 

Error (f) : The missing closing brackets error is caught when there are unbalanced brackets in array declaration or while using an array variable.

Error (g) : Missing equals is caught when an assignment statement or variable declaration is missing the '=' symbol. 

Error (h) : Missing semi colon error is caught when different parameter lists are not separated by a semi colon.

Error (i) : Missing comma error is caught when different indices or different identifiers either inside function/procedure parameters or otherwise are not separated by a comma.

Error (j) : The missing colon error is caught when variable declaration, function declaration, field lists and a for statement does include the ':' character.

The error messages are included in the msg.h header file.

Known Issues : The parser handles syntactically correct programs in the P- programming language very well as tested againt the five input test cases and numerous other test programs. However, programs with errors in them do present a few bugs for the parser. Because I have only handled the syntax errors mentioned above, a program that may have some other syntax error, for example a missing comma between a list of expressions may be identified as something else - as oppose to being considered a missing comma. I have also noticed that when this happens there is usually more than one error statement that's printed out even though there may be exactly one syntax error - again, this happens because I have not written the grammar rules to identify and catch these errors. 
