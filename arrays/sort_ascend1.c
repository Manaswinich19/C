#include<stdio.h>
void sorted(int a[],int n)
{
int i,temp,j;
printf("the elements a􀅌er ascending order:\n");
for ( i = 0; i < n - 1; i++)
    {
for ( j = 0; j < n - i - 1; j++)
{
if (a[j] > a[j + 1])
{
temp = a[j];
a[j] = a[j + 1];
a[j + 1] = temp;
}
}
}
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
return;
}
int main( )
{
int i,b[]={2,5,6,1,4,0},x;
printf("enter the size of the array:\n");
scanf("%d",&x);
sorted(b,x);
return 0;
}