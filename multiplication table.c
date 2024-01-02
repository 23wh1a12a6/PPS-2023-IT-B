#include <stdio.h>

int main() {
    int number, numberOfRows;

    // Input number from the user
    printf("Enter the number for the multiplication table: ");
    scanf("%d", &number);

    // Input number of rows from the user
    printf("Enter the number of rows in the table: ");
    scanf("%d", &numberOfRows);

    // Display the multiplication table
    printf("\nMultiplication Table for %d up to %d rows:\n", number, numberOfRows);
    for (int i = 1; i <= numberOfRows; ++i) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}
