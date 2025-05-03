// Toggle Bit
#include <stdio.h>
int main()
{
    int num, pos, res;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the position: ");
    scanf("%d", &pos);
    res = num ^ (1 << (pos - 1)); // 1 << (pos - 1) is the mask
                                //  xor with the number to toggle the bit
    printf("The result is: %d", res);
    return 0;
}