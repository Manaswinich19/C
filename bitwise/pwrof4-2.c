#include <stdio.h>

// Function to check if a number is a power of 4
int checkPowerOf4(int n) {
    if (n == 0)
        return 0;

    // Check if only one bit is set (power of 2)
    int powerof2 = !(n & (n - 1));

    // Ensure that the only set bit is at an even position (masking odd bits)
    int mask = !(n & 0xAAAAAAAA);

    // Return 1 (true) if both conditions are satisfied
    return powerof2 && mask;
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (checkPowerOf4(n)) {
        printf("%d is a power of 4\n", n);
    } else {
        printf("%d is not a power of 4\n", n);
    }
    return 0;
}
