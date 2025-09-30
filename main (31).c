
#include <stdio.h>

int main() {
    int number, original, reversed = 0, remainder;

    // Input
    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;  // Store the original number

    // Reverse the number
    while (number != 0) {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number = number / 10;
    }

    // Check if palindrome
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}
