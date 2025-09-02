// Create a program to Based on a student's score, categorize as "High","Moderate", or "Low"
//Using the ternary operator (e.g., High for scores > 80, Moderate for 50 - 80, Low for < 50).

#include<stdio.h>

int main(){

  int score;
  printf("Please enter your score :");
  scanf("%d", &score);

  printf("Your grade is %s.", (score>80 ? "High" : (score>=50 ? "Moderate" : "Low")));

  return 0;
}