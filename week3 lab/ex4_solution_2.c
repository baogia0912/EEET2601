#include <stdio.h>

int main() {
    printf(" x |   1   2   3   4   5   6   7   8   9  10\n--------------------------------------------\n");

    for (int i = 1; i <= 10; i++) {
        printf("%2d |", i);

        for (int j = 1; j <= 10; j++) {

            printf("%4d", i*j);
        }

        printf("\n");
    }    
}