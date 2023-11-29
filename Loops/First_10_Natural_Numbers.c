#include<stdio.h>
int main(){
    printf("The First 10 Natural Numbers are :\n[");
    for(int i = 1; i <= 10; i++){
        printf("%d", i);
        if(i < 10){
            printf(", ");
        }
    }
    printf("]\n");
    return 0;
}