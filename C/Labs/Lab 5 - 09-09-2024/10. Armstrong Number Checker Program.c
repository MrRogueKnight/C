// Program to check if a number is an Armstrong number

#include <stdio.h>

int main() {
    int n; // variable to store the number
    printf("Enter a number: ");
    scanf("%d", &n); // input the number from the user

    int original_num = n; // store the original number
    int sum = 0; // variable to store the sum of cubes of digits

    // calculate the sum of cubes of digits
    while (n != 0) {
        int digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }

    // check if the number is an Armstrong number
    if (sum == original_num) {
        printf("The given number is Armstrong.\n");
    } else {
        printf("The given number is not Armstrong.\n");
    }

    return 0;
}