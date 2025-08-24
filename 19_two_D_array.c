#include<stdio.h>

int main(){

  // int student1[6];
  // int student2[6];
  // int student3[6];
  // int student4[6];
  // int student5[6];


  // int subject1[5];
  // int subject2[5];
  // int subject3[5];
  // int subject4[5];
  // int subject5[5];
  // int subject6[5];



  int marks[2][3];

  for (int row = 0; row < 2; row++)
  {
    for (int col = 0; col < 3; col++)
    {
      printf("Enter the marks for student: %d, Subject: %d = ", row+1, col+1);
      scanf(" %d", &marks[row][col]);
    }
  }


  for (int row = 0; row < 2; row++)
  {
    for (int col = 0; col < 3; col++)
    {
      printf("\nMarks of student: %d, Subject: %d = %d ", row+1, col+1, marks[row][col]);
    }
    
  }

  //4-D Array Declaration
  // int marks[11][4][60][5] // Branch > Year > student > subject
  

  return 0;
}