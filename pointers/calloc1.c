// calloc for multiplication table

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int n,till;
    printf("Enter the multiplication table you want: \n");
    scanf("%d",&n);

    printf("Enter the till  :   ");  
    scanf("%d",&till);

    ptr = (int*)calloc(till,sizeof(int));
    for(int i=0;i<=till;i++)
    {
        ptr[i]=n*i;
        printf("%d * %d = %d\n",n,i,ptr[i]);
        }
    free(ptr);
    return 0;

}