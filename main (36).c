#include <stdio.h>

// Function to calculate GCD using Euclidean algorithm
int gcd(int a, int b) {
    int temp;
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b, lcm;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Calculate LCM
    lcm = (a / gcd(a, b)) * b;

    // To handle negative inputs properly, get absolute value of LCM
    if (lcm < 0)
        lcm = -lcm;

    printf("LCM of %d and %d is %d\n", a, b, lcm);

    return 0;
}



