
#include <stdio.h>

int main() {
    int n, i;

    // Ask user for input
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Validate input
    if (n < 1) {
        printf("Please enter a number greater than 0.\n");
        return 1;
    }

    // Print numbers from 1 to n
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}

    
    