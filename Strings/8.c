#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "This is a simple example";
    char *substr;

    // Using strstr() to find the first occurrence of a substring
    substr = strstr(str, "simple");

    if (substr != NULL) {
        printf("Substring found at index: %ld\n", substr - str);
    } else {
        printf("Substring not found\n");
    }

    return 0;
}