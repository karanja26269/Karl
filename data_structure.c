//simple C program 
/*
Name: Mbugua karanja
Reg no: CT100/G/26269/25
Description: 2D array
*/

#include <stdio.h>

int main() {
    int scores[2][2] = {{65, 92}, {84, 72}};

    // Nested loop to print elements
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n"); // New line after each row
    }
    return 0;
}