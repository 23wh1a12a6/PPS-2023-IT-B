#include <stdio.h>

void printCollatzSequence(int N) {
    while (N != 1) {
        // Print the current number in the sequence
        printf("%d -> ", N);

        // Check if the current number is even
        if (N % 2 == 0) {
            N = N / 2;  // If even, divide by 2
        } else {
            N = 3 * N + 1;  // If odd, multiply by 3 and add 1
        }
    }

    // Print the last element of the sequence (1)
    printf("1\n");
}

int main() {
    int N;

    // Input the starting positive integer N
    printf("Enter a positive integer N: ");
    scanf("%d", &N);

    // Validate input
    if (N <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;  // Exit with an error code
    }

    // Call the function to print the Collatz sequence
    printf("Collatz Sequence for %d:\n", N);
    printCollatzSequence(N);

    return 0;
}
