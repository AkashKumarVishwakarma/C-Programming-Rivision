#include<stdio.h>

struct Student
{
  int rollno;
  char name[10];
  float marks;
};

int main(){

  // int rollno[5] = {1, 2, 3, 4, 5};
  // char names[5][20] = {"Ram", "Shyam", "Sita", "Geeta", "Sameer"};
  // float marks[5] = {45.5, 78.9, 90, 95.5, 99,0};

  struct Student students[5] = {
    {1, "Ram", 45.5},
    {2, "Shyam", 78.9},
    {3, "Sita", 90},
    {4, "Geeta", 95.5},
    {5, "Sameer", 99.0}
  };

  for (int i = 0; i < 5; i++)
  {
    printf("\n Student Name: %s, RollNo: %d, Marks: %.2f", students[i].name, students[i].rollno, students[i].marks);
  }
  

  return 0;
}