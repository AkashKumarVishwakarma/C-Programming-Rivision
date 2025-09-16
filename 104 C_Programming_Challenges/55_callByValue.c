// Demonstrate with a function increment that the original integer passed to it does not change after incrementing it inside the function.

#include <stdio.h>
void increment(int);
int main() {
    int num;
    printf("Welcome to demonstrating call by value\n");

    printf("Please, Enter an integer : ");
    scanf("%d", &num);
    printf("Before incrementing: %d\n", num);
    increment(num);
    printf("After incrementing: %d\n", num);
    return 0;   
}
void increment(int a) {
    a++;
    printf("Inside increment function: %d\n", a);
}