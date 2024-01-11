#include<stdio.h>

int main() {
	int a, b;
	printf("Enter the Value of 'A' : ");
	scanf("%d", &a);
	printf("Enter the Value of 'B' : ");
	scanf("%d", &b);
	
	printf("\nBefore Swapping...\n");
	printf("The Value of 'A' is : %d\n", a);
	printf("The Value of 'B' is : %d\n", b);
	
	int temp = a;
	a = b;
	b = temp;
	
	printf("\nAfter Swapping...\n");
	printf("The Value of 'A' is : %d\n", a);
	printf("The Value of 'B' is : %d", b);
	return 0;
}
