#include<stdio.h>

int main () {
    int minute;
    printf("Enter minutes: ");
    scanf("%i", &minute);
    printf("Hour equivalence is: %i hours %i minuites", minute/60, minute%60);
    return 0;
}