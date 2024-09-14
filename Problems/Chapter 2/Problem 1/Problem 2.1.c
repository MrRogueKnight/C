/*
Problem 2.1
If lengths of three sides of a triangle are input through the keyboard, write a program to find the area of the triangle.
Output
Enter sides of a triangle: 4 5 6
Area of triangle = 9.921567
*/
#include<stdio.h>
int main(){
    float side1, side2, side3, area, s;
    printf("Enter sides of a triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);
    s = (side1 + side2 + side3)/2;
    area = sqrt(s*(s - side1) * (s - side2) * (s - side3));
    printf("Area of triangle = %f", area);
    return 0;
}
