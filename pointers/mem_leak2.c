//memory leaks losing the address of the allocated memory
/*#include <stdio.h>
#include <stdlib.h>

int main() {
    int *pi = (int*)malloc(sizeof(int));
    if (pi == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    printf("Address of pi: %p\n", *pi);

    // Reassigning pi (without redeclaring)
    free(pi);
    pi = (int*)malloc(sizeof(int));
    if (pi == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Address of pi: %p\n", *pi);
    free(pi);
    return 0;

}*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *pi = (int*)malloc(sizeof(int));       // Allocate memory
    printf("Address of pi %p\n", (void*)pi);   // Print address
    *pi = 5;                                   // Store 5 in the allocated memory
    printf("Value at pi %d\n", *pi);           // Print value (not address)
    pi = (int*)malloc(sizeof(int));            // Allocate new memory
    printf("New address of pi %p\n", (void*)pi); // Print new address
    free(pi);                                  // Free the latest memory
    return 0;
}