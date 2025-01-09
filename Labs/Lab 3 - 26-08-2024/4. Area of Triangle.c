/*
4. WAP to calculate area of a triangle who’s base and height are user input.
*/
#include<stdio.h>

int main() {
    float base, height, area;

    // Ask user for input
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    printf("Enter the base of the triangle: ");
    scanf("%f", &base);

    // Calculate area
    area = 0.5 * base * height;

    // Display result
    printf("The area of the triangle is: %.2f\n", area);
    getch();
    return 0;
}
