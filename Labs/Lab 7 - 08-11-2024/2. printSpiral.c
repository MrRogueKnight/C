#include <stdio.h>

void printSpiral(int rows, int cols, int arr[rows][cols]) {
    int top = 0, bottom = rows - 1;
    int left = 0, right = cols - 1;

    while (top <= bottom && left <= right) {
        // Print the top row
        for (int i = left; i <= right; i++) {
            printf("%d ", arr[top][i]);
        }
        top++;

        // Print the right column
        for (int i = top; i <= bottom; i++) {
            printf("%d ", arr[i][right]);
        }
        right--;

        // Print the bottom row (if still within bounds)
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                printf("%d ", arr[bottom][i]);
            }
            bottom--;
        }

        // Print the left column (if still within bounds)
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                printf("%d ", arr[i][left]);
            }
            left++;
        }
    }
}

int main() {
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int rows = 4, cols = 4;
    printf("Spiral order of the matrix:\n");
    printSpiral(rows, cols, arr);

    return 0;
}
