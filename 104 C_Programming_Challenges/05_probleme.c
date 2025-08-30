//Create a program that declares one variable of each of the fundamental data types(int, float, double, char) and print using their size sizeof() operator.

#include<stdio.h>

int main(){

  int a;
  float b;
  double c;
  char d;

  printf("Size of int: %zu bytes\n", sizeof(a));
  printf("Size of float: %zu bytes\n", sizeof(b));
  printf("Size of double: %zu bytes\n", sizeof(c));
  printf("Size of char: %zu bytes\n", sizeof(d));

  return 0;
}
