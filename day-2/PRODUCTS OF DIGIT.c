#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, temp;
    long long product = 1;

    // Input number from user
    printf("Enter any integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Handle negative numbers by taking the absolute value
    temp = abs(num);

    // Special edge case: if the number is 0, the product of its digits is 0
    if (temp == 0) {
        product = 0;
    } else {
        // Loop to extract digits and calculate the product
        while (temp > 0) {
            product *= (temp % 10); // Extract the last digit and multiply
            temp /= 10;             // Remove the last digit
        }
    }

    printf("The product of the digits of %d is: %lld\n", num, product);

    return 0;
}
