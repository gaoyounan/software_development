#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[]){

  if(argc != 2){
    printf("Error Input\n");
    exit(EXIT_FAILURE);
  }

  FILE* file =  fopen(argv[1], "r");
  if(file == NULL){
    printf("Open File Failure\n");
    exit(EXIT_FAILURE);
  }
  int ch, result = 0;
  while((ch =  getc(file))!=EOF){
    if(ch == '\n'){
      result++;
    }
  }
  
  fclose(file);
  printf("%d\n", result);
  return 0;
}
