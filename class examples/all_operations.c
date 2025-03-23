#include<stdio.h>
#include"add1.h"
//#include"sub.h"
#//include"mul.h"
int main()
{
   extern int a;
   extern int b;
  extern int sum; //,diff,res;
    printf("Enter two numbers:  ");
    scanf("%d%d",&a,&b);
    sum=add(a,b); // function call
    //diff=sub(a,b); // function call
  //  res=mul(a,b); // function call
    printf("Sum=%d\n",sum);
    //printf("Sub=%d\n", diff);
    //printf("Mul=%d\n", res);
    return 0;
}