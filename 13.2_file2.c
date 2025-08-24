#include <stdio.h>
// #include <

extern int count;  // Declaration (no memory allocated)
void printCount(); // function prototype from file.c

int  main(){
  count = 20;  // Modifying the global variable from 13.1_file1.c
  printf("Count from main = %d\n", count);
  printCount();

  return 0;
}