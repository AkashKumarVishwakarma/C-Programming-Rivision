//Create a program to calculate simple interest.
//Simple Interest = (P x T x R)/100

#include<stdio.h>

int main(){

  float principal, time, rate, simple_interest;

  printf("Enter principal amount: ");
  scanf("%f", &principal);

  printf("Enter time (in years): ");
  scanf("%f", &time);

  printf("Enter rate of interest: ");
  scanf("%f", &rate);

  simple_interest = (principal * time * rate) / 100;

  printf("Simple Interest: %.2f\n", simple_interest);

  return 0;
}