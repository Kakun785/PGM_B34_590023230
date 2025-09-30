
#include <stdio.h>
#include <math.h>

int main() {
    int number, original, sum = 0, digits = 0, temp, remainder;

    // Input
    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;
    temp = number;

    // Count the number of digits
    while (temp != 0) {
        temp = temp / 10;
        digits++;
    }

    temp = number;

    // Calculate the sum of digits raised to the power of 'digits'
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp = temp / 10;
    }

    // Check if Armstrong
    if (sum == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}
