#include<stdio.h>

int main() {
    int arr[5];

    printf("Enter 5 integers: ");
    scanf("%d%d%d%d%d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

    int small = arr[0], index = 0, temp;

    for (int i = 0; i < sizeof(arr)/sizeof(int); i++) {
        small = arr[i], index = i;
        
        for (int j = i; j < (int) (sizeof(arr)/sizeof(int)); j++) if (small > arr[j]) small = arr[j], index = j;
            
        temp = arr[i], arr[i] = small, arr[index] = temp;
        
    } 

    for (int i = 0; i < sizeof(arr)/sizeof(int); i++) printf("%d  ", arr[i]);

}