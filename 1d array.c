//simple C program 
/*
Name: Mbugua karanja
Reg no: CT100/G/26269/25
Description: 1D array
*/

#include <stdio.h>

int main() {
    printf("=== 1D Array: Weekly Revenue Tracker ===\n\n");
    
    double revenue[7]; // 1D array for 7 days
    const char *days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", 
                         "Friday", "Saturday", "Sunday"};
    double totalRevenue = 0.0;
    
    // Input revenue for each day
    printf("Enter daily revenue for the week:\n");
    for(int i = 0; i < 7; i++) {
        printf("Enter revenue for %s: $", days[i]);
        scanf("%lf", &revenue[i]);
        totalRevenue += revenue[i];
    }
    
    // Display results
    printf("\n=== Weekly Revenue Report ===\n");
    for(int i = 0; i < 7; i++) {
        printf("%-10s: $%8.2f\n", days[i], revenue[i]);
    }
    
    printf("\nTotal Weekly Revenue: $%.2f\n", totalRevenue);
    printf("Average Daily Revenue: $%.2f\n", totalRevenue / 7);
    
    return 0;
}