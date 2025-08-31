// Create a program to calculate product of two floating points numbers.

#include<stdio.h>

int main(){

  float first_number, second_number, product;

  printf("Enter first floating point number: ");
  scanf("%f", &first_number);

  printf("Enter second floating point number: ");
  scanf("%f", &second_number);

  product = first_number * second_number;

  printf("Product of %.2f and %.2f is: %.2f\n", first_number, second_number, product);

  return 0;
}