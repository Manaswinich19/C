#include<stdio.h>

int main()
{
    int n=50;
    static int a[n]; 
    printf("Enter the size of array: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)     //
        {
        printf("Enter a[%d]= ",i);
        scanf("%d",&a[i]);
        }
    for(int i=0;i<n;i++)
            printf("square of value %d= %d\n",a[i],a[i]*a[i]);
    return 0;
}