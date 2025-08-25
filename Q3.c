#include <stdio.h>

int main() {
    int length, breadth;
    int area, perimeter;

    // Taking input
    printf("Enter the length of rectangle: ");
    scanf("%d", &length);

    printf("Enter the breadth of rectangle: ");
    scanf("%d", &breadth);

    // Calculations
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Output results
    printf("Area of rectangle = %d\n", area);
    printf("Perimeter of rectangle = %d\n", perimeter);

    return 0;
}