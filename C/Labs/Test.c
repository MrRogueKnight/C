/* 
a) Algorithm

    Start.
    Declare matrices A, B, C and variables for dimensions.
    Input dimensions of matrices A and B.
    Verify if multiplication is possible: Columns of A==Rows of BColumns of A==Rows of B.
    Input elements of A and B.
    Perform matrix multiplication:
        For each cell C[i][j]C[i][j], compute sum=∑k=0n−1A[i][k]×B[k][j]sum=∑k=0n−1​A[i][k]×B[k][j].
    Display the resultant matrix C.
    End.
*/
// b) Optimized Code

#include <stdio.h>
void inputMatrix(int matrix[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[10][10], B[10][10], C[10][10] = {0};
    int m, n, p, q;

    printf("Enter rows and columns of matrix A: ");
    scanf("%d %d", &m, &n);
    printf("Enter rows and columns of matrix B: ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    printf("Enter elements of matrix A:\n");
    inputMatrix(A, m, n);

    printf("Enter elements of matrix B:\n");
    inputMatrix(B, p, q);

    // Optimized matrix multiplication
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Resultant Matrix:\n");
    printMatrix(C, m, q);

    return 0;
}

/*
c) Output

Input:
Matrix A (2x3):
1 2 3
4 5 6

Matrix B (3x2):
7 8
9 10
11 12

Output:

Resultant Matrix:
58 64
139 154

d) Conclusion
    This program effectively performs matrix multiplication and displays the resultant matrix.
    Reusable Functions: Created functions for matrix input and output to reduce code redundancy.
    Initialization: Pre-initialized matrix C with zeros to avoid garbage values.
    Optimized Looping: Minimized redundant operations during multiplication.
*/