#include<stdio.h>
int main() {
 int num;

 // Input an integer
 printf("Enter an integer: ");
 scanf("%d", &num);

 // Check if even or odd
 if (num %2 == 0) {
    printf("%d is Even", num);
 } else {
    printf("%d is Odd", num);
 }
 return 0;
}