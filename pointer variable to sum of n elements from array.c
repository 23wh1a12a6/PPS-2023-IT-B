#include <stdio.h>

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

    // Use a pointer to read elements into the array
    int *ptr = arr;
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", ptr + i);
    }

    // Calculate the sum using a pointer
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += *(ptr + i);
    }

    // Display the sum
    printf("\nSum of the elements: %d\n", sum);

    return 0;
}
