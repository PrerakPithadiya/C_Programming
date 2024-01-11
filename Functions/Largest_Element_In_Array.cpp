#include<stdio.h>

void inputElements(int arr[], int n);
int maxElement(int arr[], int n);

int main() {
	int n;
	printf("Enter the Size of an Array : ");
	scanf("%d", &n);
	int arr[n];
	inputElements(arr, n);
	int maxEle = maxElement(arr, n);
	printf("\nThe Maximum Element in an Array is : %d", maxEle);
	return 0;
}

void inputElements(int arr[], int n) {
	printf("\nEnter %d Elements : \n");
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
}

int maxElement(int arr[], int n) {
	int max = arr[0];
	for (int i = 1; i < n; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	return max;
}
