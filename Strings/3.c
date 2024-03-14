#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello, ";
    char str2[] = "World!";

    // Using strcat() to concatenate strings
    strcat(str1, str2);

    printf("Concatenated string: %s\n", str1);

    return 0;
}
