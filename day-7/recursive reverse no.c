#include <stdio.h>

// Recursive function to reverse a number
// 'num' is the remaining number to process
// 'rev' holds the accumulated reversed number
int reverse_number(int num, int rev) {
    // Base case: when the number becomes 0, return the accumulated result
    if (num == 0) {
        return rev;
    }
    
    // Extract the last digit and add it to the accumulated result
    int last_digit = num % 10;
    rev = (rev * 10) + last_digit;
    
    // Recursive call with the remaining digits
    return reverse_number(num / 10, rev);
}

int main() {
    int number;

    printf("Enter an integer to reverse: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Call the function initializing the accumulated reverse value to 0
    int result = reverse_number(number, 0);

    printf("Reversed number: %d\n", result);

    return 0;
}
