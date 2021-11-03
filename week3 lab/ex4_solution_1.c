#include <stdio.h>

int main() {
    printf(" x |");

    for (int i = 1; i <= 10; i++) printf("%4d", i);

    printf("\n--------------------------------------------\n");

    for (int i = 1; i <= 10; i++) {
        printf("%2d |", i);
        for (int j = 1; j <= 10; j++) printf("%4d", i*j);
        printf("\n");
    }    
}