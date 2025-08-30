//Create a prpgram to declare two integer variables, assign them values, and display their values.

#include <stdio.h>

int main(){

  int first, second;

  printf("Please enter the first number:");
  scanf("%d", &first);

  printf("Please enter the second number:");
  scanf("%d", &second);

  printf("First number = %d\n", first);
  printf("Second number = %d\n", second);

  return 0;
}
