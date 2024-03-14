#include<stdio.h>

void multiply(int a, int b, int i, int ans);

int main() {
	int a, b, i = 1, ans = 0;
	printf("Enter the Value of X : ");
	scanf("%d", &a);
	printf("Enter the Value of Y : ");
	scanf("%d", &b);
	multiply(a, b, i, ans);
	return 0;
}

void multiply(int a, int b, int i, int ans) {
	if (i == b + 1) {
		printf("\n\nThe Multiplication of both Number is : %d", ans);
		return;
	}
	ans = ans + a;
	multiply(a, b, i + 1, ans);
}
