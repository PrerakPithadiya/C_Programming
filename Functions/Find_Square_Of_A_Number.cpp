#include<stdio.h>

int findSquare(int n);

int main() {
	int n;
	printf("Enter the Number : ");
	scanf("%d", &n);
	int sqr = findSquare(n);
	printf("The Square of %d is : %d", n, sqr);
	return 0;
}

int findSquare(int n) {
	return n * n;
}
