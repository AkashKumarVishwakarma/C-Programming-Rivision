// Write a progarme to change the value of an integer variable using a pointer and the * operator.

#include <stdio.h>
int main() {
    int num;
    int *ptr = &num; // Declare a pointer and assign it the address of the integer variable

    printf("Welcome to showcasing changing integer values using pointers.\n");
    printf("Enter an integer: ");
    scanf("%d", ptr);

    printf("Value of num using pointer before change: %d\n", *ptr);
    printf("Value of num before change: %d\n", num);
    
    // Change the value of num using the pointer
    *ptr = *ptr + 10; // For example, adding 10 to the current value

    printf("Value of num using pointer after change: %d\n", *ptr);
    printf("Value of num after change: %d\n", num);
    return 0;
}