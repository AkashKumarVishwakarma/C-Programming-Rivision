// Create a program to find the Greatest Common Divisor(GCD) of two integers.

#include <stdio.h>

int main(){

  int num1, num2, gcd;

  printf("Enter first integer: ");
  scanf("%d", &num1);
  printf("Enter second integer: ");
  scanf("%d", &num2);

  // Find the lower number
  int lower = (num1 < num2) ? num1 : num2;

  // Find GCD
  while (lower > 0) {
      if (num1 % lower == 0 && num2 % lower == 0) {
          gcd = lower;
          break;
      }
      lower--;
  }

  printf("GCD of %d and %d = %d\n", num1, num2, gcd);
  return 0;
}