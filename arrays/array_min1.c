#include<stdio.h>
#define SIZE 5
int main()
{
    int a[SIZE];
    int i, min=99999;
    printf("Enter 5 numbers :  ");
    for(i=0;i<SIZE;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<SIZE;i++)
    {
        if(a[i]<min)
            min=a[i];

    }
    printf("The smallest number is %d",min);
    return 0;

}