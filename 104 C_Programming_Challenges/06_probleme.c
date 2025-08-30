//Define variables for storing a user's first name, last name, and age using appropriate naming conventions and then display them.

#include<stdio.h>

int main(){

  char first_name[20];
  char last_name[20];
  int age;

  printf("Please enter your first name :");
  scanf(" %s", first_name);

  printf("Now, enter your last Name : ");
  scanf(" %s", last_name);

  printf("Finally enter your age :");
  scanf("%d", &age);

  printf("First Name: %s\n", first_name);
  printf("Last Name: %s\n", last_name);
  printf("Age: %d\n", age);

  return 0;
}