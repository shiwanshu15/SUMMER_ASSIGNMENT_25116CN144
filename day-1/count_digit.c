#include <stdio.h>

int main() {
    long long num;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    // Handle negative numbers by converting them to positive
    if (num < 0) {
        num = -num;
    }

    // Special case: if the user enters 0, it has exactly 1 digit
    if (num == 0) {
        count = 1;
    } else {
        while (num != 0) {
            num /= 10; // Removes the last digit (e.g., 123 becomes 12)
            count++;   // Increments the digit counter
        }
    }

    printf("Number of digits: %d\n", count);
    return 0;
}
