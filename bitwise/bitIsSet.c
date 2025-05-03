//if bit is set or not
#include<stdio.h>
int bitIsSet(int n,int k)
 {
    int mask=1<<(k-1);
    if((n&mask)==0)             
    {
        printf("bit is not set"); 
    }
    else
    {
        printf("bit is set");
    }
    return (mask | n);
 }
int main()
{
    int n,pos;
    printf("enter the number  ");
    scanf("%d",&n);
    printf("enter the position  ");
    scanf("%d",&pos);
    bitIsSet(n,pos);
    return 0;

  /*  int a=5;
    int pos=2;
    int mask=1<<pos;
    if((a&mask)==0)
        printf("bit is not set");
    else
        printf("bit is set");
    return 0;
*/
}