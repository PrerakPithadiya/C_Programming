#include<stdio.h>

void changeValue(int n);

int main() {
	int n = 5;
	printf("Bofore calling the Function : %d\n\n", n);
	changeValue(n);
	printf("After calling the Function : %d", n);
	return 0;
}

void changeValue(int n) {
	n = 7;
}
