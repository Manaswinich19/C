#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *pi=(int*)malloc(sizeof(int));
    *pi=5;
    printf("pi = %d",*pi);
    int *pi=(int*)malloc(sizeof(int));
   // free(pi);
    //pi=NULL;
    printf("\n this doesnot gets printed");
    printf("%d",*pi);
    printf("\n this doesnot gets printed");

}