#include <stdio.h>

// Define a constant
#define PI 3.14159

int main() {
    double radius = 5.0;
    double area;

    // Calculate area using the defined constant
    area = PI * radius * radius;

    printf("The area of the circle with radius %.2f is %.2f\n", radius, area);

    return 0;
}
