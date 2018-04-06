#include<stdio.h>
#include<string.h>

int read_line(char str[], int n) {
  int ch, i = 0;

  while ((ch = getchar()) != '\n' && ch != EOF) 
    if (i < n)
      str[i++] = ch;

  str[i] = '\0';

  return i;
}

int judge(char c){
  if(c>='a'&&c<='z' || c>='A'&&c<='Z'){
    return 1;
  }
  return -1;
}

int compare2C(char a, char b){
  int i, j;
  if(a >= 'a' && a<= 'z'){
    i = a - 'a';
  }
  else{
    i = a - 'A';
  }

  if(b >= 'a' && b <= 'z'){
    j = b - 'a';
  }
  else{
    j = b - 'A';
  }

  return i - j;

}

int main(void){
  char arr[101];
  printf("Enter a message:");
  int len = 0;
  int i,j;
  while((len = read_line(arr, 100))>0){
    i = 0;
    j = len-1;
    while(i<j){
      while(judge(arr[i])<0)
	i++;
      while(judge(arr[j])<0)
	j--;

      if(compare2C(arr[i],arr[j])==0){
	i++;
	j--;
	continue;
      }
      else{
	break;
      }
    }

    if(i>=j)
      printf("palindrome\n");
    else
      printf("Not a palindrom\n");

    printf("Enter a message:");
  }

 
  return 0;
}
