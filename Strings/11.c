#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello, ";
    char str2[] = "World!";

    // Using strncat() to concatenate a specified number of characters
    strncat(str1, str2, 3); // Concatenate the first 3 characters from str2

    printf("Concatenated string: %s\n", str1);

    return 0;
}