// Create a program to define a constant for the mathematical value pi(3.14159) and use it to calculate and print the circumference of a circle with a radius input from user.

#include <stdio.h>
// #define pi = 3.14159;

int main()
{
  const float PI = 3.14159;
  int radius;
  printf("Please enter the radius of the circle in cm: ");
  scanf("%d", &radius);

  printf("The circumference of your circle is: %.2f cm\n", 2 * PI * radius);

      return 0;
}