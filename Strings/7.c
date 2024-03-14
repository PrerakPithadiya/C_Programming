#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "hello, world!";

    printf("Original string: %s\n", str);

    // Using strupr() to convert the string to uppercase
    strupr(str);

    printf("Uppercase string: %s\n", str);

    return 0;
}