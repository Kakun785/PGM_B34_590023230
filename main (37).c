#include <stdio.h>

int main() {
    int number, sum = 0, remainder;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Handle negative numbers by taking absolute value
    if (number < 0) {
        number = -number;
    }

    // Calculate sum of digits
    while (number > 0) {
        remainder = number % 10;  // Get last digit
        sum += remainder;         // Add it to sum
        number = number / 10;     // Remove last digit
    }

    // Output the result
    printf("Sum of digits is: %d\n", sum);

    return 0;
}
