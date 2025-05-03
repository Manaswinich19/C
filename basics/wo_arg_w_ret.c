// WITHOUT arguments and WITH return function 
// wap to add 2 numbers using function
#include<stdio.h>
int add();
int main()
{
	//int c;
	//c=add();
	printf("sum is %d",add());
	return 0;
}
int add()
{
	int a,b;
	printf("enter 2 numbers  ");
	scanf("%d %d",&a,&b);
	return a+b;	
}