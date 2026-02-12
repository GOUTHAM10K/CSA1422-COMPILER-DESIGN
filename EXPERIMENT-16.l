%{
#include <stdio.h>
int char_count = 0;
int word_count = 0;
int line_count = 0;
%}

%%

"//".*                  ;   /* Ignore single line comments */

"/*"([^*]|\n|(\*+([^*/]|\n)))*"*"+"/"    ;   /* Ignore multi-line comments */

[ \t]+                  ;   /* Ignore spaces and tabs */

\n                      { line_count++; char_count++; }

[a-zA-Z_][a-zA-Z0-9_]*  { word_count++; char_count += yyleng; }

.                       { char_count++; }

%%

int main()
{
    yyin = fopen("sample.c", "r");

    if(yyin == NULL)
    {
        printf("File not found\n");
        return 1;
    }

    yylex();

    printf("\nNumber of Characters: %d\n", char_count);
    printf("Number of Words: %d\n", word_count);
    printf("Number of Lines: %d\n", line_count);

    return 0;
}

int yywrap()
{
    return 1;
}
