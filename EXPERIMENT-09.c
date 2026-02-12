#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, aCount = 0, bCount = 0;
    int valid = 1;

    printf("Enter string: ");
    scanf("%s", str);

    int len = strlen(str);

    // Count a's first
    for (i = 0; i < len; i++) {
        if (str[i] == 'a')
            aCount++;
        else
            break;
    }

    // Count b's after a's
    for (; i < len; i++) {
        if (str[i] == 'b')
            bCount++;
        else {
            valid = 0;
            break;
        }
    }

    // Final check
    if (valid && aCount == bCount && aCount > 0)
        printf("String satisfies the grammar.\n");
    else
        printf("String does NOT satisfy the grammar.\n");

    return 0;
}
