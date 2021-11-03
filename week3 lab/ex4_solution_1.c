#include <stdio.h>

int main() {
    int number_of_digits = 3;

    printf(" x |");

    for (int i = 1; i <= 10; i++) {
        if ((i / 10) > 0) {
            number_of_digits = 2;
        } else {
            number_of_digits = 3;
        }
        printf("%.*s", number_of_digits, "   ");
        printf("%d", i);
    }

    printf("\n--------------------------------------------\n");

    for (int i = 1; i <= 10; i++) {
        if ((i / 10) > 0) {
            number_of_digits = 0;
        } else {
            number_of_digits = 1;
        }
        printf("%.*s", number_of_digits, " ");
        printf("%d |", i);

        for (int j = 1; j <= 10; j++) {
            if ((i * j / 10) == 10) {
                number_of_digits = 1;
            } else if ((i * j / 10) > 0) {
                number_of_digits = 2;
            } else {
                number_of_digits = 3;
            }
            printf("%.*s", number_of_digits, "   ");

            printf("%d", i*j);
        }

        printf("\n");
    }    
}