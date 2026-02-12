#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, result;

    printf("Enter values for a, b, c, d:\n");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    // Example expression: (a + b) * c - d
    result = (a + b) * c - d;

    printf("\nExpression: (a + b) * c - d\n");
    printf("Result = %.2f\n", result);

    return 0;
}
