
#include <stdio.h>

int main()
{
     int n, i;
    int product = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        if(i % 2 == 0) {  // Check if the number is even
            product = product * i;
        }
    }

    printf("The product of even numbers from 1 to %d is: %d\n", n, product);


    return 0;
}