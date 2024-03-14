#include<stdio.h>

int max(int a, int b);

int main() {
	int a, b, c;
	printf("Enter the First Number : ");
	scanf("%d", &a);
	printf("Enter the Second Number : ");
	scanf("%d", &b);
	printf("Enter the Third Number : ");
	scanf("%d", &c);
	int maxNum = max(max(a, b), c);
	printf("\n\nThe Maximum Number is : %d", maxNum);
	return 0;
}

int max(int a, int b) {
	return (a > b) ? a : b;
}
