#include<stdio.h>

void performOperations(int a, int b);

int main() {
	int a, b;
	printf("Enbter the first Number : ");
	scanf("%d", &a);
	printf("Enter the Second Number : ");
	scanf("%d", &b);
	performOperations(a, b);
	return 0;
}

void performOperations(int a, int b) {
	int sum = a + b;
	int sub = a - b;
	printf("\n\nThe Addition is : %d\n", sum);
	printf("The Subtraction is : %d", sub);
}