#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    char *result;

    // Using strchr() to find the first occurrence of a character
    result = strchr(str, 'o');

    if (result != NULL) {
        printf("Character 'o' found at index: %ld\n", result - str);
    } else {
        printf("Character 'o' not found\n");
    }

    return 0;
}