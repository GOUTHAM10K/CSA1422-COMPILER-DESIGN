#include <stdio.h>
int main() {
    char ch;
    printf("Enter an expression (Press Ctrl+Z to stop):\n");
 while ((ch = getchar()) != EOF) {
        if (ch == '+')
            printf("Operator: + (Addition)\n");
        else if (ch == '-')
            printf("Operator: - (Subtraction)\n");
        else if (ch == '*')
            printf("Operator: * (Multiplication)\n");
        else if (ch == '/')
            printf("Operator: / (Division)\n");
    }
    return 0;
}
