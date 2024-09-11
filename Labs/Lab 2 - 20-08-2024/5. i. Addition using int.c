/*
5. WAP to find the value of addition of two numbers (i) int
*/
#include <stdio.h>

int main() {
    int number1, number2, sum; // Declare variables for input and result

    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // Calculate the sum
    sum = number1 + number2;

    // Display the result
    printf("%d + %d = %d\n", number1, number2, sum);
    getch();
    return 0;
}
