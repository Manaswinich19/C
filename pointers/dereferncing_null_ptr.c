//DEREFERENCING A NULL POINTER

#include<stdio.h>
int main()
{
    int *p=NULL;
    int x=10;
    int *y=&x;
    printf("y=%p\n",y);
    printf("Program is NOT crashed and no segmentation fault occurs till this point\n");
   printf("*p=%d\n",*p);  // here we are dereferncing a null pointer, so it will give a segmentation fault
   printf("If this *p gets printed program is not crashed");// this line will not be printed
    return 0;
}
