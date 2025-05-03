// even or odd using right shift and left shift
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number  ");
    scanf("%d",&n);
    if((n>>1<<1)==n)
        printf("even");
    else
        printf("odd");
    return 0;
}