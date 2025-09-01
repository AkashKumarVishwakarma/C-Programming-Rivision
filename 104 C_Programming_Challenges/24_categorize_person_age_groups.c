// Create a programe that categorize a person into diffrent age groups
// Child -> below 13              Teenager -> 13 to 19
// Adult -> 20 to 64               Senior -> 65 and above

#include<stdio.h>

int main(){

  int age;
  printf("Enter your age: ");
  scanf("%d", &age);

  if (age < 13) {
    printf("Category: Child\n");
  } else if (age >= 13 && age <= 19) {
    printf("Category: Teenager\n");
  } else if (age >= 20 && age <= 64) {
    printf("Category: Adult\n");
  } else {
    printf("Category: Senior\n");
  }

  return 0;
}