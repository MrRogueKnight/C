#include <stdio.h>

// Function to print Fibonacci series using iteration
void fibonacci_iterative(int n) {
    int t1 = 0, t2 = 1;
    printf("The Fibonacci series up to %d terms is: ", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", t1);
        int temp = t1 + t2;
        t1 = t2;
        t2 = temp;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    fibonacci_iterative(n);

    return 0;
}