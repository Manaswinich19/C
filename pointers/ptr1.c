//basic pointer 
#include<stdio.h>
int main()
{
    int a=10 ,  x[5]={1,2,3,4,5};
    int *p=&a;
int *q=x;
   // int &a=5000;
    printf("*p= %d\n",*p);
    printf("p = %p\n",p);
    printf("&a= %p\n",&a);
    printf("q= %p\n",q);
    printf("q+1=%p\n",q+1);
    printf("q[1] = %p\n",q[1]);
    printf("*q= %d\n",*q);
    printf("&q= %p\n",&q);

    return 0;

}