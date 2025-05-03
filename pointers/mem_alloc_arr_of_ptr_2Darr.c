// Memory allocation for 2D array using array of pointers
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **a2D;   //pointer to an array  of integers
    int i,j,rows,cols;
    printf("Enter the number of rows: ");
    scanf(" %d",&rows);
    printf("Enter the number of cols: ");
    scanf(" %d",&cols);
   
    a2D = (int**)malloc(rows*sizeof(int*));  
         for(i=0;i<rows;i++) //rows
        for(j=0;j<cols;j++) //cols
        {
            printf("\n a2D[%d][%d]=  ",i,j);
            scanf("%d",&a2D[i*cols+j]);
        }
        for(i=0;i<rows;i++) //rows
        {
            for(j=0;j<cols;j++) //cols
            {
            printf("\n array:a2D[%d][%d]= %d",i,j,a2D[i*cols+j]);      
        }
        printf("\n");
    }     
free(a2D);
return 0;
}