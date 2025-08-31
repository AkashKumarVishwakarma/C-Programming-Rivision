// Create a program to calculate Perimeter of a rectangle.
// Perimeter of rectangle ABCD = A + B + C + D

#include<stdio.h>

int main(){

  float A, B, C, D, perimeter;

  printf("Enter length of First side: ");
  scanf("%f", &A);

  printf("Enter length of Second side: ");
  scanf("%f", &B);

  printf("Enter length of Third side: ");
  scanf("%f", &C);

  printf("Enter length of Fourth side: ");
  scanf("%f", &D);

  perimeter = A + B + C + D;

  printf("Perimeter of rectangle ABCD: %.2f\n", perimeter);

  return 0;
}
