// C program to illustatre we can't have array bit field members

#include<stdio.h>
struct test
{
    unsigned int x; //x is of type 5 bits unsigned int
    long int y:33; //y is of type 5 bits unsigned int
    unsigned int z; //z is of type4 bytes unsigned int
    };
    int main()
    {
        
      //This gives Size of structure
      printf("Size of struct is %d \n",sizeof(struct test));

      return 0;
    }