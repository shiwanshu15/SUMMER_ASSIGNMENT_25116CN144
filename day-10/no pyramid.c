#include <stdio.h>

int main() {
    int rows = 5; // Height of the pyramid

    for (int i = 1; i <= rows; i++) {
        // 1. Print spaces for alignment
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // 2. Print increasing numbers (e.g., 1, 12, 123, etc.)
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // 3. Print decreasing numbers (e.g., 21, 321, etc.)
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
