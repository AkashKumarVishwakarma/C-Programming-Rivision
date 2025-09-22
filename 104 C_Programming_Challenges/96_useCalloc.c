// Use calloc to allocate an array for a set of char characters representing a sentence, ensuring all the memory is initialized to zero.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int numChars;
    char *sentence;

    // Ask the user for the number of characters in the sentence
    printf("Enter the number of characters in the sentence: ");
    scanf("%d", &numChars);

    // Dynamically allocate memory for the specified number of characters using calloc
    sentence = (char *)calloc(numChars + 1, sizeof(char)); // +1 for null terminator
    if (sentence == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Exit if memory allocation fails
    }

    // Clear the input buffer before reading the sentence
    while (getchar() != '\n');

    // Prompt the user to enter the sentence
    printf("Enter the sentence: ");
    fgets(sentence, numChars + 1, stdin); // Read up to numChars characters

    // Print the stored sentence
    printf("You entered: %s\n", sentence);

    // Free the allocated memory
    free(sentence);
    sentence = NULL; // Set pointer to NULL after freeing

    return 0;
}