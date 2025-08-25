#include <stdio.h>

int main() {
    int sec, h, m, s;

    printf("Enter time in seconds: ");
    scanf("%d", &sec);

    h = sec / 3600;
    sec = sec % 3600;
    m = sec / 60;
    s = sec % 60;

    printf("Time = %d:%d:%d\n", h, m, s);

    return 0;
}