
#include <stdio.h>

int main() {
    char color[] = "blue";
    char *colorPtr = "blue";

    printf("color: %s, sizeof(color): %zu\n", color, sizeof(color));
    printf("colorPtr: %s, sizeof(colorPtr): %zu\n", colorPtr, sizeof(colorPtr));

    // Modify color
    color[0] = 'g'; // OK
    printf("Modified color: %s\n", color);

    // Modify colorPtr (likely to cause issues)
    colorPtr[0] = 'g'; // Undefined behavior, may crash

    // Reassign colorPtr
    //colorPtr = "red"; // OK
    printf("Reassigned colorPtr: %s\n", colorPtr);

    // Reassign color (invalid)
    // color = "red"; // Compilation error

    return 0;
}