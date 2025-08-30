// Create a program to swap two numbers.

#include<stdio.h>

int main(){

  int first_number, second_number, temp;
  printf("Enter first number: ");
  scanf("%d", &first_number);

  printf("Now, enter second number: ");
  scanf("%d", &second_number);

  printf("Before swapping: First number: %d, Second number: %d.", first_number, second_number);

  temp = first_number;
  first_number = second_number;
  second_number = temp;

  printf("\nAfter swapping: First number: %d, Second number: %d.", first_number, second_number);

  return 0;
}