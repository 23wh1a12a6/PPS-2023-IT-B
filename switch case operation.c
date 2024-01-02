	#include <stdio.h>

int main() {
    int operand1, operand2, result;
    char operator;

    // Input
    printf("Enter the first operand: ");
    scanf("%d", &operand1);

    printf("Enter the second operand: ");
    scanf("%d", &operand2);

    printf("Enter the operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);  // Note the space before %c to consume the newline character

    // Perform operation based on the operator
    switch (operator) {
        case '+':
            result = operand1 + operand2;
            break;
        case '-':
            result = operand1 - operand2;
            break;
        case '*':
            result = operand1 * operand2;
            break;
        case '/':
            // Check for division by zero
            if (operand2 != 0) {
                result = operand1 / operand2;
            } else {
                printf("Error: Division by zero is undefined.\n");
                return 1;  // Exit with an error code
            }
            break;
        case '%':
            // Check for modulus by zero
            if (operand2 != 0) {
                result = operand1 % operand2;
            } else {
                printf("Error: Modulus by zero is undefined.\n");
                return 1;  // Exit with an error code
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 1;  // Exit with an error code
    }

    // Output the result
    printf("Result: %d %c %d = %d\n", operand1, operator, operand2, result);

    return 0;
}

