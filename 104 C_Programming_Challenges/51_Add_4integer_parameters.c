// Write a function that adds that takes 4 int parameters and returns the sum.

#include <stdio.h>

int add(int, int, int, int);

int main() {
    int result = add(1, 2, 3, 4);
    printf("The sum is: %d\n", result);
    printf("The sum is: %d\n", add(10, 20, 30, 40));
    return 0;   
}

int add(int a, int b, int c, int d) {
    return a + b + c + d;
}