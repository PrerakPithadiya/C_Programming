#include<stdio.h>

float calcAverage(int a, int b, int c);

int main() {
	int a, b, c;
	printf("Enter the First Number : ");
	scanf("%d", &a);
	printf("Enter the Second Number : ");
	scanf("%d", &b);
	printf("Enter the Third Number : ");
	scanf("%d", &c);
	float avg = calcAverage(a, b, c);
	printf("\n\nThe Average is : %.2f", avg);
	return 0;
}

float calcAverage(int a, int b, int c) {
	return (a + b + c) / 3.0;
}
