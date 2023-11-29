#include<stdio.h>
int main(){
    int n = 10, sum = 0;

    // method - 1
    for(int i = 1; i <= 10; i++){
        sum += i;
    }

    // method - 2
    sum = (n * (n + 1)) / 2;

    printf("The Sum of First 10 Natural Numbers are : %d\n", sum);
    return 0;
}