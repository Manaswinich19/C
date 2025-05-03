#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_items;
    int *item_numbers = NULL;  // Array of item numbers
    int *quantities = NULL;    // Array of quantities

    // Ask user how many items they want to add
    printf("How many items do you want to add to your shopping list? ");
    scanf("%d", &num_items);

    // Validate input
    if (num_items <= 0) {
        printf("Please enter a positive number.\n");
        return 1;
    }

    // Allocate memory for the arrays using calloc
    item_numbers = (int *)calloc(num_items, sizeof(int));
    quantities = (int *)calloc(num_items, sizeof(int));
    if (item_numbers == NULL || quantities == NULL) {
        printf("Memory allocation failed!\n");
        free(item_numbers);  // Free any allocated memory before exiting
        free(quantities);
        return 1;
    }

    // Show initial state (all zeros due to calloc)
    printf("\nInitial Shopping List (before input):\n");
    printf("--------------------\n");
    for (int i = 0; i < num_items; i++) {
        printf("Item #%d - Quantity: %d\n", item_numbers[i], quantities[i]);
    }

    // Input shopping list items
    for (int i = 0; i < num_items; i++) {
        printf("\nEnter item #%d:\n", i + 1);
        
        printf("Item number: ");
        scanf("%d", &item_numbers[i]);
        
        printf("Quantity: ");
        scanf("%d", &quantities[i]);
    }

    // Display the updated shopping list
    printf("\nYour Shopping List:\n");
    printf("--------------------\n");
    for (int i = 0; i < num_items; i++) {
        printf("Item #%d - Quantity: %d\n", item_numbers[i], quantities[i]);
    }

    // Free the allocated memory
    free(item_numbers);
    free(quantities);
    printf("\nMemory freed. Shopping list cleared.\n");

    return 0;
}