//simple_C_program
/* 
Name: Mbugua karanja 
Reg no:CT100/G/26269/25
DESCRIPTION : Multiple_Branches_occupation
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("=== 3D Array: Multiple Branches Occupancy ===\n\n");
    
    int chain[3][5][10]; // 3 branches, 5 floors each, 10 rooms per floor
    int totalOccupiedAllBranches = 0;
    
    // Seed random number generator
    srand(time(NULL));
    
    // Initialize with random occupancy data
    printf("Generating random occupancy data for 3 branches...\n");
    for(int branch = 0; branch < 3; branch++) {
        for(int floor = 0; floor < 5; floor++) {
            for(int room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2; // Random 0 or 1
            }
        }
    }
    
    // Calculate occupancy for each branch and total
    printf("\n=== Branch-wise Occupancy ===\n");
    for(int branch = 0; branch < 3; branch++) {
        int branchOccupied = 0;
        int branchVacant = 0;
        
        for(int floor = 0; floor < 5; floor++) {
            for(int room = 0; room < 10; room++) {
                if(chain[branch][floor][room] == 1) {
                    branchOccupied++;
                } else {
                    branchVacant++;
                }
            }
        }
        
        printf("Branch %d: %2d occupied, %2d vacant (%.1f%% occupancy)\n", 
               branch + 1, branchOccupied, branchVacant, 
               (branchOccupied / 50.0) * 100);
        
        totalOccupiedAllBranches += branchOccupied;
    }
    
    // Display detailed view of first branch (as sample)
    printf("\n=== Sample Detailed View (Branch 1) ===\n");
    for(int floor = 0; floor < 5; floor++) {
        printf("Branch 1 - Floor %d: ", floor + 1);
        for(int room = 0; room < 10; room++) {
            printf("%d", chain[0][floor][room]);
        }
        printf("\n");
    }
    
    // Final summary
    int totalRooms = 3 * 5 * 10; // 3 branches × 5 floors × 10 rooms
    printf("\n=== Overall Summary ===\n");
    printf("Total rooms across all branches: %d\n", totalRooms);
    printf("Total occupied rooms: %d\n", totalOccupiedAllBranches);
    printf("Total vacant rooms: %d\n", totalRooms - totalOccupiedAllBranches);
    printf("Overall occupancy rate: %.1f%%\n", 
           (totalOccupiedAllBranches / (float)totalRooms) * 100);
    
    return 0;
}