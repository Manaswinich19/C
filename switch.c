// ILLUSTRATE THE DETAILS ABOUT OUR LIFE IN DIFFERENT PHASES

#include<stdio.h>
int main(){
    int phase_of_life;
    printf("Enter the phase of the life\t");
    scanf("%d",&phase_of_life);
    switch(phase_of_life)
    {
        case 1:
            printf("First Phase of my Life \n Childhood Data \n Born in INDIA,Telangana\n");
            //break;
        case 2:
            printf("Second Phase of my Life \n My Education details \n M.tech in VLSI System Design\n");
           // break;
        case 3:
            printf("Third Phase of my Life \n My Aim is to become Embedded Engineer\n");
             //break;
         default:
            printf("Fourth Phase of my Life \n My Future goal is to settle in the Core domain");

    }
}