//clear bit
#include<stdio.h>
int clearBit(int n,int k)
{
    int mask=1<<(k-1);
    return (n & ~mask);
}
int main()
{
    int n,pos;
    printf("enter the number  ");   // Example number (binary: 1010)
    scanf("%d",&n); 
    printf("enter the position   ");  // Position of the bit to clear
    scanf("%d",&pos);  
    int updatedNum = clearBit(n,pos);
       printf("Original number: %d \n", n);  //Decimal representation of the original number
       printf("After clearing the %dth bit the number is : %d \n",pos,updatedNum);
       return 0;
}
