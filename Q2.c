#include <stdio.h>

int main() {
    int a, b;
    int sum, diff, prod, quot;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    sum = a + b;
    diff = a - b;
    prod = a * b;
    quot = a / b;   // assumes b is not zero

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", diff);
    printf("Product = %d\n", prod);
    printf("Quotient = %d\n", quot);

    return 0;
}