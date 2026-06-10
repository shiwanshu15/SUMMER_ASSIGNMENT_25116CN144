#include <stdio.h>

int main() {
    int i, j;
    int rows = 5;
    char ch = 'A';

    // Outer loop handles the number of rows
    for (i = 1; i <= rows; i++) {
        
        // Inner loop handles printing characters in each row
        for (j = 1; j <= i; j++) {
            printf("%c", ch);
        }
        
        // Move to the next line after completing a row
        printf("\n");
        
        // Increment the character for the next row
        ch++;
    }

    return 0;
}
