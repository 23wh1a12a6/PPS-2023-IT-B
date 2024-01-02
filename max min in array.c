#include <stdio.h>

int main() {
    int size;

    // Input the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Check if the input size is valid
    if (size <= 0) {
        printf("Invalid array size. Please enter a positive size.\n");
        return 1; // Exit with an error code
    }

    int numbers[size];

    // Input the elements of the array from the user
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Initialize variables for minimum, maximum, and sum
    int min = numbers[0];
    int max = numbers[0];
    int sum = numbers[0];

    // Find minimum, maximum, and calculate the sum
    for (int i = 1; i < size; ++i) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
        if (numbers[i] > max) {
            max = numbers[i];
        }
        sum += numbers[i];
    }

    // Calculate the average
    double average = (double)sum / size;

    // Display the results
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    printf("Average: %.2f\n", average);

    return 0;
}
