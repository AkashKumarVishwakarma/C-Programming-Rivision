// Initialize an array of Book structures with diffrent data for each book using designated initializers.

#include <stdio.h>

int main() {
    // Define a structure to hold book information
    struct Book {
        char title[100];
        char author[100];
        float price;
    };

    // Create and initialize an array of Book structures using designated initializers
    struct Book library[3] = {
        {.title = "The Great Gatsby", .author = "F. Scott Fitzgerald", .price = 10.99},
        {.title = "1984", .author = "George Orwell", .price = 8.99},
        {"To Kill a Mockingbird", "Harper Lee", 12.49}
    };

    // Display the book details
    for (size_t i = 0; i < 3; i++) {
        printf("Book %zu Details:\n", i + 1);
        printf("Title: %s\n", library[i].title);
        printf("Author: %s\n", library[i].author);
        printf("Price: $%.2f\n\n", library[i].price);
    }

    return 0;
}