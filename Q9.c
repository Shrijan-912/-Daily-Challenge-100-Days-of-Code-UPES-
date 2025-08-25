#include <stdio.h>

int main() {
    float p, r, t, si, ci, amt;
    int i;

    printf("Enter principal: ");
    scanf("%f", &p);

    printf("Enter rate: ");
    scanf("%f", &r);

    printf("Enter time: ");
    scanf("%f", &t);

    si = (p * r * t) / 100;

    amt = p;
    for(i = 1; i <= t; i++) {
        amt = amt * (1 + r/100);
    }
    ci = amt - p;

    printf("SI = %f\n", si);
    printf("CI = %f\n", ci);

    return 0;
}