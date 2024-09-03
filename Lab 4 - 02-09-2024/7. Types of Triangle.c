/**
Title: Types of Triangle
WAP to check whether the triangle is equilateral, isosceles or scalene. (Triangle consists of three sides of provided lengths n1, n2 and n3 units).

Input:   (Set1: n1=3, n2=3, n3=4) 	(Set2: n1=4, n2=4, n3=4) 	(Set3: n1=4, n2 =5, n3=7)
Output:  (Set1: Isosceles) 		(Set2: Equilateral)		(Set3: Scalene)
**/
#include<stdio.h>
int main() {
    // Declare variables to store the lengths of the three sides of the triangle
    int n1, n2, n3;

    // Prompt the user to enter the lengths of the three sides
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    // Check if all three sides are equal (equilateral triangle)
    if (n1 == n2 && n2 == n3) {
        printf("The triangle is equilateral.");
    }
    // Check if any two sides are equal (isosceles triangle)
    else if (n1 == n2 || n2 == n3 || n1 == n3) {
        printf("The triangle is isosceles.");
    }
    // If none of the above conditions are true, it's a scalene triangle
    else {
        printf("The triangle is scalene.");
    }
    getch();
    return 0;
}
