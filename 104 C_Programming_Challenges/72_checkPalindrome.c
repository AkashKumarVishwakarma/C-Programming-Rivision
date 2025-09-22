// Create a program to check is the array is palindrome or not.

#include <stdio.h>
#include <stdbool.h>
bool is_palindrome(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        if (arr[start] != arr[end]) {
            return false; // Not a palindrome
        }
        start++;
        end--;
    }
    return true; // Is a palindrome
}
int main() {
    int arr[] = {1, 2, 3, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    if (is_palindrome(arr, size)) {
        printf("The array is a palindrome.\n");
    } else {
        printf("The array is not a palindrome.\n");
    }

    return 0;
}