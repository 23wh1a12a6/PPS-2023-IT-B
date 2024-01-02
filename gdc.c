#include <stdio.h>

// Recursive function to find the factorial of a number
unsigned long long int recursiveFactorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * recursiveFactorial(n - 1);
    }
}

// Non-recursive function to find the factorial of a number
unsigned long long int nonRecursiveFactorial(int n) {
    unsigned long long int result = 1;

    for (int i = 1; i <= n; ++i) {
        result *= i;
    }

    return result;
}

// Recursive function to find the GCD of two numbers
int recursiveGCD(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return recursiveGCD(b, a % b);
    }
}

// Non-recursive function to find the GCD of two numbers
int nonRecursiveGCD(int a, int b) {
    int temp;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

// Recursive function to find x^n
double recursivePower(double x, int n) {
    if (n == 0) {
        return 1;
    } else if (n > 0) {
        return x * recursivePower(x, n - 1);
    } else {
        return 1 / (x * recursivePower(x, -n - 1));
    }
}

// Non-recursive function to find x^n
double nonRecursivePower(double x, int n) {
    double result = 1.0;

    if (n > 0) {
        for (int i = 0; i < n; ++i) {
            result *= x;
        }
    } else if (n < 0) {
        for (int i = 0; i < -n; ++i) {
            result /= x;
        }
    }

    return result;
}

int main() {
    // Factorial
    int factorialNumber;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &factorialNumber);

    printf("Recursive Factorial: %llu\n", recursiveFactorial(factorialNumber));
    printf("Non-Recursive Factorial: %llu\n", nonRecursiveFactorial(factorialNumber));

    // GCD
    int num1, num2;
    printf("\nEnter two numbers to find their GCD: ");
    scanf("%d %d", &num1, &num2);

    printf("Recursive GCD: %d\n", recursiveGCD(num1, num2));
    printf("Non-Recursive GCD: %d\n", nonRecursiveGCD(num1, num2));

    // Power
    double base;
    int exponent;
    printf("\nEnter base and exponent to find the power: ");
    scanf("%lf %d", &base, &exponent);

    printf("Recursive Power: %.6f\n", recursivePower(base, exponent));
    printf("Non-Recursive Power: %.6f\n", nonRecursivePower(base, exponent));

    return 0;
}
