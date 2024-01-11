#include<stdio.h>

int isPrime (int n);

int main () {
	int n;
	printf("Enter the Number : ");
	scanf("%d", &n);
	if (isPrime(n) == 1) {
		printf("The given Number '%d' is Prime!", n);
	} else {
		printf("The given Number '%d' isn't Prime!'", n);
	}
	return 0;
}

int isPrime (int n) {
	if (n == 1) {
		return 0;
	} if (n == 2 || n == 3) {
		return 1;
	} if (n % 2 == 0 || n % 3 == 0) {
		return 0;
	} for (int i = 6; i * i <= n; i += 6) {
		if (n % i == 0 || n % (i + 2) == 0) {
			return 0;
		}
	}
	return 1;
}
