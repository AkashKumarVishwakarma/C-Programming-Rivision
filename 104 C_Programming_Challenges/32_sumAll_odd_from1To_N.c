// Create a program to sum all odd numbers from 1 to a specified number N.

#include<stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a positive integer N: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        if(i % 2 != 0) {
            sum += i;
        }
    }

    printf("Sum of all odd numbers from 1 to %d is: %d\n", n, sum);
    return 0;
}