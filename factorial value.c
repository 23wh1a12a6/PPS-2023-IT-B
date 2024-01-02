#include <stdio.h>
#include <math.h>

int main() {
    double x, result;

    // Input the value of x from the user
    printf("Enter the value of x: ");
    scanf("%lf", &x);

    // Calculate the expression
    result = 1 - x / 2 + pow(x, 2) / 4 - pow(x, 3) / 6;

    // Display the result
    printf("Result: %.4f\n", result);

    return 0;
}
