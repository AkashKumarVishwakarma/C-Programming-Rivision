#include<stdio.h>

void swap(int*, int*);
int main(){

  int x = 4;
  int y = 84;

  printf("Befour swap: Value of x= %d, Value of y=%d.\n", x, y);
  swap(&x, &y);
  printf("After swap: Value of x= %d, Value of y=%d.\n", x, y);


  return 0;
}

void swap(int* ptr1, int* ptr2){
  printf("Value of ptr1=%d, value of ptr2=%d.\n", *ptr1, *ptr2);
  int temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = temp;
  printf("Value of ptr1=%d, value of ptr2=%d.\n", *ptr1, *ptr2);
}