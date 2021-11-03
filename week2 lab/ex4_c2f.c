#include<stdio.h>

int main () {
    int asmt1, asmt2, asmt3;
    printf("Enter 3 assessment scores: ");
    scanf("%i %i %i", &asmt1, &asmt2, &asmt3);
    printf("The final result is: %.2f", asmt1 * 0.3 + asmt2 * 0.3 + asmt3 * 0.4);
    return 0;
}