#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to check if a string is a palindrome
bool isPalindrome(char str[]) {
    int length = strlen(str), i;

    // Compare characters from start and end of the string
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return false; // Not a palindrome
        }
    }

    return true; // Palindrome
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // Check if the input string is a palindrome
    if (isPalindrome(str)) {
        printf("The string \"%s\" is a palindrome.\n", str);
    } else {
        printf("The string \"%s\" is not a palindrome.\n", str);
    }

    return 0;
}