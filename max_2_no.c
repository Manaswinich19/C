// find maximum of 2 numbers
#include<stdio.h>
float main()
{
    short int num1,num2,max_num;
    printf("Enter two numbers: ");
    scanf("%hd %hd",&num1,&num2);
    if (num1>num2 )
    
        max_num=num1;        
      else
           max_num=num2;    
    printf("The maximum number is %hd",max_num);

    return 0;

}