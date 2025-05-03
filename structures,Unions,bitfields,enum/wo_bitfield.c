// C program to illustrate the structure without bit field

#include<stdio.h>

// Representation of date
struct date
{
    unsigned int d;
    unsigned int m;
    unsigned int y;
};
int main()
{
    // Printing the size of the structure
    printf("Size of date is %lu bytes \n", sizeof (struct date  ));
    struct date dt={ 21,04,2025};
    printf("Date is %d / %d /%d",dt.d,dt.m,dt.y);
}

