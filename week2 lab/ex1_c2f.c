#include<stdio.h>

int main () {
    float temp_c;
    printf("Enter C temperature: ");
    scanf("%f", &temp_c);
    printf("Converted to F temperture: %.2f", temp_c * 9 / 5 + 32);
    return 0;
}