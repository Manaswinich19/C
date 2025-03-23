#include<stdio.h>
#include"add.h"
int main()
{
    int a,b,sum;
  //  printf("Enter two numbers:");
   // scanf("%d%d",&a,&b);
    sum=add(a,b); // function call
    printf("Sum=%d",sum);
    return 0;
}