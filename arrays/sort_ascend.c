// A function called Sort that takes in an array of integers and sorts its contents in ascending order
#include<stdio.h>
void sort(int arr[],int size);
int main()
{
    int a[10],i,n;
    printf("Enter the number of array elements : \n");
    scanf("%d",&n);
    printf("Enter the array elements : \n");
    for(i=0;i<n;i++)
           scanf("\t%d",&a[i]); 
    sort(a,n);
    printf("The sorted array is: \n");
    for(i=0;i<n;i++)
           printf("%d\t",a[i]);
    return 0;
}
void sort(int arr[],int size)
{
    int i,j,temp;
    for(i=0;i<size-1;i++) 
    {
        for(j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        } 
    }


}