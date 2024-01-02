#include <stdio.h>

void printPyramid(int rows) {
    int num = 1;

    for (int i = 1; i <= rows; i++) {
        // Print numbers
        for (int j = 1; j <= i; j++) {
            printf("%d", num++);
        }

        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print asterisk
        printf("*");

        // Print numbers in reverse order
        for (int j = 1; j <= i; j++) {
            printf("%d", num - j - 1);
        }

        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print asterisk
        printf("*");

        printf("\n");
    }
}

int main() {
    int rows;

    // Input the number of rows from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Call the function to print the pyramid
    printPyramid(rows);

    return 0;
}
