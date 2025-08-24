#include<stdio.h>
int main(){

  int num;
  
  input_number: //Label for goto
  printf("Plese enter a number: ");
  scanf("%d",&num);

  if(num != 10){
    goto input_number;

  }

  return 0;
}