#include <stdio.h>

// Define the structure named distance
struct distance {
    int feet;
    int inch;
};

int main() {
    // Declare and initialize variables of type distance
    struct distance d1 = {5, 8}; // 5 feet, 8 inches
    struct distance d2 = {3, 10}; // 3 feet, 10 inches

    // Print the values of the variables
    printf("First distance: %d feet %d inches\n", d1.feet, d1.inch);
    printf("Second distance: %d feet %d inches\n", d2.feet, d2.inch);

    return 0;
}
