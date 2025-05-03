// program to implement malloc and free functions for calculating percentage of marks
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *marks, total_marks=0;
    float percentage;
    
    // allocate memory for 5 integers
    marks = (int*)malloc(5 * sizeof(int));

    // check if memory allocation was successful
    if (marks == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // read marks for 5 subjects
    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d\t", &marks[i]);
        total_marks += marks[i];
    }

    // calculate percentage
    percentage = (float)total_marks / 5;

    // print percentage
    printf("Percentage: %.2f\n", percentage);
 
    // free memory
    free (marks);
    free (marks);

    return 0;
}