// Multiplication of matrices

#define ROW1 3
#define COL1 3
#define ROW2 3
#define COL2 3

#include<stdio.h>
 int main()
 {
    int a[ROW1][COL1],b[ROW2][COL2],c[ROW1][COL2],i,j,k;
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<ROW1;i++)
    {
        for(j=0;j<COL1;j++)
        {
            printf("Enter the element a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<ROW2;i++)
    {
        for(j=0;j<COL2;j++)
        {
            printf("Enter the element b[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    p int main()
 {
    int a[ROW1][COL1],b[ROW2][COL2],c[ROW1][COL2],i,j,k;
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<ROW1;i++)
    {
        for(j=0;j<COL1;j++)
        {
            printf("Enter the element a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<ROW2;i++)
    {
        for(j=0;j<COL2;j++)
        {
            printf("Enter the element b[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(i=0;i<ROW1;i++)
    {
        for(j=0;j<COL2;j++)
        {
            c[i][j]=0;
            for(k=0;k<COL1;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
            printf("%5d\t",c[i][j]);
        }
        printf("\n");
    }

 }
printf("The matrix is:\n");
    for(i=0;i<ROW1;i++)
    {
        for(j=0;j<COL2;j++)
        {
            c[i][j]=0;
            for(k=0;k<COL1;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
            printf("%5d\t",c[i][j]);
        }
        printf("\n");
    }

 }

