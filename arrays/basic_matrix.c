// BASIC MATRIX OPERATIONS
# define ROW 3
# define COL 3
#include<stdio.h>
int main()
{
    int a[ROW][COL],i,j;
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("Enter the element a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("%5d\t",a[i][j]);
        }
        printf("\n");
    }
   //printf("\n");
    return 0;
}