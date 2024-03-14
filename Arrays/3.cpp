#include<stdio.h>

int main() {
	int n = 10, min = 9999999999;
	int arr[n];
	printf("enter the elements : \n");
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
	}
	printf("\n\nthe minimum element is : %d\n", min);
	return 0;
}