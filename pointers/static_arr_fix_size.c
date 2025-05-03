// static array with fixed size 

#include<stdio.h>
int main()
{
    static int a[]={1,2,3,4,5};
    int i;
    for(int i=0;i<5;i++)
        {
        printf("Enter a[%d]= ",i);
        scanf("%d",&a[i]);
        }
    for(i=0;i<5;i++)
            printf("square of %d= %d\n",a[i],a[i]*a[i]);
    return 0;
}