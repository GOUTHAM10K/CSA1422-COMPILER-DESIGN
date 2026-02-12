#include <stdio.h>

int main() {
    char text[1000];
    int i = 0;
    int spaces = 0, newlines = 0, tabs = 0;

    printf("Enter text (Press Enter twice to stop):\n");

    while (fgets(text, sizeof(text), stdin) != NULL) {

        // Stop if empty line entered
        if (text[0] == '\n')
            break;

        for (i = 0; text[i] != '\0'; i++) {

            if (text[i] == ' ')
                spaces++;

            else if (text[i] == '\n')
                newlines++;

            else if (text[i] == '\t')
                tabs++;
        }
    }

    printf("\nNumber of spaces: %d\n", spaces);
    printf("Number of tabs: %d\n", tabs);
    printf("Number of newline characters: %d\n", newlines);

    return 0;
}
