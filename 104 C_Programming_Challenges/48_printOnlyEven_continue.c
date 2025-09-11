// Create a program using continue to print only even numbers using continue for odd numbers.

#include <stdio.h>

int main() {
    int num;
    printf("Please, Enter a number: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
      if (i % 2 != 0) continue;
      printf("Even number: %d\n", i);
    }
    

    return 0;
}