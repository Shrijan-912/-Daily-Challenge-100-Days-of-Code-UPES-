#include <stdio.h>

int main() {
    float r, area, circ;

    printf("Enter radius of circle: ");
    scanf("%f", &r);

    area = 3.14 * r * r;
    circ = 2 * 3.14 * r;

    printf("Area = %f\n", area);
    printf("Circumference = %f\n", circ);

    return 0;
}