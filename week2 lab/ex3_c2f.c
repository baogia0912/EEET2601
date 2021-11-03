#include<stdio.h>
#include<math.h>

int main () {
    int x, y;
    printf("Enter x and y: ");
    scanf("%i %i", &x, &y);
    printf("x to the power of y is: %.f", pow(x,y));
    return 0;
}