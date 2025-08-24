#include<stdio.h>

struct Student {
  int rollno;
  char name[10];
  float marks;
};

//Call by Value
void printStudent(struct Student stu);

//Call by reference
void printStudentFromPointer(struct Student *stu);


int main(){
  
  int a = 5;
  int *ptr = &a;

  struct Student student = {1, "Ram", 95.5};
  struct Student *stu_ptr = &student;

  printStudent(student);
  // printStudent(*stu_ptr);
  printf("\nM: Rollno: %d, Name: %s, Marks: %.2f", student.rollno, student.name, student.marks);
  
  
  
  printStudentFromPointer(stu_ptr);

  printf("\nM2: Rollno: %d, Name: %s, Marks: %.2f", student.rollno, student.name, student.marks);

  
  return 0;
}

void printStudent(struct Student stu){
  stu.rollno = 5;
  printf("\nRollno: %d, Name: %s, Marks: %.2f", stu.rollno, stu.name, stu.marks);
}

void printStudentFromPointer(struct Student *ptr){
  ptr->rollno = 6;
  printf("\nRollno: %d, Name: %s, Marks: %.2f", ptr->rollno, ptr->name, ptr->marks);

}
