// Write a program that continuously reads integers from the user and prints their squares. Use an infinite loop and a break statement to exit when a special number(e.g., -1) is entered.

#include <stdio.h>

int main() {
    int num;

    while (1) {
        printf("Enter a number (-1 to quit): ");
        scanf("%d", &num);

        if (num == -1) {
            break;
        }

        printf("Square of %d is %d\n", num, num * num);
    }

    return 0;
}