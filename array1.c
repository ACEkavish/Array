#include <stdio.h>

int main() {
    // 1. Declaration of a 1D array of size 5
    int numbers[5];
    int i;

    // 2. Taking user input to populate the array
    printf("Enter 5 integers:\n");
    for(i = 0; i < 5; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &numbers[i]); // Storing value at index i
    }

    // 3. Accessing and displaying the array elements
    printf("\nThe elements in the 1D array are:\n");
    for(i = 0; i < 5; i++) {
        printf("Element at index %d = %d\n", i, numbers[i]);
    }

    return 0;
}
