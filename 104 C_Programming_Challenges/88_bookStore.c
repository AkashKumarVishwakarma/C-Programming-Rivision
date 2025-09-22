// Create a program where you need to store process data for a Book with attributes like title, author, and price, demonstrating why a structure is more suitable than separate variables.

#include <stdio.h>

int main() {
    // Define a structure to hold book information
    struct Book {
        char title[3][100];
        char author[3][100];
        float price[3];
    };

    // Create an instance of the Book structure
    struct Book myBook;

    // Input book details from the user
    for (size_t i = 0; i < 3; i++)
    {
        printf("Enter book %zu title: ", i + 1);
        fgets(myBook.title[i], sizeof(myBook.title[i]), stdin);

        printf("Enter book %zu author: ", i + 1);
        fgets(myBook.author[i], sizeof(myBook.author[i]), stdin);

        printf("Enter book %zu price: ", i + 1);
        scanf("%f", &myBook.price[i]);
        getchar();  // Consume the newline character left by scanf
    }
    
    

    // Display the book details

    for (size_t i = 0; i < 3; i++)
    {
        printf("\nBook %zu Details:\n", i + 1);
        printf("Title: %s", myBook.title[i]);
        printf("Author: %s", myBook.author[i]);
        printf("Price: $%.2f\n", myBook.price[i]);
    }
  
    return 0;
}