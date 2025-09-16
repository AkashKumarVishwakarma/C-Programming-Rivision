// Declare a pointer to a char and use it to read and print a character enteres by the user.

#include <stdio.h>
int main() {
    char ch;
    char *ptr = &ch; // Declare a pointer and assign it the address of the char variable

    printf("Welcome to showcasing character pointers.\n");
    printf("Enter a character: ");
    scanf(" %c", ptr); // Note the space before %c to consume any leading whitespace

    printf("Value of ch using pointer: %c\n", *ptr);
    printf("Value of ch : %c\n", ch);
    printf("Address of ch using pointer: %p\n", (void*)ptr);
    return 0;
}