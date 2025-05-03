// Dangling Pointer
#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void memLeak4()
{
int *pi=(int*)malloc(sizeof(int));
*pi=10;
printf("value of pi is %d\n",*pi);
free(pi);                       //freeing the memory
                                 //free(pi) releases the heap memory pointed to by pi
                                                                  
printf("value of pi is %d\n",*pi);//so pi is a dangling pointer
//dangling pointer is a pointer that points to a memory location that has been freed
//unpredictable behaviour of pi

}

