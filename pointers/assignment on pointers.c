#include<stdio.h>
int main()
{
    int  arr[3]={11,22,33};
    int a=50,b=60,c=70;
    int *p[3]={&a,&b,&c};
    int (*ptr)[3]=&arr;
    int i;

    // normal array
    for(i=0;i<3;i++)
    {
      printf("normal array elements are arr[%d]=%d\n",i,arr[i]);  
    }
    printf("\n");

    // array of pointers
    for(i=0;i<3;i++)
    {
            printf("array of pointers: here the elements are p[%d]=%d\n",i,*p[i]);
    }
    printf("\n");
    
    // pointer to an array
    for(i=0;i<3;i++)
    {
    printf("pointer to an array: here the elements are ptr=%d\n",*(*ptr+i));
    }
   
}