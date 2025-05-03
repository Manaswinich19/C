#include<stdio.h>
int main()
{
    int i=1;
    while(i<=10)
    {
        printf("output is %d",i);
        if(i>10)
        goto here;
    }
}
fun()
{
    here:
    printf("hello");
}