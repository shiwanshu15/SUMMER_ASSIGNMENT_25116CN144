#include <stdio.h>

int main() {
    int i, j, rows = 5;

    // Outer loop for rows
    for (i = 1; i <= rows; i++) {
        // Inner loop to print the repeated numbers
        for (j = 1; j <= i; j++) {
            printf("%d", i);
        }
        // Move to the next line after each row is printed
        printf("\n");
    }

    return 0;
}
