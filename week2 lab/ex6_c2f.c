#include<stdio.h>

int main () {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("The sum of all the digits in that number is %i\n", a / 100 + a % 100 / 10 + a % 100 % 10);
    return 0;
}