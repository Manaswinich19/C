#include <stdio.h>
#include <string.h>


int main() 
{
char line[999], ch;
int c=0;
printf("Enter charecters: %c \n",ch);
do{
    ch=getchar();
        line[c]=ch;
        c++;
    }
    while(ch!='\n');
 
    c=c-1;
    line[c]='\0';
    printf("The string is: %s \n",line);
}

