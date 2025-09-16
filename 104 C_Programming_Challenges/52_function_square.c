// Define a function square that takes an int and returns its square.

#include <stdio.h>
int square(int);
int main() {
    int num = 5;
    printf("The square of %d is: %d\n", num, square(num));
    printf("The square of %d is: %d\n", 10, square(10));
    return 0;   
}
int square(int n) {
    return n * n;
}