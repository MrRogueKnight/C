/* 6. Develop a C function that takes a 2D array as a parameter and uses pointers to calculate the sum of each row, storing the results in a separate array.*/
#include <stdio.h>

// Function to calculate the sum of each row in a 2D array
void sumRows(int rows, int cols, int (*arr)[cols], int *rowSums) {
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += *(*(arr + i) + j);  // Pointer arithmetic to access the 2D array elements
        }
        *(rowSums + i) = sum;  // Store the sum in the rowSums array
    }
}

int main() {
    int rows, cols;

    // Input the dimensions of the 2D array
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];  // Declare a 2D array
    int rowSums[rows];    // Array to store the sum of each row

    // Input the elements of the 2D array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Call the function to calculate row sums
    sumRows(rows, cols, arr, rowSums);

    // Output the row sums
    printf("Sum of each row:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d: %d\n", i + 1, rowSums[i]);
    }

    return 0;
}

/*
Enter the number of rows: 2
Enter the number of columns: 2
Enter the elements of the array:
1 2
3 4
Sum of each row:
Row 1: 3
Row 2: 7
*/
