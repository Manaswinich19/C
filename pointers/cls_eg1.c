#include<stdio.h>
int main()
{
    int n=5;
    const int l=500;
    int *pi;
    const int *pci;
    pi=&n;
    pci=&l;
    printf("*pi=%d\n",*pi);
    printf("n add : %p  value :%d \n",&n,n);
    printf("l add : %p  value :%d \n",&l,l);
   // printf("pi add : %p  value :%d \n",pi,*pi);
    printf("pi add : %p  value :%p \n",&pi,pi);
    printf("pci add : %p  value :%p \n",&pci,pci);
    return 0;
}

