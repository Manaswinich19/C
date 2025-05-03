
#include<stdio.h>
int sort(int arr[],int size,int n);
int main()
{
int arr[100],size,n;
printf("Enter the no of elements:");
scanf("%d",&n);
printf("Enter the elements:\n");
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
size=sizeof(arr)/sizeof(arr[0]);
sort(arr,size,n);
return 0;
}
int sort(int arr[],int size,int n)
{
int temp;
for (int i = 0; i < n; ++i){
for (int j = i + 1; j < n; ++j){
if (arr[i] > arr[j]){
temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
}
}
}
printf("The numbers in ascending order is:");
for (int i = 0; i < n; ++i){
printf("%d\t", arr[i]);
}
}