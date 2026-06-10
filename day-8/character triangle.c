#include <stdio.h>

int main() {
    int rows = 5; // Total number of rows to print

    // Outer loop handles the number of rows
    for (int i = 1; i <= rows; i++) {
        char ch = 'A'; // Reset character to 'A' at the start of each row
        
        // Inner loop handles the characters printed in each row
        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
            ch++; // Move to the next alphabet
        }
        
        printf("\n"); // Move to the next line after finishing a row
    }

    return 0;
}
