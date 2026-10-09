/*
 * Experiment No: 13
 * Aim: Read two matrices of the same order, perform matrix
 *      addition and display the resultant matrix (2D array).
 */
#include <stdio.h>

int main() {
    int A[10][10], B[10][10], C[10][10];
    int rows, cols, i, j;

    printf("Enter number of rows and columns (max 10 each): ");
    scanf("%d %d", &rows, &cols);

    if (rows < 1 || rows > 10 || cols < 1 || cols > 10) {
        printf("Invalid matrix size!\n");
        return 1;
    }

    printf("Enter elements of matrix A:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of matrix B:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("\nResultant Matrix (A + B):\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
