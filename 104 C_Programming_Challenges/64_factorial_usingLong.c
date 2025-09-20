//Write a progarme to demonstrate the difference in range between long and long long by calculating the factorial of 20.

#include <stdio.h>

long long factorial(int);

int main(){

  int num;
  printf("Enter a number to find its factorial: ");
  scanf("%d", &num);

  long long result = factorial(num);
  printf("Factorial of %d is %lld\n", num, result);

  return 0;
}

long long factorial(int n){
  if(n==0 || n==1)
    return 1;
  else
    return n*factorial(n-1);
}