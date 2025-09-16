// Write a programe that declares an integer variable and a pointer to it. Assign a value and print it using the pointer.

#include <stdio.h>
int main() {
    int num;
    int *ptr = &num; // Declare a pointer and assign it the address of the integer variable

    printf("Welcome to showcasing integer pointers.\n");
    printf("Enter an integer: ");
    scanf("%d", ptr);

    printf("Value of num using pointer: %d\n", *ptr);
    printf("Value of num : %d\n", num);
    printf("Address of num using pointer: %p\n", (void*)ptr);
    return 0;
}