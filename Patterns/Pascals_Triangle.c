#include <stdio.h>

int main() {
    int n = 5;
    int val = 0;
    int i, j;

    for (i = 1; i <= n; i++) {
        // Printing leading spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        val = 1;

        // Printing numbers in the row
        for (j = 1; j <= i; j++) {
            // Calculating the value based on previous value
            if (j > 1) {
                val = val * (i - j + 1) / (j - 1);
            }

            printf("%d ", val);
        }

        printf("\n");
    }

    return 0;
}

