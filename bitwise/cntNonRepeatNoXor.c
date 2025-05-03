// Find the two non-repeating elements in an array of repeating elements/ 2 Unique Numbers Using XOR
#include<stdio.h>


void findUniqueNumbers(int arr[], int n)
{
     int xorSum = 0, x = 0, y = 0; 
     int setBit;
      // Step 1: XOR all elements to find xorSum (x XOR y) 
     for (int i = 0; i < n; i++) 
         xorSum ^= arr[i]; 
    // Step 2: Find the rightmost set bit in xorSum 
        setBit = xorSum & ~(xorSum - 1); 
    // Step 3: Divide elements into two groups and XOR within each group
         for (int i = 0; i < n; i++) {
            
                if (arr[i] & setBit)
                {
                 x ^= arr[i];
                  // XOR of group where the set bit is 1
            }
                else
                    y ^= arr[i]; // XOR of group where the set bit is 0
        }       

               printf("The two unique numbers are: %d and %d\n", x, y);
    
} 
 int main() 
 { 
     int arr[] = {2, 4, 6,6,8,1,5,8, 4, 2}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]);
    findUniqueNumbers(arr, n);
    return 0;
 }