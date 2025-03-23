#include<stdio.h>
int factorial (int m)
{
    auto int i;
    auto int temp=1;
    for (i=1;i<=m;i++)
    {
        temp=temp*i;
    }
    return (temp);
}
void main()
{
    auto int n;
    for(n=1;n<=10;n++)
    {
        printf("%d!=%d\n",n,factorial(n));
    }
}
