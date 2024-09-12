#include <stdio.h>

void printFibonacciIterative(int n) {
    if (n <= 0) {
        printf("Input should be a positive integer\n");
        return;
    }
    int t1 = 0, t2 = 1;
    printf("%d %d ", t1, t2);
    for (int i = 3; i <= n; i++) {
        int nextTerm = t1 + t2;
        printf("%d ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printFibonacciIterative(n);
    return 0;
}
