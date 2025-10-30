// 2D
/*
Name STEPHEN M KAMAMA
Registration number CT100/G/26235/25
Course BSC IT
Description 2D ARRAYS FOR ROOM OCCUPANCY 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FLOORS 5
#define ROOMS 10

int main() {
    int occupancy[FLOORS][ROOMS];
    int i, j;

    srand(time(NULL)); // for random numbers

    // Assign random occupancy (0 or 1)
    for (i = 0; i < FLOORS; i++) {
        for (j = 0; j < ROOMS; j++) {
            occupancy[i][j] = rand() % 2;
        }
    }

    // Display results
    printf("Room Occupancy (1 = occupied, 0 = vacant)\n");
    for (i = 0; i < FLOORS; i++) {
        int occupied = 0, vacant = 0;
        printf("Floor %d: ", i + 1);
        for (j = 0; j < ROOMS; j++) {
            printf("%d ", occupancy[i][j]);
            if (occupancy[i][j] == 1)
                occupied++;
            else
                vacant++;
        }
        printf(" -> Occupied: %d, Vacant: %d\n", occupied, vacant);
    }
    return 0;
    }