// Given an integer value, convert it to a floating-point value and print both.

#include<stdio.h>

int main(){

  int int_value;
  float float_value;

  printf("Enter an integer value: ");
  scanf("%d", &int_value);

  float_value = (float)int_value;

  printf("Integer value: %d\n", int_value);
  printf("Floating-point value: %.2f\n", float_value);

  return 0;
}