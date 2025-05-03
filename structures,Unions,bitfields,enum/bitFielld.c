// C program to demonstrate use of bit fields
#include<stdio.h>
struct date{
    
    // Space optimized Representation of the date
    unsigned int d:5;    //As int means 4 bytes, first 4 bytes are allocated, in that...
                // d has the value between 0 - 31, so 5 bits are sufficient
                
    unsigned int m:4;    //m has value between 0 - 15, so 4 bits are sufficient 
    int y;  // int implies 4 bytes allocation

};
int main()
{
    printf("Size of date is %lu bytes \n", sizeof(struct date));
    struct date dt={21,04,2025};
    printf(" Date is %d / %d / %d",dt.d,dt.m,dt.y);
}