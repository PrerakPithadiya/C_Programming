#include<stdio.h>

int calculateSumOfSeries(int n);
int factorial(int n);

int main() {
	int n;
	printf("Enter the Number of Terms : ");
	scanf("%d", &n);
	int sum = calculateSumOfSeries(n);
	printf("The Sum of Series is : %d", sum);
	return 0;
}

int calculateSumOfSeries(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += (factorial(i) / i);
	}
	return sum;
}

int factorial(int n) {
	int fact = 1;
	for (int i = 1; i <= n; i++) {
		fact *= i;
	}
	return fact;
}
