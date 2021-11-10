#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int rand_ints[10];
    int greater_80[10];
    int smallest = 100, index = 0;
    srand(time(0));

    for (int i = 0; i < 10; i++) rand_ints[i] = rand() % 51 + 50;

    printf("\n");

    const int SIZE = sizeof(rand_ints)/sizeof(int);

    for (int i = 0; i < SIZE; i++) {
        printf("%d  ", rand_ints[i]);

        if (rand_ints[i] >= 80) greater_80[index++] = rand_ints[i];

        if (rand_ints[i] < smallest) smallest = rand_ints[i];
    }
    printf("\n\n");

    for (int i = SIZE - 1; i >= 0; i--) printf("%d  ", rand_ints[i]);

    printf("\n\nThere are %d marks between 50 and 100 and they are: \n\n", index);

    for (int i = 0; i < index; i++) printf("%d  ", greater_80[i]);

    printf("\n\nThe smallest number is: %d\n\n", smallest);

}