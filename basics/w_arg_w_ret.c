// WITH arguments and WITH return function 
// wap to add 2 numbers using function

#include<stdio.h>
int add(int a,int b);
int main()
{
	int a,b;
	printf("enter 2 numbers  ");
	scanf("%d %d",&a,&b);
	printf("sum is %d",add(a,b));
	return 0;
}
int add(int a,int b)
{
	a+b;
	return a+b;	
}