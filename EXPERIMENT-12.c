#include <stdio.h>
#include <string.h>
int main() {
    char expr[20];
    int i = 0;
    char temp = '1';
    printf("Enter expression (Example: a+b*c): ");
    scanf("%s", expr);
    printf("\nThree Address Code:\n");
    // Handle * and / first (higher precedence)
    for (i = 0; expr[i] != '\0'; i++) {
        if (expr[i] == '*' || expr[i] == '/') {
            printf("t%c = %c %c %c\n", temp, expr[i-1], expr[i], expr[i+1]);
            expr[i+1] = 't';
            expr[i] = temp;
            temp++;
        }
    }
    // Handle + and -
    for (i = 0; expr[i] != '\0'; i++) {
        if (expr[i] == '+' || expr[i] == '-') {
            printf("t%c = %c %c %c\n", temp, expr[i-1], expr[i], expr[i+1]);
            expr[i+1] = 't';
            expr[i] = temp;
            temp++;
        }
    }
    return 0;
}
