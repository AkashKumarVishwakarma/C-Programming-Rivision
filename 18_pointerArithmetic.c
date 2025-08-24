#include<stdio.h>

int sumArray(int *arr, int size);

int main(){

  int myArray[] = {1, 2, 3, 4, 5};
  int size = sizeof(myArray) / sizeof(myArray[0]);

  int total = sumArray(myArray, size);
  printf("The sum of the array elements is: %d\n", total);

  return 0;
}

int sumArray(int *arr, int size){
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    sum += arr[i];
  }
  return sum;
}