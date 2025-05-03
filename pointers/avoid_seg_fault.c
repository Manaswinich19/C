// program to avoid Segmentation fault while accessing the value of Pointer using NULL pointer

#include<stdio.h>
int main()
{
    int *p=NULL;
    if (p==NULL)
    printf("Pointer doesnot point anything");
    else
    printf("Pointer points to %d",*p);
    return 0;
}