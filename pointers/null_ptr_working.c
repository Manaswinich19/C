// ILLUSTRATION OF HOW NULL WORKS IN POINTERS

#include<stdio.h>
void foo(int *string)
{
    if(string!=NULL)
    {
    printf("NULL is passed\n");
    return;
    }
    printf("NON- NULL is passed\n");
}

int main()
{
    foo(NULL);
    return 0;

}