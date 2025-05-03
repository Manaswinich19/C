#include <stdio.h> 
int removeLastSetBit(int num)
 {
  return num & (num - 1); // Remove the last set bit
  }
     int main()
      {
         int num = 10; // Example number (binary: 1010)
         int updatedNum = removeLastSetBit(num);
          printf("Original number: %d \n", num); 
          printf("After removing the last set bit the number is: %d \n", updatedNum); 
          return 0; 
        }