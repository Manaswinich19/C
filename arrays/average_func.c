// A function called Average that takes in an integer array and returns the average of it's elements(as a double))

#include<stdio.h>
double average(int arr[],int size);
int main()
{
    int a[10],i,n;
    printf("Enter the number of array elements : \n");
    scanf("%d",&n);
    printf("Enter the array elements : \n");

    for(i=0;i<n;i++)
           scanf("\t%d",&a[i]);  
    printf("The average of the array is: %.2lf",average(a,n));
    return 0;
}
double average(int arr[],int size) 
{
    int i,sum=0;
    double average;
    
    for(i=0;i<size;i++)
    {        
        sum+=arr[i];
        average=(double)sum/size;
    }
    return average;
}