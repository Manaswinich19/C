#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *ptr;
    while(1)
    {
        ptr = (char*)malloc(100);
        printf("Allocating \n ");       
    }
  free(ptr);
return 0;
}