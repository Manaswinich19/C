#include <stdio.h>
int main()
{
int vector[] = {28, 41, 98};
int *p0= vector;
int *p1=vector+1;
int *p2=vector+2;
printf("p2>p0: %d\n",p2>p0); // p2>p0:
printf("p2<p0: %d\n",p2<p0); // p2<p0:
printf("p0>p1: %d\n",p0>p1); // p0>p1:
}