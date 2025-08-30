// Create a program to input name of the person and respond with "Welcome NAME TO Coding Classes"
#include <stdio.h>

int main() {
    char name[20];
    printf("Enter your name: ");
    scanf("%19s", name);
    printf("Welcome, %s TO Coding Classes\n", name);
    return 0;
}