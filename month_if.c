//input month number and print number of days in that month
#include<stdio.h>
int main()
{
    int month;
    printf("Enter month number: ");
    scanf("%d",&month);
    if(month==1)
    {
        printf("month %d = January has 31 days");
    }       
    else if(month==2)
    {
        printf("month %d = February has 28 days");
    }   
    else if(month==3   )
    {
        printf("month %d = March has 31 days");
    }
    else if(month==4)
    {
        printf("month %d = April has 30 days");
    }
    else if(month==5)
    {
        printf("month %d = May has 31 days");
    }
    else if(month==6)
    {
        printf("month %d = June has 30 days");
    }
    else if(month==7)
    {
        printf("month %d = July has 31 days");
    }
    else if(month==8)
    {
        printf("month %d = August has 31 days");
    }
    else if(month==9)
    {
        printf("month %d = September has 30 days");
    }
    else if(month==10)
    {
        printf("month %d = October has 31 days");
    }
    else if(month==11)
    {
        printf("month %d = November has 30 days");
    }
    else if(month==12)
    {
        printf("month %d = December has 31 days");
    }
    else
    {
        printf("Invalid month number");
    }

}