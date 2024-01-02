#include <stdio.h>

int sumOfDigits(int number) {
    int sum = 0;

    // Calculate the sum of individual digits
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }

    return sum;
}

int isPalindrome(int number) {
    int originalNumber = number;
    int reversedNumber = 0;

    // Reverse the digits to check for palindrome
    while (number > 0) {
        reversedNumber = reversedNumber * 10 + number % 10;
        number /= 10;
    }

    // Check if the reversed number is equal to the original number
    return originalNumber == reversedNumber;
}

int main() {
    int inputNumber;

    // Input a positive integer from the user
    printf("Enter a positive integer: ");
    scanf("%d", &inputNumber);

    // Calculate and print the sum of individual digits
    printf("Sum of individual digits: %d\n", sumOfDigits(inputNumber));

    // Check and print whether the number is a palindrome
    if (isPalindrome(inputNumber)) {
        printf("%d is a palindrome.\n", inputNumber);
    } else {
        printf("%d is not a palindrome.\n", inputNumber);
    }

    return 0;
}
