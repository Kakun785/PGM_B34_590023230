
#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    int odd = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        sum += odd;
        odd += 2;
    }

    printf("The sum of the first %d odd numbers is: %d\n", n, sum);


    return 0;
}