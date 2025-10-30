// 3D
/*
Name STEPHEN M KAMAMA
Registration number CT100/G/26235/25
Course BSC IT
Description 3D ARRAYS HOTEL CHAIN
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BRANCHES 3
#define FLOORS 5
#define ROOMS 10

int main() {
    int chain[BRANCHES][FLOORS][ROOMS];
    int b, f, r;
    int totalOccupied = 0;

    srand(time(NULL));

    // Assign random occupancy (1 or 0)
    for (b = 0; b < BRANCHES; b++) {
        for (f = 0; f < FLOORS; f++) {
            for (r = 0; r < ROOMS; r++) {
                chain[b][f][r] = rand() % 2;
            }
        }
    }

    // Calculate totals
    for (b = 0; b < BRANCHES; b++) {
        int branchTotal = 0;
        printf("\nBranch %d:\n", b + 1);
        for (f = 0; f < FLOORS; f++) {
            int floorOccupied = 0;
            for (r = 0; r < ROOMS; r++) {
                if (chain[b][f][r] == 1)
                    floorOccupied++;
            }
            printf("  Floor %d Occupied Rooms: %d\n", f + 1, floorOccupied);
            branchTotal += floorOccupied;
        }
        printf("Total Occupied in Branch %d = %d\n", b + 1, branchTotal);
        totalOccupied += branchTotal;
    }

    printf("\nTotal Occupied Rooms Across All Branches = %d\n", totalOccupied);

    return 0;
}