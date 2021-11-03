#include <stdio.h>

int main() {
    float score = -1;

    printf("Enter your score: ");
    scanf("%f", &score);

    while (score < 0 || score > 100) {
        printf("Your score must be between 0 and 100!\nPlease enter your score again: ");
        scanf("%f", &score);
    }

    if (score < 50) printf("NN");
    else if (score < 60) printf("PA");
    else if (score < 70) printf("CR");
    else if (score < 80) printf("DI");
    else printf("HD");

}