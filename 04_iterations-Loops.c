#include<stdio.h>

int main(){

  // //Initialization
  // int num  =1;
  // while(num<=10){ //Condition
  //   printf("%d\n", num);
  //   num = num + 1;  //Updation
  // }
  // printf("Loop has ended.");


  // for (int num = 1; num <= 10; num++)
  // {
  //   printf("%d\n",num);
  // }
  // printf("First Loop has ended\n");


  // int num = 1;
  // for (;num <= 10;)
  // {
  //   printf("%d\n",num);
  //   num++;
  // }
  // printf("First Loop has ended\n");


  // for (int i = 1; i <= 10; i++)
  // {
  //   if(i%2!=0){
  //     continue;
  //   }
  //   printf("%d\n",i);
  // }
  // printf("Loop has ended\n");

  
  
  // int num = 0;
  // while (num!=10)
  // {
  //   printf("Plese Enter the number: ");
  //   scanf("%d", &num);
  // }
  // printf("Congrats you have guessed the correct number");


  char another;
  int num;
  do{
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("square of %d is %d", num, num*num);
    printf("\nWant to enter another number (Y/N):");
    scanf(" %c", &another);
  }while(another == 'Y' || another=='y');

  return 0;
}