// WITHOUT arguments and WITHOUT return function 
// wap to add 2 numbers using function
#include<stdio.h>
void add(void);
int main()
{
	add();
	return 0;
}
void add(void)
{
	int a,b;
	printf("enter 2 numbers  ");
	scanf("%d %d",&a,&b); 
	printf("sum is %d",a+b);
}