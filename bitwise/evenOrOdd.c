// find even or odd using bitwise operator
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number  ");
    scanf("%d",&n);
    if((n&1)==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}