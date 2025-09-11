// Develop a programe that calculates the sum of all numbers entered by a user until the user enters 0. The total sum should the be displayed.

#include <stdio.h>
int main() { 
    int number, sum = 0;

    
    do {
        printf("Enter numbers to sum (enter 0 to stop):\n");
        scanf("%d", &number);
        sum += number;
    } while (number != 0);

    printf("The total sum is: %d\n", sum);

    return 0;
}