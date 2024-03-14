#include<stdio.h>

#define ROWS 3
#define COLS 3

int main() {
    int arr[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int *ptr = &arr[0][0], i, j;

    printf("The Elements of 2d Array are :\n");

    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d ", *(ptr + i * COLS + j));
        }
        printf("\n");
    }
    return 0;
}