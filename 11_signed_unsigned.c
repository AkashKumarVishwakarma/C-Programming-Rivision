#include<stdio.h>

int main(){

  unsigned int length = 10;   // Length of the rectangle (Can't be negative)
  unsigned int width = 5;     // Width of rectangle (can't be negative)
  unsigned area;              // area (can't be negative)

  int temperature = -15;      // Temperature (can be negative)

  //Calculate the area of the rectangle
  area = length * width;

  printf("The area of the rectangle is: %u square units\n", area);
  printf("The current temperature is: %d degress Calsius\n", temperature);


  return 0;
}