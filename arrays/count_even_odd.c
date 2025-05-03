// program to count even, odd array elements

#include<stdio.h>
//#define SIZE 10
int main()
{
    int i, a[10], even=0, odd=0;
    printf("enter array elements   :\t");
    for(i=0;i<10;i++)
    {        
        scanf("%d", &a[i]);
        if(a[i]%2==0)
            even++;
        else
            odd++;
    }
    printf("Number of even is %d and odd elements is %d",even,odd );
    return 0; 

}