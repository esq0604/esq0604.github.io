#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{ 
 clock_t start, stop;
 double duration;
 start=clock(); //측정시작
 for(int i=0; i<100000; i++) 
 stop=clock();
 duration=(double)(stop-start)/CLOCKS_PUR_SEC;
 printf("수행시간은 %f초 입니다./n",duration);
 return 0;
 }
