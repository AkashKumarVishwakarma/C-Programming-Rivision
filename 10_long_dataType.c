#include<stdio.h>

// int factorial(int);
long long factorial(int);
int main(){
  
  // printf("factorial of 4 is %d\n", factorial(4));
  // printf("factorial of 5 is %d\n", factorial(5));
  // printf("factorial of 10 is %d\n", factorial(10));
  // printf("factorial of 15 is %d\n", factorial(15));
  // printf("factorial of 20 is %d\n", factorial(20));
  // printf("factorial of 25 is %d\n", factorial(25));


  printf("factorial of 4 is %lld\n", factorial(4));
  printf("factorial of 5 is %lld\n", factorial(5));
  printf("factorial of 10 is %lld\n", factorial(10));
  printf("factorial of 15 is %lld\n", factorial(15));
  printf("factorial of 20 is %lld\n", factorial(20));
  printf("factorial of 25 is %lld\n", factorial(25));

  return 0;
}
// int factorial(int sum){
//   long ans = 1;
//   for (int i = 2; i <= sum; i++)
//   {
//     ans *= i;
//   }
//   return ans;
// }


long long factorial(int sum){
  long long ans = 1;
  for (int i = 2; i <= sum; i++)
  {
    ans *= i;
  }
  return ans;
}