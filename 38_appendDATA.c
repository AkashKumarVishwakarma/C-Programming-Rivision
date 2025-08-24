#include<stdio.h>

int main(){

  FILE *file_pointer;

  file_pointer = fopen("append.txt", "a");
  if(file_pointer == NULL){
    printf("\nFile could not be opened");
    return 1;
  }

  // Write Formatted text to the file
  fprintf(file_pointer, "This is my write operation\n");
  fprintf(file_pointer, "Square of %d id %d", 3, 9);



  int result = fclose(file_pointer);
  
  if(result == 0){
    file_pointer = NULL;
  } else{
    printf("\nFile was not closed properly.");
    return 1;
  }

  return 0;
}