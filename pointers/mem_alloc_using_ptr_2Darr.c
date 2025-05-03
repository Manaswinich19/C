// Memory allocation for 2D array using single pointer
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a2D;   
    int i,j,rows,cols;
    printf("Enter the number of rows: ");
    scanf(" %d",&rows);
    printf("Enter the number of cols: ");
    scanf(" %d",&cols);
    a2D = (int*)malloc(rows*cols*sizeof(int));
    for(i=0;i<rows;i++) //rows
    {
        for(j=0;j<cols;j++) //cols
        {
            printf("\n a2D[%d][%d]=  ",rows,cols);
            scanf("%d",a2D+i*rows+j);          
        }
    }
    for(i=0;i<rows;i++) //rows
    {
        for(j=0;j<cols;j++) //cols
        {
            printf("\n array:a2D[%d][%d]= %d",rows,cols,a2D[i*rows+j]);
          
        }
    }
free(a2D);
return 0;
} 