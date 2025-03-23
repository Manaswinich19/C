#include<stdio.h>
#include"sub.h"
int main()
{
    int a,b,diff;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    diff=sub(a,b); // function call
    printf("Difference = %d",diff);
    return 0;
}