//비교 연산자 , 논리연산자
#include<stdio.h>
int main()
{
  int a, b,c;
  scanf("%d%d%d",&a,&b,&c);
  int p=a>b; //p에 진실 1 거짓 0  ,== 
  bool d =a>b; //bool변수도 가능. 
  
  //중첩if-최대값출력
  if(a>b) { 
    //a>b>c , a>c>b , c>a>b 3가지경우
    if(a>c)
      printf("%d\n",a);//a>b>c
    else
    }
      printf("%d\n",c);//c>a>b
    else if(b>c)
        printf("%d\n",b)  //b>a
      else{//c>b
        printf("%d\n",c) 
    }
  
  
