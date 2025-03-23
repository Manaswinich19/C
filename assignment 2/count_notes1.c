//to count total number of notes in given amount

#include<stdio.h>
int main()
{
    int note2000,note500, note200, note100, note50, note20, note10;
    note2000 = note500 = note200 = note100 = note50 = note20 = note10 = 0;   //initializing no of notes to 0
    int amount;
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
    if(amount<0)
    {
        printf("Invalid amount");
    }
    else
    {
        printf("Total number of notes: %d\n", note2000+note500+note200+note100+note50+note20+note10);  
    }       
    return 0;
}