#include <stdio.h>
#include <string.h>

// Define the union named myUnion
union myUnion {
    int integer;
    float floating_point;
    char string[50];
};

int main() {
    // Declare a variable of type myUnion
    union myUnion data;

    // Assign values to the members of the union
    data.integer = 10;
    printf("Integer: %d\n", data.integer);

    data.floating_point = 3.14;
    printf("Floating point: %.2f\n", data.floating_point);

    strcpy(data.string, "Hello, world!");
    printf("String: %s\n", data.string);

    return 0;
}
