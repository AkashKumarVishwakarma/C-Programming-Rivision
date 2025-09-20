// Create a program to check if the given array is sorted.

#include <stdio.h>

int is_sorted(int arr[], int size);
int main() {
    int arr1[6] = {2, 4, 6, 8, 10, 12}; // increasing array
    int arr2[6] = {12, 10, 8, 6, 4, 2}; // Decreasing order array
    int arr3[6] = {2, 4, 6, 8, 10, 9}; // Unsorted array

    
    if(is_sorted(arr1, 6)){
      printf("Array 1 is sorted\n");
    } else {
      printf("Array 1 is not sorted\n");
    }

    if(is_sorted(arr2, 6)){
      printf("Array 2 is sorted\n");
    } else {
      printf("Array 2 is not sorted\n");
    }

    if(is_sorted(arr3, 6)){
      printf("Array 3 is sorted\n");
    } else {
      printf("Array 3 is not sorted\n");
    }

    return 0;
}

int is_sorted(int arr[], int size){
  int increasing = 1; // Flag for increasing order
  int decreasing = 1; // Flag for decreasing order
  int i;
  for(i = 0; i < size - 1; i++) {
    if(arr[i] > arr[i + 1]) {
      increasing = 0;
    }
    if(arr[i] < arr[i + 1]) {
      decreasing = 0;
    }
  }
  return increasing || decreasing;
}