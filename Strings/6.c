#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";

    // Using strlen() to find the length of the string
    int length = strlen(str);

    printf("The length of the string \"%s\" is: %d\n", str, length);

    return 0;
}