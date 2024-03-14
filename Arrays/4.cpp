#include<stdio.h>

int main() {
	int r = 3;
	int c = 2;
	int mat[r][c];
	printf("enter matrix elements : \n");
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			scanf("%d", &mat[i][j]);
		}
	}
	
	printf("\n\nthe elements of matrix are : \n");
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	return 0;
}