#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Hello, World!";
    char destination[20]; // Make sure the destination buffer is large enough

    // Using strcpy() to copy the string
    strcpy(destination, source);

    printf("Original string: %s\n", source);
    printf("Copied string: %s\n", destination);

    return 0;
}
