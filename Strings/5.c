#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";

    printf("Original string: %s\n", str);

    // Using strrev() to reverse the string
    strrev(str);

    printf("Reversed string: %s\n", str);

    return 0;
}