// #include//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////<stdio.h>
#include"mul.h"
int main()
{
    extern int a,b,res;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    res=mul(a,b); // function call
    printf("mul=%d",res);
    return 0;
}