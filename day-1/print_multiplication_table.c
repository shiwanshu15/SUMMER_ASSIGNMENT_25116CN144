#include <stdio.h>

int main() {
    int num, i;

    // Ask the user to input the number
    printf("Enter an integer to print its multiplication table: ");
    scanf("%d", &num);

    printf("\nMultiplication Table for %d:\n", num);
    printf("---------------------------\n");

    // Loop to calculate and print the table up to 10
    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
