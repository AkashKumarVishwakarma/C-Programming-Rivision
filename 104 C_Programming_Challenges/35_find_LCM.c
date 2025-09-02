// Create a program to find the Least Common Multiple(LCM) of two numbers.
#include <stdio.h>

int main(){

  int num1, num2, lcm;

  printf("Enter first integer: ");
  scanf("%d", &num1);
  printf("Enter second integer: ");
  scanf("%d", &num2);

  // Find the greater number
  int greater = (num1 > num2) ? num1 : num2;

  // Find LCM
  while (1) {
      if (greater % num1 == 0 && greater % num2 == 0) {
          lcm = greater;
          break;
      }
      greater++;
  }

  printf("LCM of %d and %d = %d\n", num1, num2, lcm);
  return 0;
}