#include<stdio.h>
int main()
{
    int  arr[3]={11,22,33};
    int a=50,b=60,c=70;
    int *p[3]={&a,&b,&c};
    int (*ptr)[3]=&arr;
    int i;
    // normal array
    printf("normal array elements are:\n");
    for(i=0;i<3;i++)
    {
      printf(" arr[%d]=%d\n",i,arr[i]);  
    }
    printf("\n");

    // array of pointers
    printf("array of pointers:\n");
    for(i=0;i<3;i++)
    {
            printf("the elements are p[%d]=%d\n",i,*p[i]);
    }
    printf("\n");
    
    // pointer to an array
    printf("pointer to an array:\n");
    for(i=0;i<3;i++)
    {
       printf("the elements pointed ptr(%d) =%d\n",i,*(*ptr+i));
    }   
}