#include <stdio.h>

// struct Student {
//   int rollno;
//   char name[10];
//   float marks;
// };


// typedef struct Student{  // Student are optinal 

typedef struct {
  int rollno;
  char name[10];
  float marks;
} Stu;

int main(){
  typedef int akash;

  akash i = 5;


  // struct Student students = {1, "Ram", 45.5};

  Stu shayam = {2, "Shyam", 88.45};

  // for (int i = 0; i < 5; i++)
  // {
  //   printf("\nStudent Name: %s, RollNo: %d, Marks: %.2f", students[i].name, students[i].rollno, students[i].marks);
  // }
  
}