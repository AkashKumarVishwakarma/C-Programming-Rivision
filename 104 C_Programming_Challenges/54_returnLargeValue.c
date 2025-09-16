// Create a function max that takes two float arguments and returns the large value.

#include <stdio.h>
float max(float, float);
int main() {
    float num1, num2;
    printf("Welcome to finding the max element\n");

    printf("Please, Enter the first number : ");
    scanf("%f", &num1);
    printf("Now, Enter the second number : ");
    scanf("%f", &num2);

    printf("The larger value between %.2f and %.2f is: %.2f\n", num1, num2, max(num1, num2));
    printf("The larger value between %.2f and %.2f is: %.2f\n", 7.7, 9.9, max(7.7, 9.9));
    return 0;   
}
float max(float a, float b) {
    return (a > b) ? a : b;
}
