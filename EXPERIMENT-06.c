#include <stdio.h>
#include <string.h>

int main() {
    char production[20], alpha[20], beta[20];
    char nonTerminal;
    int i = 0, j = 0;

    printf("Enter production (Example: A=Aa|b): ");
    scanf("%s", production);

    nonTerminal = production[0];

    // Check left recursion
    if (production[2] == nonTerminal) {

        // Extract alpha
        for (i = 3; production[i] != '|'; i++) {
            alpha[j++] = production[i];
        }
        alpha[j] = '\0';

        j = 0;

        // Extract beta
        for (i = i + 1; production[i] != '\0'; i++) {
            beta[j++] = production[i];
        }
        beta[j] = '\0';

        // Print new productions
        printf("\nAfter removing Left Recursion:\n");
        printf("%c -> %s%c'\n", nonTerminal, beta, nonTerminal);
        printf("%c' -> %s%c' | ε\n", nonTerminal, alpha, nonTerminal);
    }
    else {
        printf("No Left Recursion Found.\n");
    }

    return 0;
}
