#include <stdio.h>

// Define the structure named student
struct student {
    int std_id;
    char std_name[50];
    float std_percentage;
    int marks;
    int total;
};

int main() {
    // Declare structure variables for 3 students
    struct student student1, student2, student3;

    // Initializing data for student1
    student1.std_id = 1;
    strcpy(student1.std_name, "Alice");
    student1.std_percentage = 85.5;
    student1.marks = 425;
    student1.total = 500;

    // Initializing data for student2
    student2.std_id = 2;
    strcpy(student2.std_name, "Bob");
    student2.std_percentage = 78.9;
    student2.marks = 394;
    student2.total = 500;

    // Initializing data for student3
    student3.std_id = 3;
    strcpy(student3.std_name, "Charlie");
    student3.std_percentage = 91.2;
    student3.marks = 456;
    student3.total = 500;

    // Printing details of the students
    printf("Student 1: ID: %d, Name: %s, Percentage: %.2f, Marks: %d, Total: %d\n", student1.std_id, student1.std_name, student1.std_percentage, student1.marks, student1.total);
    printf("Student 2: ID: %d, Name: %s, Percentage: %.2f, Marks: %d, Total: %d\n", student2.std_id, student2.std_name, student2.std_percentage, student2.marks, student2.total);
    printf("Student 3: ID: %d, Name: %s, Percentage: %.2f, Marks: %d, Total: %d\n", student3.std_id, student3.std_name, student3.std_percentage, student3.marks, student3.total);

    return 0;
}
