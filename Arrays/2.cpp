#include<stdio.h>

void printArray(int arr[], int n);

int main() {
	int n = 5;
	int arr[n], brr[n];
	printf("enter the element of an array : \n");
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	for (int i = 0; i < n; i++) {
		brr[i] = arr[i];
	}
	
	printf("\n\narray A is : \n");
	printArray(arr, n);
	
	printf("\n\narray B is : \n");
	printArray(brr, n);
	return 0;
}

void printArray(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}