//3. Three-Digit Number Digit Sum Calculator
// Program to find the sum of all digits of a three-digit number

#include <stdio.h>

int main() {
    int num; // variable to store the three-digit number
    printf("Enter the number: ");
    scanf("%d", &num); // input the number from the user

    // initialize the sum variable
    int sum = 0;

    // calculate the sum of digits
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }

    // print the result
    printf("Sum of digits is: %d.\n", sum);
    return 0;
}