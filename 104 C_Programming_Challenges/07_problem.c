//Create a program to  print the area of a square by inputting its side length.

#include<stdio.h>

int main(){

  float side_length;
  printf("Enter the side length of the square: ");
  scanf("%f", &side_length);

  float area = side_length * side_length;
  printf("The area of the square is: %.2f cm*cm\n", area);

  return 0;
}