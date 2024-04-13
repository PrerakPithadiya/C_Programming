#include <stdio.h>

#define MESSAGE "Hello, World!" // Define a macro

int main() {
    printf("Original message: %s\n", MESSAGE);

    #undef MESSAGE // Undefine the macro

    #ifdef MESSAGE
        printf("After undefining, message is still defined: %s\n", MESSAGE);
    #else
        printf("After undefining, message is no longer defined.\n");
    #endif

    return 0;
}
