// finding Max number using pointer and functions
int max(int *x,int *y);
#include<stdio.h>
int main()
{
    int a=5,b=10;
    printf("Max number is %d",max(&a,&b));
    return 0;
}
int max(int *x,int *y)
{
   return *x>*y?*x:*y;
    
}
