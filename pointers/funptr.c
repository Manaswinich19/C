//Passing function Pointer

#include<stdio.h>
void (*fptr)(int,int);                  //function pointer declaration
void display(void (*fptr)(int,int));    
void sum(int,int);                      //function declaration
void sub(int,int);
int main()
{
    display(sum);                       //function call
    display(sub);
    return 0;
}
void sum(int a,int b)                   //function definition
{       
    printf("sum=%d\n",a+b);
}
void sub(int a,int b)                 
{
    printf("sub=%d\n",a-b);
}
void display(void (*fptr)(int,int))     /*display is a function with argument as function pointer
                                        to functions sum and sub*/
{
    fptr(10,5);                         //function call to sum and sub
}