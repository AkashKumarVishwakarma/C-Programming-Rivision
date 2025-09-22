// Implement a trim function that removes leading and trailing spaces from a string.

#include <stdio.h>
#include <string.h>

int main(){ 

  char str[] = "   Hello, World!   ";
  char trimmed[50];


  int start = 0;
  int end = strlen(str) - 1;

  while (str[start] == ' ') start++;
  while (end > start && str[end] == ' ') end--;

  for (int i = 0; i < end - start + 1; i++)
  {
    if (str[start + i] == ' ')
    {
      trimmed[i] = '-';
    }
    else
    {
      trimmed[i] = str[start + i];
    }
  }
  // Null-terminate the trimmed string
  trimmed[end - start + 1] = '\0';

  printf("Original: '%s'\n", str);
  printf("Trimmed: '%s'\n", trimmed);

  return 0;
}