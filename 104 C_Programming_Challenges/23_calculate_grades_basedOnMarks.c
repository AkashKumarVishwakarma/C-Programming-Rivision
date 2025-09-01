// Create a programe that calculates grades based on marks
//A -> above 90%                B -> above 75%
//C -> above 60%                D -> above 30%
//F -> below 30%

#include<stdio.h>

int main(){

  float marks;
  printf("Enter your marks: ");
  scanf("%f", &marks);

  if (marks > 90) {
    printf("Grade: A\n");
  } else if (marks > 75) {
    printf("Grade: B\n");
  } else if (marks > 60) {
    printf("Grade: C\n");
  } else if (marks > 30) {
    printf("Grade: D\n");
  } else {
    printf("Grade: F\n");
  }

  return 0;
}