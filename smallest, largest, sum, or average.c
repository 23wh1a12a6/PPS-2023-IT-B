#include <stdio.h>

// Function to display the menu and get user choice
int displayMenu() {
    int choice;

    printf("\nMenu:\n");
    printf("1. Find Smallest Number\n");
    printf("2. Find Largest Number\n");
    printf("3. Calculate Sum\n");
    printf("4. Calculate Average\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    return choice;
}

// Function to find the smallest number in an array
int findSmallest(int numbers[], int n) {
    int smallest = numbers[0];

    for (int i = 1; i < n; i++) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

    return smallest;
}

// Function to find the largest number in an array
int findLargest(int numbers[], int n) {
    int largest = numbers[0];

    for (int i = 1; i < n; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    return largest;
}

// Function to calculate the sum of numbers in an array
int calculateSum(int numbers[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += numbers[i];
    }

    return sum;
}

// Function to calculate the average of numbers in an array
float calculateAverage(int numbers[], int n) {
    if (n == 0) {
        return 0; // To avoid division by zero
    }

    int sum = calculateSum(numbers, n);
    return (float)sum / n;
}

int main() {
    int n;

    // Input the number of elements from the user
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int numbers[n];

    // Input the array elements from the user
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    int choice;
    int resultInt;
    float resultFloat;

    do {
        // Display the menu and get user choice
        choice = displayMenu();

        switch (choice) {
            case 1:
                resultInt = findSmallest(numbers, n);
                printf("Smallest Number: %d\n", resultInt);
                break;
            case 2:
                resultInt = findLargest(numbers, n);
                printf("Largest Number: %d\n", resultInt);
                break;
            case 3:
                resultInt = calculateSum(numbers, n);
                printf("Sum: %d\n", resultInt);
                break;
            case 4:
                resultFloat = calculateAverage(numbers, n);
                printf("Average: %.2f\n", resultFloat);
                break;
            case 5:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice! Please enter a valid option.\n");
                break;
        }

    } while (choice != 5);

    return 0;
}
