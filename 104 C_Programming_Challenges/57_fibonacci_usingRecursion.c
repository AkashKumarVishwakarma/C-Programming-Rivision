// Create a programe using recursion to display the Fibonacci series upto a certain number.

#include <stdio.h>
int fibonacci(int n);
int main() {
    int n, i;
    printf("Welcome to the Fibonacci series generator using recursion\n");
    printf("Please, Enter the number of terms you want to display: ");
    scanf("%d", &n);
    printf("Fibonacci series upto %d terms:\n", n);
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}