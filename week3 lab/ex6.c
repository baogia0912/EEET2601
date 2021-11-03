#include<stdio.h>

int main() {
    int input;

    printf("Enter an integer between 1 and 15: ");
    scanf("%d", &input);

    while(input < 1 || input > 15) {
        printf("Enter an integer between 1 and 15: ");
        scanf("%d", &input);
    }

    for (int i = 1; i <= input; i++) {
        printf("  %.*s", (input - i) * 3, "                                                       ");

        for (int j = i; j > 0; j--) {
            printf("%2d ", j);
        }
        for (int j = 2; j <= i; j++) {
            printf("%2d ", j);
        }
        printf("\n");
    }
}