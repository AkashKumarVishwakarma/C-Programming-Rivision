// Create a programe that uses malloc to dynamically allocate an array for a specified number of float values entered by the user and then stores user-entered numbers into it.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int numValues;
    float *values;

    // Ask the user for the number of float values
    printf("Enter the number of float values you want to store: ");
    scanf("%d", &numValues);

    // Dynamically allocate memory for the specified number of float values
    values = (float *)malloc(numValues * sizeof(float));
    if (values == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Exit if memory allocation fails
    }

    // Prompt the user to enter the float values
    printf("Enter %d float values:\n", numValues);
    for (int i = 0; i < numValues; i++) {
        printf("Value %d: ", i + 1);
        scanf("%f", &values[i]);
    }

    // Print the stored float values
    printf("You entered the following float values:\n");
    for (int i = 0; i < numValues; i++) {
        printf("Value %d: %.2f\n", i + 1, values[i]);
    }

    // Free the allocated memory
    free(values);
    values = NULL; // Set pointer to NULL after freeing

    return 0;
}