
#include <stdio.h>

int main() {
    int units;
    float bill = 0;

    printf("Enter total electricity units consumed: ");
    scanf("%d", &units);

    if (units <= 0) {
        printf("Invalid input. Units must be greater than 0.\n");
        return 1;
    }

    if (units <= 100) {
        bill = units * 5;
    }
    else if (units <= 200) {
        bill = (100 * 5) + ((units - 100) * 5);
    }
    else if (units <= 300) {
        bill = (100 * 5) + (100 * 5) + ((units - 200) * 7);
    }
    else if (units <= 400) {
        bill = (100 * 5) + (100 * 5) + (100 * 7) + ((units - 300) * 10);
    }
    else {
        bill = (100 * 5) + (100 * 5) + (100 * 7) + (100 * 10) + ((units - 400) * 12);
    }

    printf("Total electricity bill: $%.2f\n", bill);

    return 0;
}

    
    