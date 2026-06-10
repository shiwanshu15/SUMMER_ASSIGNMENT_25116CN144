#include <stdio.h>

int main() {
    int rows, i, j;

    // Ask user for the number of rows (Enter 5 for your specific pattern)
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Outer loop handles the total number of rows
    for (i = rows; i >= 1; i--) {
        
        // Inner loop 1: Prints the leading spaces
        for (j = 0; j < rows - i; j++) {
            printf(" ");
        }

        // Inner loop 2: Prints the stars (*)
        // The formula (2 * i - 1) calculates the decreasing odd number of stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        // Move to the next line after completing a row
        printf("\n");
    }

    return 0;
}

