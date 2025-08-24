#include<stdio.h>

int main(){

  char name[5];
  /*
  printf("Please enter your name: ");
  gets(name);  // Unsafe

  // printf("Good Morning, %s", name);
  // puts("Good Morning, ");
  printf("Good Morning, ");
  puts(name);
  */

  printf("Now enter your nickname: ");
  fgets(name, sizeof(name), stdin); // Safe alternative to gets()
  puts(name);

  printf("Good morning ");
  puts(name);



  return 0;
}