/*
 * msg.h -- List of messages for P- compiler
 *
 * Rahul Mitra
 * Department of Computer Science
 * Trinity College
 * CPSC 316, Assignment 3
 * Date: 12th October, 2019
 * Modification History: Version 2
 *
 */

#define MAX_MSG_LEN     256

/* error definitions for the scanner */
#define mnKeywordFound                        0
#define mnUnknownChar                         1
#define mnIllegalString                       2
#define mnIllegalComment                      3

/* error definitions for the parser */
#define mnMissingIdent                        4
#define mnMissingEnd                          5
#define mnMissingType                         6
#define mnMissingReturnType                   7
#define mnUnclosedParanthesis                 8
#define mnMissingClosingBracket               9
#define mnMissingEquals                       10
#define mnMissingSemiColon                    11
#define mnMissingComma                        12
#define mnMissingColon                        13

/* Actual messages */
static char *message[] = {
    "keyword '%s' found",
    "unknown character \\%03o",
    "illegal string",
    "illegal comment",
    "missing identifier",
    "missing end statement",
    "missing type",
    "missing return type",
    "unclosed paranthesis",
    "missing closing brackets",
    "missing equals symbol",
    "missing semi colon",
    "missing comma",
    "missing colon",
 };

