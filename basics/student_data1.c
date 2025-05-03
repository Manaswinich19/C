//COMMA AS OPERATOR

#include<stdio.h>

int main()

{

    int x=10,y;
    y=(x=x+2,++x,x=x+10,x=x*x);

    printf("y=%d",y);

    return 0;

}
   
