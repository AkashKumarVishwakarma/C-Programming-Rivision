// Create a programe to find the minimum of two numbers using ternary operator.

#include<stdio.h>

int main(){

  int num1, num2;
  printf("Enter first number: ");
  scanf("%d", &num1);
  printf("Enter second number: ");
  scanf("%d", &num2);

  int min = (num1 < num2) ? num1 : num2;
  printf("The minimum number is: %d\n", min);

  return 0;
}