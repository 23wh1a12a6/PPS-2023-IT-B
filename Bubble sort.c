#include <stdio.h>

// Function to perform Bubble Sort
void bubbleSort(int list[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Swap if the element found is greater than the next element
            if (list[j] > list[j + 1]) {
                int temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;

    // Input the number of elements in the list
    printf("Enter the number of elements in the list: ");
    scanf("%d", &n);

    int list[n];

    // Input the elements of the list from the user
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &list[i]);
    }

    // Call the Bubble Sort function
    bubbleSort(list, n);

    // Display the sorted list
    printf("\nSorted List in Ascending Order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", list[i]);
    }

    return 0;
}
