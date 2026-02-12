#include <stdio.h>
#include <string.h>
int main() {
    char expr1[50], expr2[50];
    char sub1[20], sub2[20];
    printf("Enter first expression (Example: b*c+d): ");
    scanf("%s", expr1);
    printf("Enter second expression (Example: b*c+f): ");
    scanf("%s", expr2);
    // Extract first 3 characters (like b*c)
    strncpy(sub1, expr1, 3);
    sub1[3] = '\0';
    strncpy(sub2, expr2, 3);
    sub2[3] = '\0';
    if (strcmp(sub1, sub2) == 0) {
        printf("\nCommon Subexpression Found: %s\n", sub1);
        printf("\nAfter Optimization:\n");
        printf("t1 = %s\n", sub1);
        printf("a = t1 %s\n", expr1 + 3);
        printf("e = t1 %s\n", expr2 + 3);
    }
    else {
        printf("\nNo Common Subexpression Found.\n");
    }
    return 0;
}
