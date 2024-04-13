#include <stdio.h>

// Define the structure named student
struct student {
    int std_id;
    char std_name[50];
    float std_percentage;
};

int main() {
    // Declare an array of structures for students
    struct student students[3];
    int i;

    // Initialize data for each student
    students[0].std_id = 1;
    strcpy(students[0].std_name, "Alice");
    students[0].std_percentage = 85.5;

    students[1].std_id = 2;
    strcpy(students[1].std_name, "Bob");
    students[1].std_percentage = 78.9;

    students[2].std_id = 3;
    strcpy(students[2].std_name, "Charlie");
    students[2].std_percentage = 91.2;

    // Print details of each student
    printf("Student Details:\n");
    for (i = 0; i < 3; i++) {
        printf("Student %d: ID: %d, Name: %s, Percentage: %.2f\n", i + 1, students[i].std_id, students[i].std_name, students[i].std_percentage);
    }

    return 0;
}
