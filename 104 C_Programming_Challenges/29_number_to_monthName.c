// Create a programe to print the month of the year based on a number (1-12) input by the user.

#include<stdio.h>

int main(){

  int month;
  printf("Please enter a month number (1-12): ");
  scanf("%d", &month);

  // printf("The month is %s.", (month==1 ? "January" : (month==2 ? "February" : (month==3 ? "March" : (month==4 ? "April" : (month==5 ? "May" : (month==6 ? "June" : (month==7 ? "July" : (month==8 ? "August" : (month==9 ? "September" : (month==10 ? "October" : (month==11 ? "November" : (month == 12 ? "December" : "Invalid")))))))))))));


  switch (month)
  {
  case 1:
    printf("January.");
    break;
  case 2:
    printf("February.");
    break;
  case 3:
    printf("March.");
    break;
  case 4:
    printf("April.");
    break;
  case 5:
    printf("May.");
    break;
  case 6:
    printf("June.");
    break;
  case 7:
    printf("July.");
    break;
  case 8:
    printf("August.");
    break;
  case 9:
    printf("September.");
    break;
  case 10:
    printf("October.");
    break;
  case 11:
    printf("November.");
    break;
  case 12:
    printf("December.");
    break;
  default: printf("Invalid month, Please enter a valid month number (1-12).");
  }

  return 0;
}