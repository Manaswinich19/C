#include <stdio.h>
#include <stdlib.h>
#include "header.h"

 void memLeak6()
{
    int *p1;
    {
    int temp=5;

    p1=&temp;
    printf("\n p1 = %p \n",p1);
    }
                //temp is now out of scope
                //temp is destroyed
                //p1 is a dangling pointer
    //printf("\n temp=%d \n",temp);
    printf("\n  p1  when out of the scope is %p \n",p1);
}
