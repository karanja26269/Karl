//simple C program 
/*
Name: Mbugua zacheus karanja
Reg no: CT100/G/26269/25
description: sales_transaction_calculators
*/
 
 #include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    double amount, total = 0.0;
    char buffer[100];
    int transaction_count = 0;
    
    // Open file for reading
    file = fopen("sales.txt", "r");
    
    if (file == NULL) {
        printf("Error opening sales.txt file!\n");
        return 1;
    }
    
    // Read each line and calculate total
    while (fgets(buffer, sizeof(buffer), file)) {
        // Convert string to double
        amount = atof(buffer);
        total += amount;
        transaction_count++;
    }
    
    // Display results
    printf("=== Daily Sales Summary ===\n");
    printf("Transactions Processed: %d\n", transaction_count);
    printf("Total Sales: $%.2f\n", total);
    printf("===========================\n");
    
    // Close file
    fclose(file);
    printf("File closed successfully.\n");
    
    return 0;
}