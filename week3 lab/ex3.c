#include <stdio.h>

int main() {
    for (int i = 32; i <= 127; i++) {
        putchar(i);
        if (!((i - 32) % 15)) 
        putchar('\n');
        printf(" ");
    }
    putchar('\n');
}