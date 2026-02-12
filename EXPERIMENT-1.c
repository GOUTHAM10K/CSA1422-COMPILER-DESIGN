#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;

    printf("Enter the code (Press Ctrl+Z to stop):\n");

    while ((ch = getchar()) != EOF) {

        // Ignore spaces, tabs, new lines
        if (ch == ' ' || ch == '\t' || ch == '\n')
            continue;

        // Ignore single line comments //
        if (ch == '/') {
            char next = getchar();
            if (next == '/') {
                while ((ch = getchar()) != '\n' && ch != EOF);
            }
            else {
                printf("Operator: /\n");
                ungetc(next, stdin);
            }
        }

        // Identifier
        else if (isalpha(ch)) {
            printf("Identifier: %c\n", ch);
        }

        // Constant (Number)
        else if (isdigit(ch)) {
            printf("Constant: %c\n", ch);
        }

        // Operators
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '=')
            printf("Operator: %c\n", ch);
    }

    return 0;
}
