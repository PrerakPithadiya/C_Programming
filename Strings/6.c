#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    
    printf("Original string: %s\n", str);
    
    // Convert the string to lowercase
    strlwr(str);
    
    printf("String in lowercase: %s\n", str);
    
    return 0;
}
