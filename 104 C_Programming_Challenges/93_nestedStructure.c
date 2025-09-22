// Write a function where the Student structure also has books they have borrowed inside, showing nested structure usage.

#include <stdio.h>
#include <string.h>

struct Book {
    char title[100];
    char author[100];
    int year;
};

// Define the Student structure with a nested Book structure
struct Student {
    int id;
    char name[100];
    int year;
    float gpa;
    struct Book borrowedBooks[5]; // Array to hold borrowed books
    int bookCount; // Number of books borrowed
};

// Function to modify the student's GPA
void modifyStudentGPA(struct Student *student, float newGPA) {
    if (student != NULL) {
        student->gpa = newGPA;
    }
}

int main() {
    // Create and initialize a Student structure
    struct Student student1 = {1, "Akash Kumar", 3, 7.15, {}, 0};

    // Add borrowed books to the student
    struct Book book1 = {"The C Programming Language", "Kernighan and Ritchie", 1978};
    struct Book book2 = {"Clean Code", "Robert C. Martin", 2008};

    student1.borrowedBooks[0] = book1;
    student1.borrowedBooks[1] = book2;
    student1.bookCount = 2;

    // Modify the student's GPA
    modifyStudentGPA(&student1, 3.8);

    // Print the updated student information
    printf("ID: %d\n", student1.id);
    printf("Name: %s\n", student1.name);
    printf("Year: %d\n", student1.year);
    printf("GPA: %.2f\n", student1.gpa);
    
    // Print borrowed books information
    printf("Borrowed Books:\n");
    for (int i = 0; i < student1.bookCount; i++) {
        printf("  Title: %s, Author: %s, Year: %d\n", 
               student1.borrowedBooks[i].title, 
               student1.borrowedBooks[i].author, 
               student1.borrowedBooks[i].year);
    }

    return 0;
}