//Find the two non-repeating elements in an array of repeating elements/ Unique Numbers 
#include <stdio.h>
int main()
{
    int arr[100], n, i, j, count = 0, res = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");    
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < n; i++)    // for entering elements 1 2 3 4 5 1 2 3 4 5 6
    {
        count = 0;
        for (j = 0; j < n; j++)  // count the number of times each element appears
        {
            if (arr[i] == arr[j])   // if the element is found then count++
                count++;            
        }
        if (count == 1)         // if the element appears only once then print it
            printf("%d ", arr[i]);
    }
    return 0;
}
