#include <stdio.h>

int main() {
    int i, j;

    // Outer loop for rows
    for (i = 5; i >= 1; i--) {
        
        // Inner loop to print numbers in each row
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
