#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int main(int argc, char * argv[]){
  
  if(argc != 2){
    printf("Error\n");
    exit(EXIT_FAILURE);
  }
  
  FILE* file = fopen(argv[1], "r");
  
  if(file == NULL){
    printf("Error\n");
    exit(EXIT_FAILURE);
  }
  
  int ch;
  while((ch=getc(file))!=EOF){
      ch = toupper(ch);
      putchar(ch);
  }
  
  fclose(file);

  return 0;
}
