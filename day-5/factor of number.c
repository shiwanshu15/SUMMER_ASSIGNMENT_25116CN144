#include <stdio.h>

int main() {
    int num, i;

    // Prompt the user to enter a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Validate the input to ensure it is positive
    if (num <= 0) {
        printf("Please enter a number greater than 0.\n");
        return 1;
    }

    printf("Factors of %d are: ", num);

    // Loop through numbers from 1 up to the given number
    for (i = 1; i <= num; ++i) {
        // If the number is perfectly divisible by i, then i is a factor
        if (num % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
