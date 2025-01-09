/*
3. WAP to calculate area of a circle while taking radius as user input.
*/
#include<stdio.h>
#define PI 3.14159

int main() {
    float radius, area;

    // Ask user for input
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area
    area = PI * radius * radius;

    // Display result
    printf("The area is: %.2f\n", area);
    getch();
    return 0;
}
