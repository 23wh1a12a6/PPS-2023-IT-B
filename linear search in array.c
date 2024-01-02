#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// Function to perform linear search for the first occurrence of a prime number
int linearSearchForPrime(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (isPrime(arr[i])) {
            return i; // Index of the first occurrence of a prime number
        }
    }
    return -1; // No prime number found
}

int main() {
    int size;

    // Input the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input the elements of the array from the user
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Perform linear search for the first occurrence of a prime number
    int result = linearSearchForPrime(arr, size);

    // Display the result
    if (result != -1) {
        printf("First occurrence of prime number found at index: %d\n", result);
    } else {
        printf("No prime number found in the array.\n");
    }

    return 0;
}
