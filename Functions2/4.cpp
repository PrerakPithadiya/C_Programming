#include<stdio.h>

void changeValue(int arr[]);
void printArray(int arr[], int n);

int main() {
	int arr[] = {1, 2, 3};
	int n = 3;
	printf("Before Calling the Function : \n");
	printArray(arr, n);
	changeValue(arr);
	printf("\nAfter Calling the Function : \n");
	printArray(arr, n);
	return 0;
}

void changeValue(int arr[]) {
	arr[0] = 4;
	arr[1] = 5;
	arr[2] = 6;
}

void printArray(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}
