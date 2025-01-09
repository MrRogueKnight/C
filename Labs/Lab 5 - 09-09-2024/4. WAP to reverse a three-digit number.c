// 4. Three-Digit Number Reverser
// Program to reverse a three-digit number

#include <stdio.h>

int main() {
    int num; // variable to store the three-digit number
    printf("Enter the number: ");
    scanf("%d", &num); // input the number from the user

    // initialize the reversed number variable
    int reversed_num = 0;

    // reverse the number
    while (num != 0) {
        reversed_num = reversed_num * 10 + num % 10;
        num /= 10;
    }

    // print the result
    printf("Reversed number is: %d.\n", reversed_num);
    return 0;
}