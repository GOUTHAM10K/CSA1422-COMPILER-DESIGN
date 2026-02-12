#include <stdio.h>
#include <string.h>
int main() {
    char op, arg1, arg2, result;
    printf("Enter Three Address Code (Example: t1=b*c): ");
    scanf(" %c%c=%c%c%c", &result, &result, &arg1, &op, &arg2);
    printf("\nTarget Code (Assembly-like Code):\n");
    printf("MOV R1, %c\n", arg1);
switch(op) {
        case '+':
            printf("ADD R1, %c\n", arg2);
            break;
        case '-':
            printf("SUB R1, %c\n", arg2);
            break;
        case '*':
            printf("MUL R1, %c\n", arg2);
            break;
        case '/':
            printf("DIV R1, %c\n", arg2);
            break;
    }
    printf("MOV %c, R1\n", result);
    return 0;
}
