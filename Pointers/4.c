#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;    // Pointer to an integer
    int **ptr_to_ptr = &ptr; // Pointer to a pointer

    // Printing the value of num using pointer to pointer
    printf("Value of num using pointer to pointer: %d\n", **ptr_to_ptr);

    // Modifying the value of num using pointer to pointer
    **ptr_to_ptr = 20;

    // Printing the modified value of num
    printf("Modified value of num using pointer to pointer: %d\n", num);

    return 0;
}