// Create a programe to find the sum and average of all elements in an array.

#include <stdio.h>
int main() {
    int n, i;
    float sum = 0.0, average;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    // Input elements of the array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i]; // Calculate sum
    }

    average = sum / n; // Calculate average

    // Output the results
    printf("Sum of all elements: %.2f\n", sum);
    printf("Average of all elements: %.2f\n", average);

    return 0;
}