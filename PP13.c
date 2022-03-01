#include <stdio.h>
#include <stdlib.h>


int main() {
  int array[] = { 22, 16, 24, 13, 56, 78};

  FILE* filePtr;

  filePtr = fopen("text.txt", "w+");
  if(filePtr == NULL){
    puts("The file could not be opened.");
    exit(1);
  }

  size_t arrayLength = sizeof(array) / sizeof(array[0]);

  for(size_t i = 0; i < arrayLength;i++){
    fprintf(filePtr, "&d\n", array[i]);
    
  }

    fclose(filePtr);

  return 0;
}