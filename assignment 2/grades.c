//grades 
#include <stdio.h>
int main()
{
int percent;
printf("Enter the percentage:");
scanf("%d",&percent);
if(percent>=90)
{
printf("Grade A");
}
else if(percent>=80)
{
printf("Grade B");
}
else if(percent>=70)
{
printf("Grade C");
}
else if(percent>=60)
{
printf("Grade D");
}   
else if (percent>=40)
{
printf("Grade E");
}
else
{
printf("Grade F");
}
return 0;
}