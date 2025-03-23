//Write a C program to input angles of a triangle and check whether triangle is valid or not.

#include<stdio.h>
int main()  
{
    int a, b, c;
    printf("Enter three angles of triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    a+b+c==180;
    if(a+b+c==180)

        printf("Triangle is valid.");
    else
        printf("Triangle is not valid.");

}
