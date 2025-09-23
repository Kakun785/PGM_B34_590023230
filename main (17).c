
#include <stdio.h>

int main() {
    
    

    int percentage;

    // Input percentage
    printf("Enter the percentage (0-100): ");
    scanf("%d", &percentage);

    // Check valid range
    if (percentage < 0 || percentage > 100) {
        printf("Invalid percentage! Please enter a value between 0 and 100.\n");
        return 1; // Exit with error
    }

    // Assign grade based on percentage
    if (percentage >= 90) {
        printf("Grade A\n");
    }
    else if (percentage >= 80) {
        printf("Grade B\n");
    }
    else if (percentage >= 70) {
        printf("Grade C\n");
    }
    else if (percentage >= 60) {
        printf("Grade D\n");
    }
    else {
        printf("Grade F\n");
    }


    return 0;
}














   
   



























