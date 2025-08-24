#include<stdio.h>

int main(){

  /*

  // char c[] = "Hello";
  // printf("%d", sizeof(c));
  
  // char c[50] = "Hello";
  // char c[] = {'h', 'e', 'l', 'l', 'o', '\0'};
  char c[6] = {'h', 'e', 'l', 'l', 'o', '\0'};

  */

  //Format Specifiers

  //Allocated a character array
  /*
  char str[5];

  printf("Enter a string: ");
  //Read a string with a safety limit
  scanf(" %4s", str);
  //Output the entered string
  printf("You entered: %s\n", str);
  */

  char c[5];
  printf("Please enter your name: ");
  scanf(" %4s", c);
  printf("Good morning %s", c);

  return 0;
}