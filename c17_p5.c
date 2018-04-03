#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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

  char ** str_arr;
  char str_temp[21];
  str_temp[0] = '\0';
  int len = 0;
  int str_arr_size = 0;
  int i;
  str_arr = malloc(sizeof(char*));
  judgeNull(str_arr);
  while((len = read_line(str_temp, 20))!=0){
    str_arr[str_arr_size] = malloc(len+1);
    judgeNull(str_arr[str_arr_size]);
    strcpy(str_arr[str_arr_size], str_temp);
    str_arr_size++;
    str_arr = realloc(str_arr, sizeof(char*)*(str_arr_size+1));
    judgeNull(str_arr);
  }
  
  int j = 0;
  char * temp_pointer;
  for(j=1; j<str_arr_size; j++)
  {
    temp_pointer = str_arr[j];
    for(i=j-1; i>=0; i--){
      if(strcmp(str_arr[i], temp_pointer)>0){
	str_arr[i+1] = str_arr[i];
	continue;
      }
      else{
	break;
      }	
    }
    str_arr[i+1] = temp_pointer;
  }
  
  for(i=0; i<str_arr_size; i++){
    printf("%s\n", str_arr[i]);
  }

  return 0;
}
