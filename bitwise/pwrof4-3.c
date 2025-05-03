#include <stdio.h>

int checkPowerOf4(unsigned int n) {
    return !(n & (n - 1)) && (n % 3 == 1);
}

int main() {
    unsigned int n;
    printf("Enter a number: ");
    scanf("%u", &n);

    if (checkPowerOf4(n)) {
        printf("%u is a power of 4\n", n);
    } else {
        printf("%u is not a power of 4\n", n);
    }

    return 0;
}
