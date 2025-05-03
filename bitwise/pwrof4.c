#include <stdio.h>  // Include standard input/output library
// Function to check if a number is a power of 4
int isPowerOfFour(int n) {
    // If the number is 0, it's not a power of 4
    if (n == 0)
        return 0;

    // Keep dividing the number by 4 as long as it's divisible by 4
    while (n != 1) {
        // If n is not divisible by 4, then it's not a power of 4
        if (n % 4 != 0)
            return 0;      
        n = n / 4;   // Divide n by 4
    }
    // If the loop ends and n becomes 1, it's a power of 4
    return 1;
}
int main() {
    int number;
    printf("Enter a number: ");      
    scanf("%d", &number);  // Read the number from user input   

    if (isPowerOfFour(number))  // Call the function and check if the number is a power of 4
        printf("%d is a power of 4\n", number); // If true, print this message
    else
        printf("%d is not a power of 4\n", number);// If false, print this message
    return 0; // Exit the program
}
