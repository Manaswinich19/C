


#include<stdio.h>
int main()
{
    int a[5];
    int i, min=99999;
    printf("Enter 10 numbers :");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    printf("The smallest number is %d",min);
    return 0;

}