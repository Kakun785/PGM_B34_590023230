#include <stdio.h>

int main() {
    int num, first, last, temp, count = 0, power = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;  // Get last digit

    temp = num;

    // Find first digit and count digits
    while (temp >= 10) {
        temp = temp / 10;
        power = power * 10;
    }
    first = temp;

    // Remove first and last digit from num
    int middle = (num % power) / 10;

    // Form the new number
    int newNum = last * power + middle * 10 + first;

    printf("Number after swapping first and last digit: %d\n", newNum);

    return 0;
}
