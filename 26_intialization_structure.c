#include<stdio.h>

struct Student {
  int rollno;
  char name[10];
  float marks;
};

int main(){

  //Direct Initialization

  struct Student s1 = {1, "Ram", 99.89};
  printf("Rollno: %d, Name: %s, Marks: %.2f", s1.rollno, s1.name, s1.marks);
  

  //Designated Initialization

  // struct Student s2 = {.name="Shayam", .marks=98.89, .rollno=2};
  // printf("Rollno: %d, Name: %s, Marks: %.2f", s2.rollno, s2.name, s2.marks);
  
  
  // Zero Initialization
  
  // struct Student s3 = {0};
  // printf("Rollno: %d, Name: %s, Marks: %.2f", s3.rollno, s3.name, s3.marks);
  
  
  //Copy Initialization
  
  struct Student s4 = s1;
  s4.rollno = 4;
  printf("\nRollno: %d, Name: %s, Marks: %.2f", s4.rollno, s4.name, s4.marks);




  return 0;
}