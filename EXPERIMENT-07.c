#include <stdio.h>
#include <string.h>

int main() {
    char production[20], common[20];
    char beta1[20], beta2[20];
    char nonTerminal;
    int i, j = 0;

    printf("Enter production (Example: A=ab|ac): ");
    scanf("%s", production);

    nonTerminal = production[0];

    // Find common prefix
    for (i = 2; production[i] != '|' && production[i] == production[i+3]; i++) {
        common[j++] = production[i];
    }
    common[j] = '\0';

    if (strlen(common) == 0) {
        printf("No Left Factoring Needed.\n");
    }
    else {
        // Extract beta1
        strcpy(beta1, production + 2 + strlen(common));

        // Extract beta2
        char *ptr = strchr(production, '|');
        strcpy(beta2, ptr + 1 + strlen(common));

        printf("\nAfter Left Factoring:\n");
        printf("%c -> %s%c'\n", nonTerminal, common, nonTerminal);
        printf("%c' -> %s | %s\n", nonTerminal, beta1, beta2);
    }

    return 0;
}
