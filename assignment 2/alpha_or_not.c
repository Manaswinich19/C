//to check whether a character is uppercase or lowercase alphabet

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')    
    {
        printf("%c is a lowercase alphabet",ch);
        }
    else if(ch>='A'&&ch<='Z')
    {
        printf("%c is an uppercase alphabet",ch);
    }  8
    else    
    {
        printf("%c is not an alphabet",ch);
    }   
    return 0;
}