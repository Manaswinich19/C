#include<stdio.h>
int main()
{
    const int n=5;
    const int *const c=&n;
  // int *c=88;
   int* ptr = (int*)42;
   printf("%d\n",*ptr);
    return 0;
}