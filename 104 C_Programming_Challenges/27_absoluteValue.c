// Create a program to calculate the absolute value of a given integer
// using ternary operator.

#include<stdio.h>

int main(){

  int number;
  printf("Please enter a number :");
  scanf("%d", &number);

  printf("%d is the absolute value of given number.", (number>0 ? number : -number));


  return 0;
}