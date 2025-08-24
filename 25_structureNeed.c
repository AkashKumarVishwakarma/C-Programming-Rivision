#include<stdio.h>
#include<string.h>

struct Student {
  int rollno;
  char name[50];
  float marks;
};

int main(){

  // int rollno[5] = {1, 2, 3, 4, 5};
  // char names[5][20] = {"Rahul", "Akash", "Aman", "Raju", "Ram"};
  // float marks[5] = {45.5, 78.9, 90, 95.5, 99.9};

  // for (int i = 0; i < 5; i++)
  // {
  //   printf("\nStudent Name: %s, RollNo: %d, Marks: %.2f", names[i], rollno[i], marks[i]);
  // }
  

  // Structure Declaration

  struct Student student1;

  printf("Please enter student Details\n");
  printf("Enter the rollno: ");
  scanf("%d", &student1.rollno);

  getchar(); // consume the newline left by scanf

  printf("Enter the name: ");
  // scanf(" %9s", student1.name);
  fgets(student1.name, sizeof(student1.name), stdin);

  // remove trailing newline if present
  student1.name[strcspn(student1.name, "\n")] = 0;

  printf("Enter the marks: ");
  scanf("%f", &student1.marks);

  printf("\nHere are the Student Details : \n");
  printf("RollNo: %d, Name: %s, Marks: %.2f", student1.rollno, student1.name, student1.marks);

  return 0;
}