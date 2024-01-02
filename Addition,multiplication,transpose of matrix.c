#include <stdio.h>
#include <stdlib.h>

// Function to add two matrices
void addMatrices(int **matrix1, int **matrix2, int **result, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int **matrix1, int rows1, int cols1, int **matrix2, int rows2, int cols2, int **result) {
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            result[i][j] = 0;

            for (int k = 0; k < cols1; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

// Function to transpose a matrix
void transposeMatrix(int **matrix, int rows, int cols, int **result) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[j][i] = matrix[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int **matrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows1, cols1, rows2, cols2;

    // Input dimensions of the first matrix
    printf("Enter the dimensions of the first matrix (rows columns): ");
    scanf("%d %d", &rows1, &cols1);

    // Input dimensions of the second matrix
    printf("Enter the dimensions of the second matrix (rows columns): ");
    scanf("%d %d", &rows2, &cols2);

    // Check if matrix dimensions are valid for addition and multiplication
    if (rows1 != rows2 || cols1 != cols2) {
        printf("Invalid matrix dimensions for addition and multiplication.\n");
        return 1; // Exit with an error code
    }

    // Dynamically allocate memory for matrices
    int **matrix1 = (int **)malloc(rows1 * sizeof(int *));
    int **matrix2 = (int **)malloc(rows2 * sizeof(int *));
    int **resultAddition = (int **)malloc(rows1 * sizeof(int *));
    int **resultMultiplication = (int **)malloc(rows1 * sizeof(int *));
    int **resultTranspose = (int **)malloc(cols1 * sizeof(int *));

    for (int i = 0; i < rows1; ++i) {
        matrix1[i] = (int *)malloc(cols1 * sizeof(int));
        matrix2[i] = (int *)malloc(cols2 * sizeof(int));
        resultAddition[i] = (int *)malloc(cols1 * sizeof(int));
        resultMultiplication[i] = (int *)malloc(cols2 * sizeof(int));
    }

    for (int i = 0; i < cols1; ++i) {
        resultTranspose[i] = (int *)malloc(rows1 * sizeof(int));
    }

    // Input elements of the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols1; ++j) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements of the second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows2; ++i) {
        for (int j = 0; j < cols2; ++j) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Perform addition
    addMatrices(matrix1, matrix2, resultAddition, rows1, cols1);

    // Perform multiplication
    multiplyMatrices(matrix1, rows1, cols1, matrix2, rows2, cols2, resultMultiplication);

    // Perform transpose
    transposeMatrix(matrix1, rows1, cols1, resultTranspose);

    // Display matrices and results
    printf("\nMatrix 1:\n");
    displayMatrix(matrix1, rows1, cols1);

    printf("\nMatrix 2:\n");
    displayMatrix(matrix2, rows2, cols2);

    printf("\nMatrix Addition (Matrix 1 + Matrix 2):\n");
    displayMatrix(resultAddition, rows1, cols1);

    printf("\nMatrix Multiplication (Matrix 1 * Matrix 2):\n");
    displayMatrix(resultMultiplication, rows1, cols2);

    printf("\nTranspose of Matrix 1:\n");
    displayMatrix(resultTranspose, cols1, rows1);

    // Free dynamically allocated memory
    for (int i = 0; i < rows1; ++i) {
        free(matrix1[i]);
        free(matrix2[i]);
        free(resultAddition[i]);
        free(resultMultiplication[i]);
    }

    for (int i = 0; i < cols1; ++i) {
        free(resultTranspose[i]);
    }

    free(matrix1);
    free(matrix2);
    free(resultAddition);
    free(resultMultiplication);
    free(resultTranspose);

    return 0;
}
