//2. First and Last Digit Sum Calculator
// Program to find the sum of 1st and last digit of a six-digit number

#include <stdio.h>

int main() {
    int num; // variable to store the six-digit number
    printf("Enter the number: ");
    scanf("%d", &num); // input the number from the user

    // calculate the first and last digit
    int first_digit = num / 100000;
    int last_digit = num % 10;

    // calculate the sum
    int sum = first_digit + last_digit;

    // print the result
    printf("Sum of digits is: %d.\n", sum);
    return 0;
}