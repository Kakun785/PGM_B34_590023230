

#include <stdio.h>

int main() {
    int number, i, isPrime = 1;

    // Input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Handle numbers less than 2
    if (number <= 1) {
        printf("%d is not a prime number.\n", number);
        return 0;
    }

    // Check for factors from 2 to sqrt(number)
    for (i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            isPrime = 0;
            break;
        }
    }

    // Output result
    if (isPrime)
        printf("%d is a prime number.\n", number);
    else
        printf("%d is not a prime number.\n", number);

    return 0;
}
