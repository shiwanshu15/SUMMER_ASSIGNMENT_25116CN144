#include <stdio.h>

int main() {
    int decimal, i = 0;
    int binary[32]; // Array to store up to a 32-bit binary number

    printf("Enter a decimal number: ");
    if (scanf("%d", &decimal) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Handle edge case for 0
    if (decimal == 0) {
        printf("Binary equivalent: 0\n");
        return 0;
    }

    // Store remainders in the array
    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    // Print the array in reverse order
    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
