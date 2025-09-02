// Create a program that computes the sum of the digits of an integer.

#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);

    int copy_num = n;

    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }

    printf("Sum of digits of %d is = %d\n", copy_num, sum);
    return 0;
}