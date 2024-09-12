#include <stdio.h>

// Function to find factorial of a number
unsigned long long find_factorial(int n) {
    if (n < 0) {
        printf("Input should be a non-negative integer\n");
        return -1;
    }
    unsigned long long factorial = 1;
    for (int i = 2; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    unsigned long long result = find_factorial(n);
    if (result != -1) {
        printf("Factorial of %d is: %llu\n", n, result);
    }
    return 0;
}
