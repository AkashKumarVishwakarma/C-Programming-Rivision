// Create an array using calloc and fill it with random numbers, then use realloc to shrink the array size by half and print the remaining numbers.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    printf("Wellcome to the world of dynamic random numbers!\n");
    int *arr = (int*) calloc(10, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    srand(time(NULL)); // Seed the random number generator

    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 100; // Fill with random numbers with range 0-99
    }
    

    printf("\n Here are your random numbers:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }


    int *shrinked = (int*) realloc(arr, 5 * sizeof(int));
    if (shrinked == NULL) {
        printf("\nMemory reallocation failed\n");
        free(arr); // Free the original array if realloc fails
        arr = NULL; // Avoid dangling pointer
        return 1;
    }

    arr = shrinked; // Update arr to point to the resized memory block
    
    printf("\n Here are your shrinked random numbers:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);
    arr = NULL; // Avoid dangling pointer

    return 0;
}

