#include <stdio.h>

int main() {
    char arr[] = {'R', 'M', 'I', 'T', 'U', 'n', 'i', 'v', 'e', 'r', 's', 'i', 't', 'y'};
    char temp;
    int clear = 1;
    
    while (clear) {
        clear = 0;
        for (int i = 0; i < (int)sizeof(arr)/sizeof(char) - 1; i++) if (arr[i] > arr[i+1]) temp = arr[i], arr[i] = arr[i+1], arr[i+1] = temp, clear = 1;
    }
    for (int i = 0; i < (int)sizeof(arr)/sizeof(char); i++) printf(" %c", arr[i]);
}