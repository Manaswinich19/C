// Memory leak when assigning NULL to freed Pointer
#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void memLeak3()
{
int *pi= malloc (sizeof(int));  //memory allocated using malloc
*pi=10;                         //value assigned to pointer
printf("pi=%p\n",pi);           //address of pointer
printf("*pi=%u\n",*pi);         //value at pointer
free(pi);                       //memory freed using free
if(pi==NULL)                        //checking if pointer is NULL to avoid dangling pointer
{
printf("pi is NULL\n"); 
}
else                                //pointer is not NULL print the block of statements
{
printf("pi=%p\n",pi);
printf("NO memory leak\n");
}
free(pi);
}