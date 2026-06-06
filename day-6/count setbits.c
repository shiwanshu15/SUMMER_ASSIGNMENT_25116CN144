#include <stdio.h>

// Function to count set bits using Brian Kernighan's Algorithm
int countSetBits(unsigned int num) {
    int count = 0;
    while (num > 0) {
        num &= (num - 1); // Clears the rightmost set bit
        count++;          // Increments the set bit counter
    }
    return count;
}

int main() {
    unsigned int number;

    printf("Enter a positive integer: ");
    if (scanf("%u", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    int result = countSetBits(number);
    printf("Number of set bits (1s) in %u is: %d\n", number, result);

    return 0;
}
