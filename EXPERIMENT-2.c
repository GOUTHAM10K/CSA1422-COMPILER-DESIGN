#include <stdio.h>
#include <string.h>
int main() {
    char line[200];
    printf("Enter a line:\n");
    fgets(line, sizeof(line), stdin);
    // Check for single-line comment //
    if (line[0] == '/' && line[1] == '/') {
        printf("It is a single-line comment.\n");
    }
    // Check for multi-line comment /* */
    else if (line[0] == '/' && line[1] == '*' &&
             strstr(line, "*/") != NULL) {
        printf("It is a multi-line comment.\n");
    }
    else {
        printf("It is NOT a comment.\n");
    }
    return 0;
}
