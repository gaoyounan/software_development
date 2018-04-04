#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int read_line(char str[], int n) {
  int ch, i = 0;

  while ((ch = getchar()) != '\n' && ch != EOF) 
    if (i < n)
      str[i++] = ch;

  str[i] = '\0';

  return i;
}

void judgeNull(void *p){
  if(p == NULL){
    printf("Null Error\n");
    exit(EXIT_FAILURE);
  }
}

int main(void){

  char smallest[21];
  char largest[21];
  char str_temp[21];
  int len = 0;
  int i = 0;
  smallest[0]='\0';
  largest[0]='\0';
  while((len = read_line(str_temp, 20))!=4){
    if(i == 0){
      strcpy(smallest, str_temp);
      strcpy(largest, str_temp);
    }
    else
    {
      if(strcmp(smallest, str_temp) > 0){
	strcpy(smallest, str_temp);
      }
    
      if(strcmp(largest, str_temp)<0){
	strcpy(largest, str_temp);
      }
    }
    i++;
  }

  if(strcmp(smallest, str_temp) > 0){
	strcpy(smallest, str_temp);
   }
    
  if(strcmp(largest, str_temp)<0){
	strcpy(largest, str_temp);
      }

  printf("Smallest word: %s\n", smallest);
  printf("Largest word: %s\n", largest);
  return 0;
}
