// Create a program to return a new array deleting a specific element.

#include <stdio.h>

void delete_element(int arr[], int size, int element) {
    int i, j;
    for (i = 0; i < size; i++) {
        if (arr[i] == element) {
            // Shift elements to the left
            for (j = i; j < size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            size--;  // Reduce size
            i--;     // Check the same index again
        }
    }

    // Print the new array
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 3, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 3;

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Array after deleting %d: ", element);
    delete_element(arr, size, element);

    return 0;
}