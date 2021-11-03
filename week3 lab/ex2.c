#include <stdio.h>

int main() {
    int input, sum = 0, count = 0;

    while(input >= 0) {
        printf("Enter a positive interger: ");
        scanf("%d", &input);
        if (input > 0) {
            sum += input;
            count++;
        }
    }
    printf("The sum is %d\nThere are %d positive integer", sum, count);
}