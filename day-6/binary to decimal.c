#include <stdio.h>

int main() {
    long long binary;
    int decimal = 0, base = 1, remainder;

    // Accept binary input from the user
    printf("Enter a binary number (using only 0s and 1s): ");
    scanf("%lld", &binary);

    long long temp = binary; // Store original value for output

    // Loop to process each digit of the binary number
    while (binary > 0) {
        remainder = binary % 10;      // Extract the rightmost digit
        decimal += remainder * base;  // Add digit contribution to the decimal sum
        binary /= 10;                 // Remove the rightmost digit
        base *= 2;                    // Move to the next power of 2 (1, 2, 4, 8...)
    }

    // Print the final result
    printf("%lld in binary = %d in decimal\n", temp, decimal);

    return 0;
}
