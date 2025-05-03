#include<stdio.h>
int main()
{
    // replace union with struct to find the difference
    // union is used to save space

union number{
    
    int i;
    char ch;
}x;
 x.i=100;
 x.ch='A';
printf(" \n i=%d \n ch=%c",x.i,x.ch);
}