#include <stdio.h>

void convertToRoman(int num) {
    if (num < 1 || num > 50) {
        printf("Number out of range (1 to 50).\n");
        return;
    }

    printf("Roman equivalent: ");

    while (num >= 50) {
        printf("L");
        num -= 50;
    }

    while (num >= 40) {
        printf("XL");
        num -= 40;
    }

    while (num >= 10) {
        printf("X");
        num -= 10;
    }

    while (num >= 9) {
        printf("IX");
        num -= 9;
    }

    while (num >= 5) {
        printf("V");
        num -= 5;
    }

    while (num >= 4) {
        printf("IV");
        num -= 4;
    }

    while (num >= 1) {
        printf("I");
        num -= 1;
    }

    printf("\n");
}

int main() {
    int num;

    // Input the number from the user
    printf("Enter a number (1 to 50): ");
    scanf("%d", &num);

    // Convert and display the Roman equivalent
    convertToRoman(num);

    return 0;
}
