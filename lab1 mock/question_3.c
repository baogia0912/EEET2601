#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int marks[20];
    int marks_above_50[20];
    int ran_num, index = 0;

    srand(time(0));

	for(int i = 0; i < 20; i++)
        marks[i] = rand() % 101;

    printf("\nHere are the 20 marks of the lab accessment:\n\n");
    for (int i = 0; i < sizeof(marks)/sizeof(int); i++) {

        if (marks[i] > 49) marks_above_50[index++] = marks[i];

        if (i == 9) printf("%3d\n\n", marks[i]);
        else printf("%3d ", marks[i]);

    } 

    printf("\n\nThere are %d marks between 50 and 100 are: \n\n", index);

    for (int i = 0; i < index; i++) printf("%3d ", marks_above_50[i]);

    printf("\n\n");

	return 0;
}
