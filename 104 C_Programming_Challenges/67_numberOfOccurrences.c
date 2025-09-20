// Create a program to find number of occurrences of an element in an array.

#include <stdio.h>
int main() {
    int n, i, count = 0, element;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    // Input elements of the array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Input the element to find occurrences
    printf("Enter the element to find occurrences: ");
    scanf("%d", &element);

    // Count occurrences of the element
    for(i = 0; i < n; i++) {
        if(arr[i] == element) {
            count++;
        }
    }

    // Output the result
    printf("The element %d occurs %d times in the array.\n", element, count);

    return 0;
}