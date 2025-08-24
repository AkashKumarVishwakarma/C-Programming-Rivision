#include<stdio.h>

int main(){

  // char name[] = "Akash Kumar";
  // printf("Array: Before modifying: %s\n", name);
  // name[6] = 'k';
  // printf("Array: After modifying: %s\n", name);


  char *nick_name = "Akash Kumar";
  printf("Pointer: Before modifying: %s\n", nick_name);
  nick_name[6] = 'k';
  printf("Pointer: After modifying: %s\n", nick_name);

  return 0;
}