#include <stdio.h>

int main() {
    char input;
    printf("Enter an alphanumerical character: ");
    scanf("%c", &input);

    if (input >= 48 && input <= 57) printf("It is a numerical charater"); 
    else if (input >= 65 && input <= 90) printf("UPPERCASE alphabetical charater"); 
    else if (input >= 97 && input <= 122) printf("lowercase alphabetical charater"); 
    else printf("Invalid character"); 
}