
#include <stdio.h>

int main() {
    char ch;

    // Ask user for input
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check for uppercase, lowercase, or not an alphabet
    if (ch >= 'A' && ch <= 'Z') {
        printf("%c is an uppercase alphabet.\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("%c is a lowercase alphabet.\n", ch);
    } else {
        printf("%c is not an alphabet.\n", ch);
    }


    



    return 0;
}














   
   



























