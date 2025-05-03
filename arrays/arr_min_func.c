#include <stdio.h>
double minimum (double x[], int size)
{    
        int i;
        double min = 99999.99999;
      for (i=0; i<size; i++)
	if (min > x[i])
            min = x[i];
return (min);
}
void main()
{
      double a[100]; 
      int i, n;
      printf ("Enter the number of elements: ");
            scanf ("%d", &n);

      printf ("Enter the elements: "); 

      for (i=0; i<n; i++)
            scanf(" %lf", &a[i]);
      printf("\n Minimum of the given numbers is %.2f", minimum(a,n));
}