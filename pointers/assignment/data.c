#include<stdio.h>
#include"data.h"

int  arr[3]={11,22,33};
int a=50,b=60,c=70;
int *p[3]={&a,&b,&c};
int (*ptr)[3]=&arr;
int i;

//Function definition to print Array elements 
void array1()
{
    printf("Normal array elements are:\n");
    for(i=0;i<3;i++)
        {   
        printf(" arr[%d]=%d\n",i,arr[i]);  
        }
}

    //Function definition to print Array of pointers 
    void array2()
{        
    printf("\n array of pointers:\n");
    for(i=0;i<3;i++)
    {
        printf("the element pointed to p[%d]=%d\n",i,*p[i]);
    }  
}
 
//Function definition to print Array elements using pointer to an array
void array3() 
{
    printf("\n pointer to an array:\n");
    for(i=0;i<3;i++)
        {
        printf("the element pointed to ptr(%d) =%d\n",i,*(*ptr+i));
        }
}


   
