#include <stdio.h>

// Function to print Fibonacci series using recursion
void fibonacci_recursive(int n, int t1, int t2) {
    if (n <= 0) {
        printf("Input should be a positive integer\n");
        return;
    }
    if (n == 1) {
        printf("%d ", t1);
        return;
    }
    printf("%d %d ", t1, t2);
    fibonacci_recursive(n - 1, t2, t1 + t2);
}

void print_fibonacci_recursive(int n) {
    printf("The Fibonacci series up to %d terms is: ", n);
    fibonacci_recursive(n, 0, 1);
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    print_fibonacci_recursive(n);

    return 0;
}