//simple_C_Program
/*
Name: Mbugua karanja
Reg no: CT100/G/26269/25
Description: room_occupation
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("=== 2D Array: Room Occupancy - Single Branch ===\n\n");
    
    int occupancy[5][10]; // 5 floors, 10 rooms per floor
    int occupiedPerFloor[5] = {0};
    int vacantPerFloor[5] = {0};
    
    // Seed random number generator
    srand(time(NULL));
    
    // Initialize with random occupancy data (1 = occupied, 0 = vacant)
    printf("Generating random occupancy data for 5 floors x 10 rooms...\n");
    for(int floor = 0; floor < 5; floor++) {
        for(int room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2; // Random 0 or 1
        }
    }
    
    // Calculate occupancy per floor
    for(int floor = 0; floor < 5; floor++) {
        for(int room = 0; room < 10; room++) {
            if(occupancy[floor][room] == 1) {
                occupiedPerFloor[floor]++;
            } else {
                vacantPerFloor[floor]++;
            }
        }
    }
    
    // Display occupancy grid
    printf("\nOccupancy Grid (1 = Occupied, 0 = Vacant):\n");
    for(int floor = 0; floor < 5; floor++) {
        printf("Floor %d: ", floor + 1);
        for(int room = 0; room < 10; room++) {
            printf("%d ", occupancy[floor][room]);
        }
        printf("\n");
    }
    
    // Display summary per floor
    printf("\n=== Occupancy Summary ===\n");
    int totalOccupied = 0, totalVacant = 0;
    for(int floor = 0; floor < 5; floor++) {
        printf("Floor %d: %2d occupied, %2d vacant\n", 
               floor + 1, occupiedPerFloor[floor], vacantPerFloor[floor]);
        totalOccupied += occupiedPerFloor[floor];
        totalVacant += vacantPerFloor[floor];
    }
    
    printf("\nTotal for Branch: %d occupied, %d vacant\n", totalOccupied, totalVacant);
    printf("Occupancy Rate: %.1f%%\n", (totalOccupied / 50.0) * 100);
    
    return 0;
}