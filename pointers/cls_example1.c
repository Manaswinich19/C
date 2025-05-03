//Accessing memory location in arrays using pointers
#include<stdio.h>
int main()
{
    int vector[]={65,33,97,64,21,45};
    int *p=vector;
    printf("%d\n",*p);
    p+=1;
    printf("%d\n",*p);
    p+=1;
    printf("%d\n",*p);
    return 0;
}