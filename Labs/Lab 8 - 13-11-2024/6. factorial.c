#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    if (n < 0) {
        return -1;  // Return -1 for negative numbers (invalid input for factorial)
    }
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;

    // Take input from the user
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Call the factorial function and print the result
    int result = factorial(num);

    // Check if the input was valid
    if (result == -1) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %d\n", num, result);
    }

    return 0;
}
/**
Output:Enter a non-negative integer: 5
Factorial of 5 is 120
*/
