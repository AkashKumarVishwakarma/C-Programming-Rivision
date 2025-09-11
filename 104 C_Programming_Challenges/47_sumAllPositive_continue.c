// Create a program using continue to sum all positive number entered by the user; skip any negative numbers.

#include <stdio.h>

int main() {
    int num, sum = 0;

    while (num != 0) {
        printf("Enter a number (zero to quit): ");
        scanf("%d", &num);

        if (num < 0) {
            continue;
        }

        sum += num;
    }

    printf("Sum of positive numbers: %d\n", sum);
    return 0;
}