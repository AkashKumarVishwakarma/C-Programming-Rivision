// Create a programe to check whether a given number is prime using while loop.

#include <stdio.h>

int main() {
    int num, i = 2;
    int isPrime = 1; // Assume number is prime

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 2) {
        isPrime = 0;
    } else {
        while (i <= num / 2) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
            i++;
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}