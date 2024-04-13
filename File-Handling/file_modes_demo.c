#include <stdio.h>

int main() {
    FILE *file;
    char filename[50];
    char data[100];

    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open file in read mode
    file = fopen(filename, "r");
    if (file != NULL) {
        printf("File opened successfully in read mode.\n");
        fclose(file);
    } else {
        printf("Failed to open file in read mode.\n");
    }

    // Open file in write mode
    file = fopen(filename, "w");
    if (file != NULL) {
        printf("File opened successfully in write mode.\n");
        printf("Enter data to write into the file: ");
        scanf(" %[^\n]", data);
        fprintf(file, "%s", data);
        fclose(file);
        printf("Data written to the file.\n");
    } else {
        printf("Failed to open file in write mode.\n");
    }

    // Open file in append mode
    file = fopen(filename, "a");
    if (file != NULL) {
        printf("File opened successfully in append mode.\n");
        printf("Enter data to append into the file: ");
        scanf(" %[^\n]", data);
        fprintf(file, "\n%s", data);
        fclose(file);
        printf("Data appended to the file.\n");
    } else {
        printf("Failed to open file in append mode.\n");
    }

    return 0;
}
