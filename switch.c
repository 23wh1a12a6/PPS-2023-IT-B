#include <stdio.h>

int main() {
    int operand1, operand2;
    char operator;

    // Input two integer operands from the user
    printf("Enter the first operand: ");
    scanf("%d", &operand1);

    printf("Enter the second operand: ");
    scanf("%d", &operand2);

    // Input the operator from the user
    printf("Enter the operator (+, -, *, /, %%): ");
    scanf(" %c", &operator); // Note the space before %c to consume any newline character left in the buffer

    // Perform the operation based on the operator
    switch (operator) {
        case '+':
            printf("Result: %d + %d = %d\n", operand1, operand2, operand1 + operand2);
            break;
        case '-':
            printf("Result: %d - %d = %d\n", operand1, operand2, operand1 - operand2);
            break;
        case '*':
            printf("Result: %d * %d = %d\n", operand1, operand2, operand1 * operand2);
            break;
        case '/':
            if (operand2 != 0) {
                printf("Result: %d / %d = %.2f\n", operand1, operand2, (float)operand1 / operand2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case '%':
            if (operand2 != 0) {
                printf("Result: %d %% %d = %d\n", operand1, operand2, operand1 % operand2);
            } else {
                printf("Error: Modulo by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}
