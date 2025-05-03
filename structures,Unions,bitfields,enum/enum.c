// enum

#include<stdio.h>
enum direction{
    EAST,NORTH,WEST,SOUTH
};
int main()
{
    // Creating enum variable
    enum direction dir =SOUTH;
        printf("Direction is %d\n",dir);
        // This is valid too
        dir =0;
        printf("Direction is %d",dir);
        return 0;

}