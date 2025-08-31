//Create a program that takes two numbers and show result of all arithmetic operators(+,-,*,/,%).

#include<stdio.h>

int main(){

  int first_number, second_number;

  printf("Enter first number: ");
  scanf("%d", &first_number);

  printf("Enter second number: ");
  scanf("%d", &second_number);

  printf("Addition: %d\n", first_number + second_number);
  printf("Subtraction: %d\n", first_number - second_number);
  printf("Multiplication: %d\n", first_number * second_number);
  printf("Division: %d\n", first_number / second_number);
  printf("Modulus: %d\n", first_number % second_number);

  return 0;
}