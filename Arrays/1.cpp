#include<stdio.h>

int main() {
	int n = 5;
	int arr[n];
	printf("enter the array elements : \n");
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	printf("\nthe elements of an array arr : \n");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}