#include<stdio.h>

int main(){

  FILE *file_pointer;
  char text[100];

  file_pointer = fopen("file.txt", "r");
  // file_pointer = fopen("file1.txt", "r");

  if(file_pointer == NULL){
    printf("\nFile could not be opened");
    return 1;
  }

  fgets(text,100, file_pointer);
  printf("\n %s", text);


  int result = fclose(file_pointer);
  if(result == 0){
    file_pointer = NULL;
  }else{
    printf("\nFile was not closed properly.");
  }


  return 0;
}