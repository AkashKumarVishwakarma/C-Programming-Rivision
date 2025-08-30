// Create a program to print the area of a circle by inputting its radius.

#include <stdio.h>

int main() {
    float radius;
    const float PI = 3.14159;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    float area = PI * radius * radius;
    printf("The area of the circle is: %.2f cm*cm\n", area);

    return 0;
}