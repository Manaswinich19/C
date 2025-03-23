#include<stdio.h>
void print()
{
     static int count=0;
        printf("hello Saha & Medha\t");
    count++;
    printf("is printing %d times\n",count);
}
int main()
{
   int i=0;
   while(i<10) 
   {
       print();
          i++; 
   }
   return 0;
}