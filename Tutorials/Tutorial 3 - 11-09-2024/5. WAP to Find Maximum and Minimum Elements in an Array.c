#include <stdio.h>

int main() {
    int n;
    printf("Enter array size (N): ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter number%d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];
    int max_index = 0;
    int min_index = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            max_index = i;
        }
        if (arr[i] < min) {
            min = arr[i];
            min_index = i;
        }
    }

    printf("Largest element stored in an array: %d\n", max);
    printf("At: %d\n", max_index);
    printf("Smallest element stored at an array: %d\n", min);
    printf("At: %d\n", min_index);

    return 0;
}