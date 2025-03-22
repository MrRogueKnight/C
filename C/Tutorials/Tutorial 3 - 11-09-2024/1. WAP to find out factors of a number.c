#include <stdio.h>

// Function to find factors of a number
void find_factors(int n) {
    printf("The factors of %d are: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {

    // Set 1: n = 6
    // int n = 6;
    //find_factors(n);

    // Set 2: n = 21
    // n = 21;
    // find_factors(n);
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    find_factors(n);
    return 0;
}
