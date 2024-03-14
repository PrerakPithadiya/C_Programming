#include<stdio.h>

int main() {
	int r = 2, c = 3;
	int a[r][c], b[r][c], sum[r][c];
	
	printf("enter elements of first matrix : \n");
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	
	
	printf("\n\nenter elements of second matrix : \n");
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			scanf("%d", &b[i][j]);
		}
	}
	
	
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
	
	
	printf("\n\nsum of both matrices is : \n");
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			printf("%d ", sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}