#include <stdio.h>

// Function to print even series up to n
void print_even_series(int n) {
    printf("The even series up to %d is: ", n);
    for (int i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    print_even_series(n);

    return 0;
}
