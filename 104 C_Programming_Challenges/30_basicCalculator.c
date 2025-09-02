// Create a programe to create a simple calculator, that uses a switch statement to perform
// basic arithmetic operations like addition, subtraction, multiplication, and division.


#include<stdio.h>

int main(){

  printf("Simple Calculator\n");

  float num1, num2;
  printf("Please, Enter first number: ");
  scanf("%f", &num1);
  printf("Please, Enter second number: ");
  scanf("%f", &num2);

  printf("Choose an operator (+, -, *, /): ");
  char operator;
  scanf(" %c", &operator);

  float ans, invalid = 0;

  switch (operator) {
    case '+': ans = num1 + num2;
      break;
    case '-': ans = num1 - num2;
      break;
    case '*': ans = num1 * num2;
      break;
    case '/':
      if (num2 != 0) {
        ans = num1 / num2;
      } else {
        invalid = 1;
      }
      break;
    default:
      invalid = 2;
      break;
    }
    
    if (invalid == 0) {
      printf("Result: %.2f\n", ans);
    }
    else if (invalid == 1) {
      printf("Error: Division by zero is not allowed.\n");
    } 
    else {
      printf("Invalid operator, please enter (+, -, *, /) ");
    }

  return 0;
}