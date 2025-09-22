// Create a program to merge two sorted arrays.
#include <stdio.h>

void merge_arrays(int *arr1, int size1, int *arr2, int size2, int *merged) {
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // Copy any remaining elements from either array
    while (i < size1) {
        merged[k++] = arr1[i++];
    }
    while (j < size2) {
        merged[k++] = arr2[j++];
    }
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int merged[sizeof(arr1) / sizeof(arr1[0]) + sizeof(arr2) / sizeof(arr2[0])];

    merge_arrays(arr1, sizeof(arr1) / sizeof(arr1[0]), arr2, sizeof(arr2) / sizeof(arr2[0]), merged);

    printf("Merged array: ");
    for (int i = 0; i < sizeof(merged) / sizeof(merged[0]); i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}