#include<stdio.h>

void swap(int, int);

int factorial(int);
int main(){

  int x = 7;
  int y = 4;

  // printf("x : %d, y : %d\n", x, y);
  // swap(x, y);
  // printf("x : %d, y : %d", x, y);

  printf("factorial of %d is %d\n", 0, factorial(0));
  printf("factorial of %d is %d\n", 1, factorial(1));
  printf("factorial of %d is %d\n", 5, factorial(5));
  printf("factorial of %d is %d\n", 6, factorial(6));

  return 0;
}

void swap(int first, int second){
  int temp = first;
  first = second;
  second = temp;
}

int factorial(int num){
  printf(".");
  if(num == 0 || num == 1){
    return 1;
  }
  return num * factorial(num-1);
}