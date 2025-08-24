#include<stdio.h>

struct Student
{
  int rollno;
  char names[20];
  float marks;
};

int main(){

  struct Student students = {1, "Ram", 45.5};
  struct Student *stu_ptr = &students;

  printf("\nRollno: %d, Name: %s, Marks: %.2f",students.rollno, students.names, students.marks);

  printf("\nRollno: %d, Name: %s, Marks: %.2f",(*stu_ptr).rollno, (*stu_ptr).names, stu_ptr->marks);

  return 0;
}