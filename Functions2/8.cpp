#include<stdio.h>
#include<string.h>

int isPalindromic(char str[]);

int main() {
	char str[50];
	printf("Enter the String : ");
	gets(str);
	if(isPalindromic(str)) {
		printf("\nThe String is Palindromic!");
	} else {
		printf("\nThe String is not Palindromic!");
	}
	return 0;
}

int isPalindromic(char str[]) {
	int i = 0, j = strlen(str) - 1;
	while (i < j) {
		if (str[i] != str[j]) {
			return 0;
		}
		i++;
		j--;
	}
	return 1;
}
