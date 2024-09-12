#include <stdio.h>

int main() {
    int N;
    printf("Enter array size (N): ");
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        printf("Enter number%d: ", i+1);
        scanf("%d", &arr[i]);
    }

    int max = arr[0], min = arr[0];
    int maxIndex = 0, minIndex = 0;

    for (int i = 1; i < N; i++) {
        if (arr[i] > max) {
            max = arr[i];
            maxIndex = i;
        }
        if (arr[i] < min) {
            min = arr[i];
            minIndex = i;
        }
    }

    printf("Largest element stored in an array: %d At : %d\n", max, maxIndex);
    printf("Smallest element stored at an array: %d At : %d\n", min, minIndex);

    return 0;
}
