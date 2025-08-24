#include<stdio.h>

void incrementCounter(){
  //A static variable retains its value between function calls
  static int counter = 0;
  counter++;
  printf("Counter is %d \n", counter);
}

int main(){

  /*
  // register variable

  //Suggests storing counter in a register
  register int counter;
  for (counter = 0; counter < 5; ++counter)
  {
    printf("Counter is %d\n", counter);
  }

  //Note: Attempting to get the address of counter
  // like & counter, will cause a compile error
  */

  for (int i = 0; i < 3; i++)
  {
    //Each call will increment the counter
    incrementCounter();
  }
  //The counter retains its value between calls and is not reinitialized
  

  return 0;
}