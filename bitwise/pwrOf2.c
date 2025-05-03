//Check if the number is a power of 2?
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number  ");
    scanf("%d",&n);
    if((n&(n-1))==0)
        printf("power of 2");
    else
        printf("not a power of 2"); 
    return 0;
}