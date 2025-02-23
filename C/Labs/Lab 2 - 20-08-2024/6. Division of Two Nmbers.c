/*
6. WAP to find the division of two two numbers (i) int (ii) double (iii) int/double (iv)
double/int.
*/

#include <stdio.h>

int main() {
    int num1, num2; // Declare variables for integer division
    double num3, num4; // Declare variables for double division

    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate integer division
    int intResult = num1 / num2;

    // Input two doubles
    printf("Enter two decimal numbers: ");
    scanf("%lf %lf", &num3, &num4);

    // Calculate double division
    double doubleResult = num3 / num4;

    // Display results
    printf("Integer division result: %d\n", intResult);
    printf("Double division result: %.2lf\n", doubleResult);

    // Calculate mixed division (double/int)
    double mixedResult = num3 / num2;
    printf("Mixed division (double/int) result: %.2lf\n", mixedResult);

    // Calculate mixed division (int/double)
    mixedResult = num1 / num4;
    printf("Mixed division (int/double) result: %.2lf\n", mixedResult);
    getch();
    return 0;
}
