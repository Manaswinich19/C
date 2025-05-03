//A function called Reverse that takes in an array (any type) and reverses its contents
#include<stdio.h>
void reverse(int arr[],int size);
int main()
{
    int i,n,a[50];
    printf("Enter the number of array elements : \n");
    scanf("%d",&n);
    printf("Enter the array elements : \n");
    for(i=0;i<n;i++)
           scanf("\t%d",&a[i]);
    printf("The array elements in reverse order are: \n");
    reverse(a,n);
    return 0;
}
void reverse(int arr[],int size)
{
    int i;
    for(i=size-1;i>=0;i--)
        printf("%d\t",arr[i]);
            
}