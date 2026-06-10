#include <stdio.h>

int main() {
    int rows;
    
    // Ask user for the number of levels/rows in the pyramid
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    // Outer loop handles the total number of rows
    for (int i = 1; i <= rows; i++) {
        
        // First inner loop prints leading spaces for center alignment
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        
        // Second inner loop prints the characters (e.g., 'A', 'B', 'C'...)
        // It prints (2 * i - 1) items per row to form a perfect triangle
        char ch = 'A';
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("%c", ch);
            ch++; // Increments to the next alphabet
        }
        
        // Move to the next line after completing a row
        printf("\n");
    }
    
    return 0;
}
