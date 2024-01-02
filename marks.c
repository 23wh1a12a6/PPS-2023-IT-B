#include <stdio.h>

int main() {
    float percentage;

    // Input percentage from the user
    printf("Enter the percentage of marks: ");
    scanf("%f", &percentage);

    // Determine the class awarded based on the percentage
    if (percentage < 40.0) {
        printf("Class Awarded: Failed\n");
    } else if (percentage < 60.0) {
        printf("Class Awarded: Second Class\n");
    } else if (percentage < 70.0) {
        printf("Class Awarded: First Class\n");
    } else {
        printf("Class Awarded: Distinction\n");
    }

    return 0;
}
