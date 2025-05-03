// finding total cost of apples

#include<stdio.h>

int main()
{
    int Number_of_Apples;
    float Cost_per_Apple;
    float Total_Cost;
    printf("Enter the number of apples:");
    scanf("%d", &Number_of_Apples);

    printf("Enter the cost per apple:");
    scanf("%f", &Cost_per_Apple);

    Total_Cost = Number_of_Apples * Cost_per_Apple;
    printf("Total cost of apples is %f", Total_Cost);
    return 0;
}