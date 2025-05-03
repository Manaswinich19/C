// Biggest among 3 numbers using conditional operator

#include <stdio.h>

int main()

{       
    int a,b,c,big;

    printf("Enter three numbers: a,b,c\n");

    scanf("%d%d%d",&a,&b,&c);   

    big=(a>b)?(a>c?a:c):(b>c?b:c);

    printf("Biggest among a=%d,b=%d,c=%d is %d\n",a,b,c,big);

    return 0;

}