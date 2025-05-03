#include<stdio.h>
struct test
{
    unsigned int x:5; //x is of type 5 bits unsigned int
    unsigned int y:5; //y is of type 5 bits unsigned int
    unsigned int z; //z is of type4 bytes unsigned int
    };
    int main()
    {
        struct test t;
        t.x=6;

    // Below line gives an error as we cannot access of address of a bit field(since address is for bytes)
       // printf("address of t.x is %p \n",&t.x);

       // Below line gives an error sizeof is not applied to bit field
      // printf(" size of x is %d\n",sizeof(t.x));

      //This gives Size of structure
      printf("Size of struct is %d \n",sizeof(struct test));


       //This gives address, as it is in byte format
        printf("address of t.z is %p \n",&t.z);
        return 0;
    }