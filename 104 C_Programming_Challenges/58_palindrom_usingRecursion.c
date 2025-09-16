// Create a programe using recursion to check if a number is a palindrome using recursion.

#include <stdio.h>

int reverse(int num, int rev);
int main(){
  
  int num;
  printf("Welcome to Palindrome Checker \n");
  printf("Enter a number: ");
  scanf("%d", &num);

  int rev = reverse(num, 0);
  if(rev == num){
    printf("%d is a palindrome number\n", num);
  } else {
    printf("%d is not a palindrome number\n", num);
  }


  return  0;
}

int reverse(int num, int rev){
  if(num == 0){
    return rev;
  } else {
    int remainder = num % 10;
    int new_num = num / 10;
    int new_rev = rev * 10 + remainder;
    return reverse(new_num, new_rev);
  }
}

