#include <stdio.h>

void reverseString(char str[]) {
    int length = 0, i;
    
    // Calculate the length of the string
    while (str[length] != '\0') {
        length++;
    }
    
    // Reverse the string by swapping characters
    for (i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // Reverse the input string
    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
