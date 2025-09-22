// Create a program to search an element in a 2-D array.

#include <stdio.h>
#include <stdbool.h>
#define ROWS 3
#define COLS 4
bool search_element(int arr[ROWS][COLS], int target) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (arr[i][j] == target) {
                return true;
            }
        }
    }
    return false;
}
int main() {
    int arr[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int target = 10;

    if (search_element(arr, target)) {
        printf("Element %d found in the array.\n", target);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}