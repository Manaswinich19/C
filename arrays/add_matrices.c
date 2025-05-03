//addition of matrices

#include<stdio.h>
#define ROW 3
#define COL 3
int main()
{
    int a[ROW][COL],b[ROW][COL],c[ROW][COL],i,j;
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("Enter the element a[%d][%d]:",i,j);
            scanf("\t%d",&a[i][j]);
        } 
    }
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("Enter the element b[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
         c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}