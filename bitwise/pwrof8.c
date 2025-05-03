#include <stdio.h>

int checkPowerOf8(unsigned int n) {
    return !(n & (n - 1)) && (n % 7 == 1);
}

int main() {
    unsigned int n;
    printf("Enter a number: ");
    scanf("%u", &n);

    if (checkPowerOf8(n)) {
        printf("%u is a power of 8\n", n);
    } else {
        printf("%u is not a power of 8\n", n);
    }

    return 0;
}
