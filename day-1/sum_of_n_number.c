#include <stdio.h>

int main() {
    long long n;
    long long sum;

    // Ask user for input
    printf("Enter a positive integer: ");
    if (scanf("%lld", &n) != 1 || n < 1) {
        printf("Error: Please enter a valid positive integer.\n");
        return 1;
    }

    // Calculate sum using formula to ensure O(1) time complexity
    sum = (n * (n + 1)) / 2;

    // Display the result
    printf("The sum of the first %lld natural numbers is: %lld\n", n, sum);

    return 0;
}




