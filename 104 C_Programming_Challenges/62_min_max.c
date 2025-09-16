// Implement a void minmax(int *a, int *b, int *min, int *max) function that takes two integer pointers a and b as input and assigns the smaller value to min and the larger value to max using call by reference. Write a main function to test it with different values.

#include <stdio.h>
void minmax(int *a, int *b, int *min, int *max);
int main() {
    int num1, num2;
    int min, max;

    printf("Welcome to Min-Max Finder using Pointers.\n");
    printf("Please, Enter first integers: ");
    scanf("%d", &num1);
    printf("Now, Enter second integers: ");
    scanf("%d", &num2);

    minmax(&num1, &num2, &min, &max);

    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);

    return 0;
}
void minmax(int *a, int *b, int *min, int *max) {
    if (*a < *b) {
        *min = *a;
        *max = *b;
    } else {
        *min = *b;
        *max = *a;
    }
}
