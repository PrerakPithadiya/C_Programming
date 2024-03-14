#include<stdio.h>

void calcFactorial(int i, int n, int fact);

int main() {
	int n, i = 1, fact = 1;
	printf("Enter the Number : ");	
	scanf("%d", &n);
	calcFactorial(i, n, fact);
	return 0;
}

void calcFactorial(int i, int n, int fact) {
	if (i == n + 1) {
		printf("\n\nThe Factorial of %d is : %d", n, fact);
		return;
	}
	fact = fact * i;
	calcFactorial(i + 1, n, fact);
}
