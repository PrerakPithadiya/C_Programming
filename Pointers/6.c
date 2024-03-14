#include <stdio.h>

int main() {
    int num = 10;
    float fnum = 25.5;
    char ch = 'A';

    // Declare and initialize void pointers
    void *ptr1 = &num;
    void *ptr2 = &fnum;
    void *ptr3 = &ch;

    // Dereference void pointers using typecasting
    printf("Value of integer: %d\n", *((int*)ptr1));
    printf("Value of float: %f\n", *((float*)ptr2));
    printf("Value of character: %c\n", *((char*)ptr3));

    return 0;
}