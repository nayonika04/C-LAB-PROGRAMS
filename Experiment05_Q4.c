// WAP that reads two matrices A (m x n) and B (p x q) and computes the product A and B. Read matrix A and matrix B in row major order respectively. Print both the input matrices and resultant matrix with suitable headings and output should be in matrix format only. Program must check the compatibility of orders of the matrices for multiplication. Report appropriate message in case of incompatibility.
#include <stdio.h>

void readMatrix(int matrix[][10], int rows, int cols, char name) {
    printf("Enter elements for Matrix %c (%d x %d) in row-major order:\n", name, rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[][10], int rows, int cols, char name) {
    printf("\nMatrix %c:\n", name);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%5d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int A[10][10], B[10][10], C[10][10];
    int m, n, p, q;

    printf("Enter number of rows for Matrix A: ");
    scanf("%d", &m);
    printf("Enter number of columns for Matrix A: ");
    scanf("%d", &n);

    printf("Enter number of rows for Matrix B: ");
    scanf("%d", &p);
    printf("Enter number of columns for Matrix B: ");
    scanf("%d", &q);

    if (n != p) {
        printf("\nError: Matrix multiplication is not possible. The number of columns in Matrix A must be equal to the number of rows in Matrix B.\n");
        return 1; 
    }

    readMatrix(A, m, n, 'A');
    readMatrix(B, p, q, 'B');

    printMatrix(A, m, n, 'A');
    printMatrix(B, p, q, 'B');

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            C[i][j] = 0; 
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printMatrix(C, m, q, 'C');

    return 0;
}