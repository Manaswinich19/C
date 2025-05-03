//A function called Average that takes in an integer array and returns the average of it's elements(as a double))

#include<stdio.h>
double average(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    return (double)sum/size;

}
int main()
{
    int arr[]={1,2,3,4,50};
    int size=sizeof(arr)/sizeof(arr[0]);
    double avg=average(arr,size); 
    printf("the average of the array is: %.2f",avg);
    return 0;

}