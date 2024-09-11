#include <stdio.h>

// Function to find factorial of a number
int find_factorial(int n) {
    if (n < 0) {
        printf("Input should be a non-negative integer\n");
        return -1;
    }
    int factorial = 1;
    for (int i = 2; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int result = find_factorial(n);
    if (result != -1) {
        printf("Factorial of %d is: %d\n", n, result);
    }

    return 0;
}
``