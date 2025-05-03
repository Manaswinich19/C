#include <stdio.h>

int checkPowerOf16(unsigned int n) {
    return !(n & (n - 1)) && (n % 15 == 1);
}
int main() {
    unsigned int n;
    printf("Enter a number: ");
    scanf("%u", &n);

    if (checkPowerOf16(n)) {
        printf("%u is a power of 16\n", n);
    } else {
        printf("%u is not a power of 16\n", n);
    }
    return 0;
}
