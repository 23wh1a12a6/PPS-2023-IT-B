#include <stdio.h>

void fizzBuzz(int n) {
    for (int i = 1; i <= n; i++) {
        // Check for divisibility by both 3 and 5
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz\n");
        }
        // Check for divisibility by 3
        else if (i % 3 == 0) {
            printf("Fizz\n");
        }
        // Check for divisibility by 5
        else if (i % 5 == 0) {
            printf("Buzz\n");
        }
        // If none of the conditions are true, print the number
        else {
            printf("%d\n", i);
        }
    }
}

int main() {
    int n;

    // Input the value of n from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Call the FizzBuzz function
    fizzBuzz(n);

    return 0;
}
