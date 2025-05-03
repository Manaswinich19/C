//set bit
#include<stdio.h>
int setBit(int n,int pos)
{
    return (n | (1<<pos-1));
}
int main()
{
    int n,pos,new;
    printf("enter the number  ");
    scanf("%d",&n); 
    printf("enter the position  ");
    scanf("%d",&pos);
    new=setBit(n,pos);
    printf(" new number is %d",new);
    return 0;
}