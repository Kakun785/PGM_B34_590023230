
#include <stdio.h>
int main (){
    
   
int number;

    // Input
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check using nested if-else
    if (number >= 0) {
        if (number == 0) {
            printf("The number is Zero.\n");
        } else {
            printf("The number is Positive.\n");
        }
    } else {
        printf("The number is Negative.\n");
    }

   

    return 0;
}














   
   



























