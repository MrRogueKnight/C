/*
Problem 2.2
If a five-digit number is input through the keyboard, write a program to reverse the number.
Output:
Enter a five digit number (less than 32767): 12345
The reversed number is 54321
*/
#include <stdio.h>

int main() {
    int originalNumber, digit1, digit2, digit3, digit4, digit5;
    long int reversedNumber;

    printf("\nEnter a five-digit number (less than 32767): ");
    scanf("%d", &originalNumber);

    // Extract each digit from the original number
    digit5 = originalNumber % 10; // 5th digit
    originalNumber = originalNumber / 10; // remaining digits

    digit4 = originalNumber % 10; // 4th digit
    originalNumber = originalNumber / 10; // remaining digits

    digit3 = originalNumber % 10; // 3rd digit
    originalNumber = originalNumber / 10; // remaining digits

    digit2 = originalNumber % 10; // 2nd digit
    originalNumber = originalNumber / 10; // remaining digits

    digit1 = originalNumber % 10; // 1st digit

    // Calculate the reversed number
    reversedNumber = digit5 * 10000 + digit4 * 1000 + digit3 * 100 + digit2 * 10 + digit1;

    printf("The reversed number is %ld\n", reversedNumber);

    return 0;
}
