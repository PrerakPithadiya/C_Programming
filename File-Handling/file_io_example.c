#include <stdio.h>

int main() {
    FILE *inputFile, *outputFile;
    char ch;

    // Open input file in write mode
    inputFile = fopen("input.txt", "w");
    if (inputFile == NULL) {
        printf("Error opening input file!\n");
        return 1;
    }

    // Prompt the user to enter data and write it to the input file
    printf("Enter data to write into the input file (type '#EOF' on a new line to stop):\n");
    while ((ch = getchar()) != EOF && ch != '#') {
        putc(ch, inputFile);
    }

    // Close the input file
    fclose(inputFile);

    // Open input file in read mode
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening input file!\n");
        return 1;
    }

    // Open output file in write mode
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error opening output file!\n");
        fclose(inputFile);
        return 1;
    }

    // Read characters from input file and write them to output file
    while ((ch = getc(inputFile)) != EOF) {
        putc(ch, outputFile);
    }

    // Close the files
    fclose(inputFile);
    fclose(outputFile);

    printf("Contents copied successfully from input.txt to output.txt!\n");

    return 0;
}
