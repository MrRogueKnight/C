#include <stdio.h>

void printFibonacciRecursive(int n) {
    if (n <= 0) {
        printf("Input should be a positive integer\n");
        return;
    }
    int t1 = 0, t2 = 1;
    printf("%d %d ", t1, t2);
    printFibonacciRecursiveUtil(n - 2, t1, t2);
}

void printFibonacciRecursiveUtil(int n, int t1, int t2) {
    if (n <= 0) return;
    int nextTerm = t1 + t2;
    printf("%d ", nextTerm);
    printFibonacciRecursiveUtil(n - 1, t2, nextTerm);
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printFibonacciRecursive(n);
    return 0;
}
