// find even or odd using Bitwise and using function
#include<stdio.h>
int evenOrOdd(int n)
{
    if((n&1)==0)
        printf("number is even");
    else
        printf("number is odd");
}
int main()
{
    int n;
    printf("enter the number  ");
    scanf("%d",&n); 
    evenOrOdd(n);
    return 0;
}