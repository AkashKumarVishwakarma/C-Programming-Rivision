#include <stdio.h>

int main()
{
  /*
  // if("a"){
  //   printf("is true");
  // }
  // if(NULL){
  //   printf("This never run.");
  // }
  */

    /*
  // int age;
  // char is_indian;
  // printf("Welcome to ARTO.\nPlease enter your age: ");
  // scanf("%d", &age);
  // printf("Are you an Indian Citizen(Y/N):");
  // scanf(" %c", &is_indian); // Note the space before %c

  // if (is_indian == 'Y' || is_indian == 'y')
  // {
  //   if (age < 18)
  //   {
  //     printf("You are too young, please apply after you are 18.\n");
  //   }
  //   else if (age > 70)
  //   {
  //     printf("You are senoir, you can't apply anymore.\n");
  //   }
  //   else
  //   {
  //     printf("You are eligible for a License.\n");
  //   }
  // }
  // else
  // {
  //   printf("Only Indian Citizens can apply,");
  // }
  */


/*
  // if((is_indian == 'Y' || is_indian=='y') && age>=18 && age<70){
  //   printf("You are eligible for a license.\n");
  // } else {
  //   printf("You are not eligible.\n");
  // }
  */

/*
  // char gender;
  // printf("Plese enter your gender ?(M/F)");
  // scanf(" %c", &gender);

  // gender == 'M'? printf("Male") : printf("Female");
  */


  //Switch Statement

  int day;
  printf("plese enter day number between(1-7): ");
  scanf("%d", &day);

  switch (day)
  {
  case 1:
    printf("Today is Monday");
    break;
  case 2:
    printf("Today is Tuesday");
    break;
  case 3:
    printf("Today is Wednesday");
    break;
  case 4:
    printf("Today is Thursday");
    break;
  case 5:
    printf("Today is Friday");
    break;
  case 6:
    printf("Today is Saturday");
    break;
  case 7:
    printf("Today is Sunday");
    break;
  
  default:
    printf("Invalid Input Try again.");
    break;
  }



  return 0;
}