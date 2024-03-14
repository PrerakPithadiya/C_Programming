#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "World";
    char str3[] = "Hello";
    
    int result1 = strcmp(str1, str2);
    int result2 = strcmp(str1, str3);
    
    if (result1 == 0) {
        printf("str1 and str2 are equal\n");
    } else if (result1 < 0) {
        printf("str1 is less than str2\n");
    } else {
        printf("str1 is greater than str2\n");
    }
    
    if (result2 == 0) {
        printf("str1 and str3 are equal\n");
    } else if (result2 < 0) {
        printf("str1 is less than str3\n");
    } else {
        printf("str1 is greater than str3\n");
    }
    
    return 0;
}
