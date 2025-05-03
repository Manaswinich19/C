// Determine Endianness

#include<stdio.h>
#define LITTLE_ENDIAN 0
#define BIG_ENDIAN 1

    int endian()
    {
        unsigned int x;
        printf("enter x value \t");
        scanf("%u",&x);
        char* ptr = (char *)&x;
        if(*ptr)
            return LITTLE_ENDIAN;
        else
            return BIG_ENDIAN;
           printf(" Big Endian");

    }


    int main(){
        if (endian== LITTLE_ENDIAN)
                
            printf(" Little endian");
        else
            printf(" Big endian")
    }


                      