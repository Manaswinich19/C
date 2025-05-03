// program to add array elements

#include<stdio.h>
#define SIZE 5
int main()
{
    int i, a[SIZE], sum=0;
    printf("enter array elements:");
    for(i=0;i<SIZE;i++)
    {        
        scanf("%d", &a[i]);
        sum=sum+a[i];
    }
    printf("sum of array elements is %d", sum);
    return 0; 

}