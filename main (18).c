
#include <stdio.h>

int main() {
    
    

    
float side1, side2, side3;

    // Input the lengths of the sides
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    // First, check if the sides form a valid triangle
    if ((side1 + side2 <= side3) || (side2 + side3 <= side1) || (side1 + side3 <= side2)) {
        printf("The given sides do not form a valid triangle.\n");
    }
    else {
        // Classify the triangle
        if (side1 == side2 && side2 == side3) {
            printf("The triangle is Equilateral.\n");
        }
        else if (side1 == side2 || side2 == side3 || side1 == side3) {
            printf("The triangle is Isosceles.\n");
        }
        else {
            printf("The triangle is Scalene.\n");
        }
    }


    return 0;
}














   
   



























