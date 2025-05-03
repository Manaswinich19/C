#include<stdio.h>
int main()
{
    short s,*ps=&s;
    char c,*pc=&c;
    printf("Content of ps before : integer format: %d\t hexa format : %p\n",ps,ps);
    ps=ps+1;
    printf("Content of ps after : integer format : %d\t hexa format : %p\n",ps,ps);
    printf("Content of pc before :integer format: %d\t hexa format : %p\n",pc,pc);
    pc=pc+1;
    printf("Content of pc after :integer format:  %d\t hexa format : %p\n",pc,pc);
    return 0;
}