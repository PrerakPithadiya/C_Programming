#include<stdio.h>

int main() {
	int r = 2;
	int c = 3;
	int h = 4;
	int arr[r][c][h];
	
	printf("enter the elements : \n");
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			for (int k = 0; k < h; k++) {
				scanf("%d", &arr[i][j][k]);
			}
		}
	}

	printf("\n\nelements of multidimantional array are : \n");
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			for (int k = 0; k < h; k++) {
				printf("%d ", arr[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}