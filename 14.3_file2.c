#include<stdio.h>
#include "14.1_extern.h"

int main(){
  counter = 20;  //Modify the global Variable
  printf("COunt from main = %d\n", counter);
  printCounter();

  return 0;
}