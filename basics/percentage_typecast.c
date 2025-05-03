//CALCULATING PERCENTAGE USING TYPE CASTING

#include<stdio.h>
int main()

{

    int total_marks=600;

    int marks_obtained=547;

    float percentage = (float)marks_obtained/total_marks*100; // CALCULATING PERCENTAGE USING TYPE CASTING

    printf("percentage of the student %f",percentage);

    return 0;

}