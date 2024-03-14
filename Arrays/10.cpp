#include<stdio.h>

int main() {
	int r1 = 2, c1 = 3;
	int r2 = 3, c2 = 2;
	
	if (c1 != r2) {
		printf("invalid input!!!");
		return 0;
	}
	
	int a[r1][c1], b[r2][c2], mul[r1][c2];
	printf("enter first matrix : \n");
	for (int i = 0; i < r1; i++) {
		for (int j = 0; j < c1; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	
	
	printf("\n\nenter second matrix : \n");
	for (int i = 0; i < r2; i++) {
		for (int j = 0; j < c2; j++) {
			scanf("%d", &b[i][j]);
		}
	}
	
	
	for (int i = 0; i < r1; i++) {
		for (int j = 0; j < c2; j++) {
			for (int k = 0; k < c1; k++) {
				mul[i][j] += (a[i][k] * b[k][j]);
			}
		}
	}
	
	
	printf("\n\nfinal matrix is : \n");
	for (int i = 0; i < r1; i++) {
		for (int j = 0; j < c2; j++) {
			printf("%d ", mul[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}