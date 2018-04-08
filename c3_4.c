#include<stdio.h>

int main(void){
  char a1, a2, a3, a4, a5, a6, a7, a8, a9, a10;

  scanf("(%c%c%c) %c%c%c-%c%c%c%c", &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10);

  printf("%c%c%c.%c%c%c.%c%c%c%c\n", a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  return 0;
}
