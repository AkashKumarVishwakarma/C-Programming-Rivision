// Create a program to find the sum of two diagonal elements.

#include <stdio.h>
#define SIZE 3
int sum_of_diagonals(int arr[SIZE][SIZE]) {
    int primary_diagonal_sum = 0;
    int secondary_diagonal_sum = 0;

    for (int i = 0; i < SIZE; i++) {
        primary_diagonal_sum += arr[i][i];
        secondary_diagonal_sum += arr[i][SIZE - i - 1];
    }

    return primary_diagonal_sum + secondary_diagonal_sum;
}
int main() {
    int arr[SIZE][SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int total_sum = sum_of_diagonals(arr);

    printf("Sum of both diagonals: %d\n", total_sum);

    return 0;
}