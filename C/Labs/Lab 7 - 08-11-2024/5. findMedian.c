#include <stdio.h>
#include <limits.h>

// Function to count elements less than or equal to `x` in a sorted row
int countLessThanOrEqual(int row[], int c, int x) {
    int low = 0, high = c - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (row[mid] <= x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;
}

// Function to find the median of a row-wise sorted matrix
int findMedian(int matrix[][3], int r, int c) {
    int min = INT_MAX, max = INT_MIN;
    for (int i = 0; i < r; i++) {
        if (matrix[i][0] < min) min = matrix[i][0];
        if (matrix[i][c - 1] > max) max = matrix[i][c - 1];
    }

    int desired = (r * c + 1) / 2;
    while (min < max) {
        int mid = min + (max - min) / 2;
        int place = 0;

        for (int i = 0; i < r; i++)
            place += countLessThanOrEqual(matrix[i], c, mid);

        if (place < desired)
            min = mid + 1;
        else
            max = mid;
    }
    return min;
}

int main() {
    int matrix[3][3] = { {1, 3, 5}, {2, 6, 9}, {3, 6, 9} };
    int r = 3, c = 3;
    printf("Median is %d\n", findMedian(matrix, r, c));
    return 0;
}
