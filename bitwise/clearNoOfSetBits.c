//Count the number of set bits in a number.
#include <stdio.h>
int countSetBits(int n)   
 {
    int count = 0;  // Initialize count for set bits
    while (n > 0) 
    {
        count += n & 1;  // Check if the least significant bit is set
        n >>= 1; // Right shift n by 1 to check the next bit
                    //n = n >> 1;
    }           
    return count; // Return the count of set bits
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The number of set bits in %d is %d\n", n, countSetBits(n)); 
    return 0;
}