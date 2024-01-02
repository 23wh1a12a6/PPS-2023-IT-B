#include <stdio.h>
#include <math.h>

// Function to compute the mean of an array
double computeMean(int arr[], int n) {
    double sum = 0.0;

    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }

    return sum / n;
}

// Function to compute the variance of an array
double computeVariance(int arr[], int n, double mean) {
    double variance = 0.0;

    for (int i = 0; i < n; ++i) {
        variance += pow(arr[i] - mean, 2);
    }

    return variance / n;
}

// Function to compute the standard deviation of an array
double computeStandardDeviation(int arr[], int n, double mean) {
    return sqrt(computeVariance(arr, n, mean));
}

// Function to sort an array in ascending order
void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;

    // Input the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Check if the input size is valid
    if (n <= 0) {
        printf("Invalid array size. Please enter a positive size.\n");
        return 1; // Exit with an error code
    }

    int arr[n];

    // Input the elements of the array from the user
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Compute mean, variance, and standard deviation
    double mean = computeMean(arr, n);
    double variance = computeVariance(arr, n, mean);
    double stdDeviation = computeStandardDeviation(arr, n, mean);

    // Display results
    printf("\nMean: %.2f\n", mean);
    printf("Variance: %.2f\n", variance);
    printf("Standard Deviation: %.2f\n", stdDeviation);

    // Sort the array
    sortArray(arr, n);

    // Display the sorted array
    printf("\nSorted Array:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }

    return 0;
}
