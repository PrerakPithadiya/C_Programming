#include <stdio.h>

int main() {
    FILE *file;
    int num1, num2;

    // Open file for writing
    file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    // Take input from the user
    printf("Enter two integers separated by a space: ");
    scanf("%d %d", &num1, &num2);

    // Write data to the file using fprintf
    fprintf(file, "%d %d", num1, num2);

    // Close the file
    fclose(file);

    // Open file for reading
    file = fopen("data.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    // Read data from the file using fscanf
    fscanf(file, "%d %d", &num1, &num2);

    // Close the file
    fclose(file);

    // Print the read data
    printf("Read data: %d %d\n", num1, num2);

    return 0;
}
