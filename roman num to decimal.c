#include <stdio.h>
#include <string.h>

int romanToDecimal(char romanNumeral[]) {
    int decimalValue = 0;
    int length = strlen(romanNumeral);

    for (int i = 0; i < length; i++) {
        switch (romanNumeral[i]) {
            case 'I':
                decimalValue += 1;
                break;
            case 'V':
                decimalValue += 5;
                break;
            case 'X':
                decimalValue += 10;
                break;
            case 'L':
                decimalValue += 50;
                break;
            // Add more cases for other Roman numerals if needed
            default:
                printf("Invalid Roman numeral: %c\n", romanNumeral[i]);
                return -1;  // Return -1 for an error
        }
    }

    return decimalValue;
}

int main() {
    char romanNumeral[100];

    // Input the Roman numeral from the user
    printf("Enter a Roman numeral (I to L): ");
    scanf("%s", romanNumeral);

    // Convert and display the decimal equivalent
    int decimalValue = romanToDecimal(romanNumeral);

    if (decimalValue != -1) {
        printf("Decimal equivalent: %d\n", decimalValue);
    }

    return 0;
}
