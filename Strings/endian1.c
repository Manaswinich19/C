// Determine Endianness
#include<stdio.h>
#define LITTLE_ENDIAN 1
#define BIG_ENDIAN 0
int main(){
    int endian();
    {
        unsigned int x;
        printf("enter x value \t");
        scanf("%u",&x);
        char* ptr = (char *)&x;
        if(*ptr)
            printf(" Little endian");
            // return LITTLE_ENDIAN;
        else
           // return BIG_ENDIAN;
           printf(" Big Endian");

    }
}