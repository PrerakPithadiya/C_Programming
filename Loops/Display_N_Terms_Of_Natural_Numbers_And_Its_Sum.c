#include<stdio.h>
int main(){
    int n, sum = 0;
    printf("Enter the Number : ");
    scanf("%d", &n);
    printf("\nThe First %d Natural Number is :\n[", n);
    for(int i = 1; i <= n; i++){
        printf("%d", i);
        if(i < n){
            printf(", ");
        }
        sum += i;
    }
    printf("]\n\n");
    printf("The Sum of Natural Number upto %d terms is : %d\n", n, sum);
    return 0;
}