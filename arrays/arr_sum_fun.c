//A function called Sum that takes in an array of type double and returns the sum of its elements

#include<stdio.h>
double sum(double x[],int size)
{
	int i;
	double sum=0;
	for(i=0;i<size;i++)
	{
		sum=sum+x[i];
	}
	return sum;
}
void main()
{
	double a[100];
	int i,n;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%lf",&a[i]);
	}
	printf("\nSum of the given numbers is %.2f",sum(a,n));
}