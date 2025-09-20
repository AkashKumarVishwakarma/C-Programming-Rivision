// Create a program to find the maximum and minimum element in an array.

#include <stdio.h>
int main() {
    int i, max, min, max_index, min_index;

    int arr[10] = {34, 15, 88, 2, 67, 45, 23, 90, 11, 5}; // Example array

    // Initialize max and min with the first element of the array
    max = arr[0];
    min = arr[0];
    min_index = 0;
    max_index = 0;

    // Find maximum and minimum elements in the array
    for(i = 1; i < 10; i++) {
        if(arr[i] > max) {
            max = arr[i];
            max_index = i;
        }
        if(arr[i] < min) {
            min = arr[i];
            min_index = i;
        }
    }

    printf("Array elements are:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    // Output the results
    printf("The maximum element in the array is: %d at index %d\n", max, max_index);
    printf("The minimum element in the array is: %d at index %d\n", min, min_index);

    return 0;
}