// Write a program that asks the user for a filename, attempts to open it, and reports whether the operation was successful or not.

#include <stdio.h>

int main() {
    char filename[100];
    FILE *file;

    // Ask the user for a filename
    printf("Enter the filename to open: ");
    scanf("%s", filename);

    // Attempt to open the file
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Failed to open file: %s\n", filename);
        return 1; // Exit if file opening fails
    }

    printf("File opened successfully: %s\n", filename);

    // Close the file
    fclose(file);
    return 0;
}