#include<stdio.h>
int main()
{
int a=10;
int *p=&a;
printf("address of a:\n",(void*)p);
printf("integrated as signed : %ld\n",(long)p);
printf("integrated as unsigned : %lu\n",(unsigned long)p);
return 0;
}

// here is the output of the code:
// address of a:    
// integrated as signed : 140737488346944
// integrated as unsigned : 140737488346944       or
// address of a:
// integrated as signed : -140737488346944
// integrated as unsigned : 4294967295

// both signed and unsigned may be same or different