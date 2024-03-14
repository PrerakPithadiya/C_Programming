#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Hello, World!";
    char destination[20]; // Make sure the destination buffer is large enough

    // Using strncpy() to copy a specified number of characters
    strncpy(destination, source, 5); // Copy the first 5 characters

    // Null-terminate the destination string explicitly
    destination[5] = '\0';

    printf("Original string: %s\n", source);
    printf("Copied string: %s\n", destination);

    return 0;
}