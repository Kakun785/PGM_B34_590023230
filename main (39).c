
#include <stdio.h>
#include <string.h>

int main() {
    char binary[100];

    printf("Enter a binary number: ");
    scanf("%s", binary);

    // Find length of the binary string
    int length = strlen(binary);

    // Flip each bit
    for (int i = 0; i < length; i++) {
        if (binary[i] == '0') {
            binary[i] = '1';
        } else if (binary[i] == '1') {
            binary[i] = '0';
        } else {
            // Invalid character found
            printf("Invalid binary number.\n");
            return 1;
        }
    }

    printf("1's complement: %s\n", binary);

    return 0;
}
