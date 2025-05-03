// program to add elements of the ARRAY

#include<stdio.h>
int main()
{
    int i,a[4] ,sum=0;
    printf("Enter 4 numbers : ");
    for(i=0;i<4;i++)
    { 
        scanf("%d",&a[i]);
    sum+=a[i]; // sum = sum + a[i]
    }
    printf("The sum of the given numbers is %d",sum);
    return 0;

}