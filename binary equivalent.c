#include <stdio.h>

int main() {
    int decimalNumber;

    // Input a positive number between 0 and 255 from the user
    printf("Enter a positive number between 0 and 255: ");
    scanf("%d", &decimalNumber);

    // Check if the input is within the valid range
    if (decimalNumber < 0 || decimalNumber > 255) {
        printf("Invalid input. Please enter a number between 0 and 255.\n");
        return 1; // Exit with an error code
    }

    // Display the binary equivalent
    printf("Binary Equivalent of %d: ", decimalNumber);

    // Iterate through each bit (from the most significant bit to the least significant bit)
    for (int bit = 7; bit >= 0; --bit) {
        // Use bitwise AND to check the value of the current bit
        int bitValue = (decimalNumber >> bit) & 1;
        printf("%d", bitValue);
    }

    printf("\n");

    return 0;
}
