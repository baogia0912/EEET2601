#include <stdio.h>

int main() {
    printf(" x |   1   2   3   4   5   6   7   8   9  10\n--------------------------------------------\n");

    for (int i = 1; i <= 10; i++) {
        if (i == 10) {
            printf("10 |");
        } else {
            printf(" %d |", i);
        }

        for (int j = 1; j <= 10; j++) {
            if ((i * j) == 100) {
                printf(" ");
            } else if ((i * j) >= 10) {
                printf("  ");
            } else {
                printf("   ");
            }
            printf("%d", i*j);
        }

        printf("\n");
    }    
}