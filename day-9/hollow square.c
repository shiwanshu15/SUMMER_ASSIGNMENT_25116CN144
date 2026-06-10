#include <stdio.h>

int main() {
    int size = 5; // Size of the square side

    // Outer loop for rows
    for (int i = 1; i <= size; i++) {
        // Inner loop for columns
        for (int j = 1; j <= size; j++) {
            // Print star if it's the first or last row, or first or last column
            if (i == 1 || i == size || j == 1 || j == size) {
                printf("*");
            } else {
                // Print space for the hollow interior
                printf(" ");
            }
        }
        // Move to the next line after printing a row
        printf("\n");
    }

    return 0;
}
