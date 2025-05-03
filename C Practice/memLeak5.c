#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void memLeak5()
{
int *p1=(int*)malloc(sizeof(int));
*p1=10;
printf("value of p1 is %d\n",*p1);
int *p2;
p2=p1;
printf("value of p2 is %d\n",*p2);
free(p1);
*p1=20;
printf("value of p1 is %d\n",*p1);
printf("value of p2 is %d\n",*p2);
free(p2);
free(p1);
}