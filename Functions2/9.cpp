#include<stdio.h>

void pow(int i, int x, int y, int ans);

int main() {
	int x, y, i = 1, ans = 1;
	printf("Enter the Value of X : ");
	scanf("%d", &x);
	printf("Enter the Value of Y : ");
	scanf("%d", &y);
	pow(i, x, y, ans);
	return 0;
}

void pow(int i, int x, int y, int ans) {
	if (i == y + 1) {
		printf("\n\nThe Result is : %d", ans);
		return;
	}
	ans = ans * x;
	pow(i + 1, x, y, ans);
}
