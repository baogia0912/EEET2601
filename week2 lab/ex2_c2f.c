#include<stdio.h>

int main () {
    float vnd;
    printf("Enter VND currency: ");
    scanf("%f", &vnd);
    printf("Converted to USD: $%.2f", vnd / 23150);
    return 0;
}