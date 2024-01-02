#include <stdio.h>
#include <math.h>

int main() {
    double x;
    int n;

    // Input values for x and n from the user
    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of the geometric progression
    double sum = 0;
    for (int i = 0; i <= n; ++i) {
        sum += pow(x, i);
    }

    // Display the result
    printf("Sum of the geometric progression: %.2f\n", sum);

    return 0;
}
