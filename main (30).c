
#include <stdio.h>

int main() {
    int number, binary[32], i = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Special case for 0
    if (number == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }

    // Convert to binary and store in array
    while (number > 0) {
        binary[i] = number % 2;
        number = number / 2;
        i++;
    }

    printf("Binary representation: ");
    // Print binary in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    printf("\n");

    return 0;
}
