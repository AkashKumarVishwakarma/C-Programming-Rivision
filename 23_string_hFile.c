#include <stdio.h>
#include <string.h>

int main()
{

  // strlen()
  /*
  char name[50];
  printf("Please enter your name: ");
  fgets(name, 50, stdin);

  int size = strlen(name);
  printf("the length of your name is: %d", size);

  // char c[] = "hello";
  // printf("Length of '%s' is : %d", c, strlen(c));

  */

  // strcpy()

  /*
  char name[50];
  printf("Please enter your name: ");
  fgets(name, 50, stdin);

  char new_name[50];
  strcpy(new_name, name);
  printf("%s has been copied to %s", name, new_name);
  */

  // strcat()

  /*
  char first_name[15];
  char last_name[15];

  printf("Please enter your first name: ");
  fgets(first_name, 15, stdin);
  printf("Please enter your last name: ");
  fgets(last_name, 15, stdin);

  strcat(first_name, last_name);
  printf("Your final name is: %s", first_name);
  */

  // strcpm()

  int result = strcmp("apple", "banana");
  printf("Comparison of apple and banana is: %d\n", result);

  int result2 = strcmp("cherry", "banana");
  // int result2 = strcmp("c", "banana");
  printf("Comparison of cherry and banana is: %d\n", result2);

  int result3 = strcmp("date", "date");
  printf("Comparison of apple and banana is: %d\n", result3);

  return 0;
}