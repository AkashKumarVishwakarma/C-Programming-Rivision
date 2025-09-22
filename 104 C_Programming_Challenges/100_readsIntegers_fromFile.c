// Create a program that reads integers from a file and calculates their sum.

#include <stdio.h>

int main() {
    char filename[100];
    FILE *file;
    int number, sum = 0;

    // Ask the user for a filename
    printf("Enter the filename to read integers from: ");
    scanf("%s", filename);

    // Attempt to open the file
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Failed to open file: %s\n", filename);
        return 1; // Exit if file opening fails
    }

    // Read integers from the file and calculate their sum
    while (fscanf(file, "%d", &number) == 1) {
        sum += number;
    }

    // Close the file
    fclose(file);

    // Print the sum of the integers
    printf("The sum of the integers in the file is: %d\n", sum);
    return 0;
}