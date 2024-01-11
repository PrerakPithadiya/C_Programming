#include<stdio.h>

int isEven(int n);

int main() {
	int n;
	printf("Enter the Number : ");
	scanf("%d", &n);
	if (isEven(n)) {
		printf("The given Number '%d' is : Even", n);
	} else {
		printf("The given Number '%d' is : Odd", n);
	}
	return 0;
}

int isEven(int n) {
	return n % 2 == 0;
}
