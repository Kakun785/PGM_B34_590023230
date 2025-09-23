
#include <stdio.h>

int main() {
    
    int num1, num2, num3, largest;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Assume num1 is largest initially
    largest = num1;

    // Compare with num2
    if (num2 > largest) {
        largest = num2;
    }

    // Compare with num3
    if (num3 > largest) {
        largest = num3;
    }

    printf("The largest number is %d\n", largest);



    return 0;
}














   
   



























