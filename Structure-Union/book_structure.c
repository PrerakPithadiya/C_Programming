#include <stdio.h>

// Define the structure named book
struct book {
    char name[100];
    char title[100];
    float price;
    char publication[100];
};

int main() {
    // Declare a variable of type book
    struct book myBook;

    // Initialize the members of myBook
    strcpy(myBook.name, "John Doe");
    strcpy(myBook.title, "Introduction to Programming");
    myBook.price = 29.99;
    strcpy(myBook.publication, "ABC Publications");

    // Print the details of myBook
    printf("Name: %s\n", myBook.name);
    printf("Title: %s\n", myBook.title);
    printf("Price: $%.2f\n", myBook.price);
    printf("Publication: %s\n", myBook.publication);

    return 0;
}
