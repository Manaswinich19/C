#include<stdio.h>
#include<string.h>
int main()
{char line[200];
    printf("Enter a string: ");
    scanf("%[^h]",line);
    printf("The string is: %s",line);
}