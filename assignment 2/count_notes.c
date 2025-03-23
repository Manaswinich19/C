//to count total number of notes in given amount

#include<stdio.h>
int main()
{
    int amount, note2000=0, note500=0, note200=0, note100=0, note50=0, note20=0, note10=0, note5=0, note2=0, note1=0;
    //int amount, note2000=0, note500=0, note200=0, note100=0, note50=0, note20=0, note10=0, note5=0, note2=0, note1=0;
    printf("Enter amount: ");
    scanf("%d", &amount);
    if(amount>=2000)
    {
        note2000 = amount/2000;
        amount = amount%2000;
    }
    if(amount>=500)
    {
        note500 = amount/500;
        amount = amount%500;
    }   
    if(amount>=200)
    {
        note200 = amount/200;
        amount = amount%200;
    }
    if(amount>=100)
    {
        note100 = amount/100;
        amount = amount%100;
    }
    if(amount>=50)
    {
        note50 = amount/50;
        amount = amount%50;
    }
    if(amount>=20)
    {
        note20 = amount/20;
        amount = amount%20;
    }
    if(amount>=10)
    {
        note10 = amount/10;
        amount = amount%10;
    }
    if(amount>=5)
    {
        note5 = amount/5;
        amount = amount%5;
    }
    if(amount>=2)
    {
        note2 = amount/2;
        amount = amount%2;
    }
    if(amount>=1)
    {
        note1 = amount/1;
        amount = amount%1; 
    }
    if(amount>0)
    {
        printf("Invalid amount");
    }
    else
    {
        printf("Total number of notes: %d\n", note2000+note500+note200+note100+note50+note20+note10+note5+note2+note1);  
    }       
    return 0;
}