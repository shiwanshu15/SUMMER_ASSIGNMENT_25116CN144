#include <stdio.h>

int main() {
    int num, originalNum, remainder, reversedNum = 0;

    // Ask user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Store the original number for later comparison
    originalNum = num;

    // Reverse the digits of the number
    while (num != 0) {
        remainder = num % 10;                  // Extract the last digit
        reversedNum = reversedNum * 10 + remainder; // Append digit to reversed number
        num /= 10;                             // Remove the last digit
    }

    // Check if the original number and reversed number are identical
    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}
