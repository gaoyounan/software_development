#include<stdio.h>

int abs(int a)
{
  return (a < 0) ? (0 - a) : a;
}

int main(void){
  char depature_time[8][11] = 
    {"8:00 a.m."
     ,"9:43 a.m."
     ,"11:19 a.m."
     ,"12:47 p.m."
     ,"2:00 p.m."
     ,"3:45 p.m."
     ,"7:00 p.m."
     ,"9:45 p.m."};

  char arrive_time[8][11]=
    {"10:16 a.m."
     ,"11:52 a.m."
     ,"1:31 p.m."
     ,"3:00 p.m."
     ,"4:08 p.m."
     ,"5:55 p.m."
     ,"9;20 p.m."
     ,"11:58 p.m."
    };

  int a[8] = {8*60, 60*9+43, 11*60+19, 12*60+47, 14*60, 15*60+45, 19*60, 21*60+45};
  
  int hh, mm, result;

  scanf("%d:%d", &hh, &mm);
  
  result = hh * 60 + mm;
  int i;

  int closetTime = 24*60;
  int index = 0;
  for(i=0; i<8; i++){
    if(abs(result - a[i]) < closetTime){
      closetTime = abs(result - a[i]);
      index = i;
    }
  }
  
  printf("Closest departure time is %s, arriving at %s\n", depature_time[index], arrive_time[index]);
  return 0;
}
