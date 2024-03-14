#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello, World!";
    char str2[] = "Hello, C Programming!";
    int n = 5; // Number of characters to compare

    // Using strncmp() to compare the first 'n' characters of two strings
    int result = strncmp(str1, str2, n);

    if (result == 0) {
        printf("First %d characters of str1 and str2 are equal.\n", n);
    } else if (result < 0) {
        printf("First %d characters of str1 are lexicographically less than str2.\n", n);
    } else {
        printf("First %d characters of str1 are lexicographically greater than str2.\n", n);
    }

    return 0;
}