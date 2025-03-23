//Max between 2 nos using functions

#include<stdio.h>

int max(int a,int b);
void main()
{
    int a,b;
    printf("Enter 2 nos:");
    scanf("%d %d",&a,&b);
    printf("Max=%d",max(a,b));
}

int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
