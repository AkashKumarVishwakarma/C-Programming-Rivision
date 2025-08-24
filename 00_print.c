#include<stdio.h>
#define AGE = 23;

int main(){
  printf("Hello World!\n");
  printf("%d is Integer\n", 10);
  printf("%c is Charecter\n", 'd');

  int a = 5;
  printf("value of a is : %d\n",a);

  a = 6;
  printf("value of a after change %d :\n", a);

  const float PI = 3.14;
  printf("This value of PI can't change %f\n", PI);

  // printf("Value of age also a constant %d\n",AGE);

  printf("Akash\bKumar");

  //Take input from user

  int c;
  printf("Enter a character: ");
  scanf("%c",&c);
  printf("This is your input charecter %c :\n", c);


  return 0;
}