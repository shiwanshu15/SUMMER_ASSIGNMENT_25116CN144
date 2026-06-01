#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Prompt user for input
    printf("Enter two integers: ");
    
    // Read the two integers from user
    scanf("%d %d", &num1, &num2);

    // Calculate the sum using the + operator
    sum = num1 + num2;

    // Display the final result
    printf("Sum: %d\n", sum);

    return 0;
}
