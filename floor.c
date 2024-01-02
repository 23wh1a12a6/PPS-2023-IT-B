#include <stdio.h>
#include <math.h>

#define GRAVITY 9.8 // Acceleration due to gravity in m/s^2

int main() {
    int numberOfFloors = 10;
    double floorHeight = 3.0; // Height of each floor in meters

    printf("Time taken to reach each floor:\n");

    for (int floor = 1; floor <= numberOfFloors; ++floor) {
        // Calculate time using the kinematic equation
        double time = sqrt((2 * floorHeight * floor) / GRAVITY);

        // Print the result for each floor
        printf("Floor %d: %.2f seconds\n", floor, time);
    }

    return 0;
}
