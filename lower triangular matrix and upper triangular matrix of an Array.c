#include <stdio.h>

// Function to print the lower triangular matrix
void printLowerTriangularMatrix(int mat[][10], int n) {
    printf("Lower Triangular Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i >= j) {
                printf("%d ", mat[i][j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

// Function to print the upper triangular matrix
void printUpperTriangularMatrix(int mat[][10], int n) {
    printf("\nUpper Triangular Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i <= j) {
                printf("%d ", mat[i][j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main() {
    int n;

    // Input the size of the square matrix from the user
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    // Input the elements of the square matrix from the user
    int mat[10][10];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter element mat[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    // Call functions to print lower and upper triangular matrices
    printLowerTriangularMatrix(mat, n);
    printUpperTriangularMatrix(mat, n);

    return 0;
}
