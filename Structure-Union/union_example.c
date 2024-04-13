#include <stdio.h>

// Define the union named myUnion
union myUnion {
    int integer;
    float floating_point;
    char character;
};

int main() {
    // Declare a variable of type myUnion
    union myUnion data;

    // Assign values to the members of the union
    data.integer = 65;
    printf("Integer: %d\n", data.integer);
    printf("Character: %c\n", data.character);

    data.floating_point = 3.14;
    printf("Floating point: %.2f\n", data.floating_point);

    data.character = 'X';
    printf("Character: %c\n", data.character);
    printf("Integer: %d\n", data.integer);

    return 0;
}
