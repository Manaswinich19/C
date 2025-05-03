#include<stdio.h>
int main()
{
    static int a[20];
    int i=0;
    a[i]=i++;
    printf("a[0]=%d \n a[1]=%d \n i=%d",a[0],a[1],i);

}