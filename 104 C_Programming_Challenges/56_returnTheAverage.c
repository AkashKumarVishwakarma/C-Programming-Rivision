// Call a function get_average that takes five int numbers and returns the average.

#include <stdio.h>
float get_average(int, int, int, int, int);
int main() {
    int num1, num2, num3, num4, num5;
    printf("Welcome to finding the average of five numbers\n");

    printf("Please, Enter the first number : ");
    scanf("%d", &num1);
    printf("Now, Enter the second number : ");
    scanf("%d", &num2);
    printf("Now, Enter the third number : ");
    scanf("%d", &num3);
    printf("Now, Enter the fourth number : ");
    scanf("%d", &num4);
    printf("Finally, Enter the fifth number : ");
    scanf("%d", &num5);

    printf("The average of %d, %d, %d, %d and %d is: %.2f\n", num1, num2, num3, num4, num5, get_average(num1, num2, num3, num4, num5));
    printf("The average of %d, %d, %d, %d and %d is: %.2f\n", 10, 20, 30, 40, 50, get_average(10, 20, 30, 40, 50));
    return 0;   
}
float get_average(int a, int b, int c, int d, int e) {
    return (a + b + c + d + e) / 5.0;
}