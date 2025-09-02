// write a function that calculates the factorial of a given number.

#include<stdio.h>
int main(){

  int number;
  printf("Please enter a number: ");
  scanf("%d", &number);

  unsigned long long factorial = 1;
  if(number < 0){
    printf("Factorial is not defined for negative numbers.\n");
    return 1;
  }
  else if(number == 0){
    printf("Factorial of 0 = 1\n");
    return 0;
  }
  else{
    for (int i = 1; i <= number; i++)
    {
      factorial *= i;
    }
  }

  printf("Factorial of %d = %llu\n", number, factorial);
  return 0;
}
