#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char id[100];
    int i, valid = 1;
    printf("Enter an identifier: ");
    scanf("%s", id);

    // Rule 1: First character must be letter or _
    if (!(isalpha(id[0]) || id[0] == '_')) {
        valid = 0;
    }
    // Rule 2: Remaining characters
    for (i = 1; id[i] != '\0'; i++) {
        if (!(isalnum(id[i]) || id[i] == '_')) {
            valid = 0;
            break;
        }
    }
    if (valid)
        printf("Valid Identifier\n");
    else
        printf("Invalid Identifier\n");
    return 0;
}
