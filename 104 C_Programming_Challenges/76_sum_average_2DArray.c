// Create a program to do sum and average of all elements in a 2-array.


#include <stdio.h>
#define ROWS 3
#define COLS 4
void sum_and_average(int arr[ROWS][COLS], int *sum, float *average) {
    *sum = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            *sum += arr[i][j];
        }
    }
    *average = (float)(*sum) / (ROWS * COLS);
}
int main() {
    int arr[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int sum;
    float average;

    sum_and_average(arr, &sum, &average);

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}