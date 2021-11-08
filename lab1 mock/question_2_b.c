#include<stdio.h>

int main() {
    int input;

    printf("Enter an integer between 1 and 10: ");
    scanf("%d", &input);

    while(input < 1 || input > 10) {
        printf("Invalid number\n");
        printf("Enter an integer between 1 and 10: ");
        scanf("%d", &input);
    }

    for (int i = 1; i <= input; i++) {            

        for (int j = i; j > 0; j--) printf("%2d  ", j);

        if (input >= 8) {

            for (int j = 2; j <= input; j++) {
                
                if (i == 1 || j == input - i + 1) printf("%2d  ", j);    
                else printf("    ");
            }
        }

        printf("\n");
    }
}