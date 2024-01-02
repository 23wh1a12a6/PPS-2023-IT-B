#include <stdio.h>

void generateFibonacci(int n) {
    int firstTerm = 0, secondTerm = 1, nextTerm;

    printf("Fibonacci Sequence (First %d terms):\n", n);

    for (int i = 0; i < n; ++i) {
        // Print the current term
        printf("%d ", firstTerm);

        // Calculate the next term by adding the previous two terms
        nextTerm = firstTerm + secondTerm;

        // Update the values of firstTerm and secondTerm for the next iteration
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }

    printf("\n");
}

int main() {
    int numberOfTerms;

    // Input the number of terms from the user
    printf("Enter the number of terms in the Fibonacci sequence: ");
    scanf("%d", &numberOfTerms);

    // Check if the input is valid
    if (numberOfTerms <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1; // Exit with an error code
    }

    // Generate and print the Fibonacci sequence
    generateFibonacci(numberOfTerms);

    return 0;
}
