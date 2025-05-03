#include<stdio.h>
//Defining enum
enum enm{
    a=1,b=55,c
};
int main()
{
//creating enum variable
enum enm v1=a;
enum enm v2=b;
enum enm v3=c;
printf("a = %d\t b = %d \t c = %d",v1,v2,v3);
return 0;
}