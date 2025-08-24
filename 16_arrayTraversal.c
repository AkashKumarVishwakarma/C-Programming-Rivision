#include <stdio.h>

int main()
{

  // int marks[]={90, 92, 95, 97, 99};
  int marks[5];
  int no_of_students = 5;

  for (int i = 0; i < no_of_students; i++)
  {
    printf("Please enter marks for Student %d: ",i+1);
    scanf(" %d", &marks[i]);
  }

  for (int i = 0; i < no_of_students; i++)
  {
    printf("\nMarks of student %d are: %d", i+1, marks[i]);
  }



  /*
  // int num[40];
  // for (int i = 0; i < 100; i++)
  // {
  //   num[i] = i;
  // }
  // for (int i = 0; i < 35; i++)
  // {
  //   printf(" %d", num[i]);
  // }
  */



  return 0;
}