#include <stdio.h>

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int *ptr = arr; // Pointer to the first element of the array
    int sum = 0, i;

    // Add elements of the array using pointer arithmetic
    for (i = 0; i < 6; i++) {
        sum += *ptr; // Add the value pointed by ptr to sum
        ptr++; // Move the pointer to the next element
    }

    printf("Sum of array elements: %d\n", sum);

    return 0;
}