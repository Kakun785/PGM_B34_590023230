
#include <stdio.h>

int main() {
    int num, temp, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;  // Store original number

    while (temp > 0) {
        digit = temp % 10;  // Get last digit

        // Calculate factorial of the digit
        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact = fact * i;
        }

        sum = sum + fact;  // Add factorial to sum
        temp = temp / 10;  // Remove last digit
    }

    // Check if number is strong
    if (sum == num) {
        printf("%d is a Strong Number.\n", num);
    } else {
        printf("%d is NOT a Strong Number.\n", num);
    }

    return 0;
}
