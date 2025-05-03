#include<stdio.h>
struct test1
{
    int x:5;
    int y:8;
    };
    struct test2{
        int x:5;
       int y:0;
        int z:8;

    };
    int main()
    {
       
        printf("Size of test1 is %lu \n",sizeof(struct test1));
        printf("Size of test2 is  %lu \n",sizeof(struct test2));

    }