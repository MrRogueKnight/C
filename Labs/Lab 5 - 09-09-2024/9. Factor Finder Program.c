// Program to find the factors of a number

#include <stdio.h>

int main() {
    int n; // variable to store the number
    printf("Enter a number: ");
    scanf("%d", &n); // input the number from the user

    printf("The factors are: ");
    // find the factors
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}