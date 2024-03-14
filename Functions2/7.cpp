#include<stdio.h>

int isLeap(int year);

int main() {
	int year;
	printf("Enter the First Number : ");
	scanf("%d", &year);
	if (isLeap(year)) {
		printf("\nThe year is Leap!");
	} else {
		printf("\nThe year is not leap!");
	}
	return 0;
}

int isLeap(int year) {
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
