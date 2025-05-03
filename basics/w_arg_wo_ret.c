// WITH arguments and WITHOUT return function 


#include<stdio.h>
void add(int a,int b);
int main()
{
	int a,b;
	printf("enter 2 numbers  ");
	scanf("%d %d",&a,&b);
	add(a,b);
	return 0;
}
void add(int a,int b)
{
		printf("sum is %d",a+b);	
}