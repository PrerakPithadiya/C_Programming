#include <stdio.h>

int main() {
    // Define an array of integers
    int num1 = 10, num2 = 20, num3 = 30;
    int *ptrArr[3]; // Array of integer pointers
    int i;

    // Assign the addresses of the integer variables to the array of pointers
    ptrArr[0] = &num1;
    ptrArr[1] = &num2;
    ptrArr[2] = &num3;

    // Access and print values using array of pointers
    printf("Values using array of pointers:\n");
    for (i = 0; i < 3; i++) {
        printf("Value %d: %d\n", i + 1, *ptrArr[i]);
    }

    // Modify values using array of pointers
    *ptrArr[0] = 100;
    *ptrArr[1] = 200;
    *ptrArr[2] = 300;

    // Print modified values
    printf("\nModified values using array of pointers:\n");
    for (i = 0; i < 3; i++) {
        printf("Value %d: %d\n", i + 1, *ptrArr[i]);
    }

    return 0;
}