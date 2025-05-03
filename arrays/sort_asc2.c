#include<stdio.h>
void sortarray(int arr[],int size );
void printarray(int arr[],int size);
int main()
{  
    int size;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;++i)
    {
        printf("Enter the elements:");
        scanf("%d",&arr[i]);
    }
    printf("original");
    printarray(arr,size);

    sortarray(arr,size);

    printf("sort\n");
    printarray(arr,size);

    return 0;
}
void sortarray(int arr[],int size )
{
    int ascending,i,j;
    for(i=0;i<size-1;++i)
    {
        for(j=i+1;j<size;++j)
        {

        if(arr[i]>arr[j]);
        {
            ascending=arr[i];
            arr[i]=arr[j];
            arr[j]=ascending;
        }
    }
}
}
void printarray(int arr[],int size)
{ 
    int i;
    for(i=0;i<size;++i)
    {
        printf("%d\n",arr[i]);
    }
}
