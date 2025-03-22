/*
5. WAP to find the value of addition of two numbers (ii) double.
*/

#include <stdio.h>

int main() {
    double number1, number2, sum; // Declare variables for input and result

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%lf %lf", &number1, &number2);

    // Calculate the sum
    sum = number1 + number2;

    // Display the result
    printf("Sum: %.2lf\n", sum);
    getch();
    return 0;
}
