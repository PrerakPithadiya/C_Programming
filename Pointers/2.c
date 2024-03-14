#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n, i;

    // Input size of array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Input elements of the array
    printf("Enter elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Pointer pointing to the last element of the array
    int *ptr = &arr[n - 1];

    // Print elements of the array in reverse order
    printf("Elements of the array in reverse order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *ptr);
        ptr--; // Move the pointer to the previous element
    }

    return 0;
}