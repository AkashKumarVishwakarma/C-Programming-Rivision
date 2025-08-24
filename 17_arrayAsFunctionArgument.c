#include <stdio.h>

void print_marks(int marks[], int no_of_students);

int sumArray(int arr[], int size);

int main()
{

  // int marks[5];
  // int no_of_students = 5;

  // for (int i = 0; i < no_of_students; i++)
  // {
  //   printf("Please enter marks for Student %d: ", i + 1);
  //   scanf(" %d", &marks[i]);
  // }

  // print_marks(marks, no_of_students);


  int myArray[] = {1, 2, 3, 4, 5};
  int size = sizeof(myArray) / sizeof(myArray[0]);

  int total = sumArray(myArray, size);
  printf("The sum of the array element is: %d\n", total);


  return 0;
}

// void print_marks(int student_marks[], int student_count)
// {
//   for (int i = 0; i < student_count; i++)
//   {
//     printf("\nMarks of student %d are: %d", i + 1, student_marks[i]);
//   }
// }

int sumArray(int arr[], int size){
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    sum += arr[i];
  }
  return sum;  // Return the sum
}