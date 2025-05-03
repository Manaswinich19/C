#include<stdio.h>
int main()
{
    int  arr[5]={10,20,30,40,50};
    int (*ptr)[5]=&arr;

  int *p=arr;
    printf("p=%d,\tptr=%d\n",p,ptr);
p++;
ptr++;
printf("p=%d,\tptr=%d\n",p,ptr);   //prints p= next 4 bytes,ptr=next 20 bytes as it is array of 5 integers
p++;
ptr++;
printf("p=%d,\tptr=%d\n",p,ptr);//prints p= next 4 bytes,ptr=next 20 bytes as it is array of 5 integers
return 0;
}