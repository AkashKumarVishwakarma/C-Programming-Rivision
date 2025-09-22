// Write a function that accepts a pointer to a Student structure with fields for id, name, year, gpa and modifies its grades.

#include <stdio.h>
#include <string.h>

// Define the Student structure
struct Student {
    int id;
    char name[100];
    int year;
    float gpa;
};

// Function to modify the student's GPA
void modifyStudentGPA(struct Student *student, float newGPA) {
    if (student != NULL) {
        student->gpa = newGPA;
    }
}

int main() {
    // Create and initialize a Student structure
    struct Student student1 = {1, "Akash Kumar", 3, 7.15};

    // Modify the student's GPA
    modifyStudentGPA(&student1, 3.8);

    // Print the updated student information
    printf("ID: %d\n", student1.id);
    printf("Name: %s\n", student1.name);
    printf("Year: %d\n", student1.year);
    printf("GPA: %.2f\n", student1.gpa);

    return 0;
}
