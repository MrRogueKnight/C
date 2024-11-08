#include <stdio.h>

void findTwoOddOccurrences(int arr[], int n) {
    int xor = 0, num1 = 0, num2 = 0;

    // Step 1: XOR all elements in the array
    for (int i = 0; i < n; i++) {
        xor ^= arr[i];
    }

    // Step 2: Find a set bit in xor (any bit where xor has a 1, indicating a difference)
    int set_bit = xor & ~(xor - 1);  // This isolates the rightmost set bit

    // Step 3: Divide numbers into two groups and XOR within each group
    for (int i = 0; i < n; i++) {
        if (arr[i] & set_bit) {
            num1 ^= arr[i];  // XOR of first group
        } else {
            num2 ^= arr[i];  // XOR of second group
        }
    }

    // Output the result
    printf("The two numbers with odd occurrences are: %d and %d\n", num1, num2);
}

int main() {
    int arr1[] = {12, 23, 34, 12, 12, 23, 12, 45};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    findTwoOddOccurrences(arr1, n1);

    int arr2[] = {4, 4, 100, 5000, 4, 4, 4, 4, 100, 100};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    findTwoOddOccurrences(arr2, n2);

    int arr3[] = {10, 20};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    findTwoOddOccurrences(arr3, n3);

    return 0;
}
