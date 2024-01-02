	#include <stdio.h>
#include <math.h>

#define GRAVITY -9.8

void timeToReachEachFloor(int numberOfFloors, double floorHeight) {
    // Calculate time for each floor
    for (int floor = 1; floor <= numberOfFloors; ++floor) {
        double distance = floor * floorHeight;

        // Using the formula: s = ut + (1/2)at^2
        // Since u = 0, the formula simplifies to: s = (1/2)at^2
        double time = sqrt((2 * distance) / fabs(GRAVITY));

        printf("Time to reach floor %d: %.2f seconds\n", floor, time);
    }
}

int main() {
    int numberOfFloors = 10;
    double floorHeight = 3.0;

    // Calculate and print the time to reach each floor
    timeToReachEachFloor(numberOfFloors, floorHeight);

    return 0;
}
