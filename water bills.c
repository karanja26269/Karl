/*
Name : karanja
Reg: CT100/G/26269/25
description: water bills
*/

#include <stdio.h>

int main() {
    int units;
    float total_bill;
    
    printf("Enter water units consumed: ");
    scanf("%d", &units);
    
    if (units >= 0 && units <= 30) {
        total_bill = units * 20.0;
    } else if (units >= 31 && units <= 60) {
        total_bill = (30 * 20.0) + ((units - 30) * 25.0);
    } else if (units > 60) {
        total_bill = (30 * 20.0) + (30 * 25.0) + ((units - 60) * 30.0);
    } else {
        printf("Invalid units entered.\n");
        return 1;
    }
    
    printf("Total water bill: %.2f KES\n", total_bill);
    
    return 0;
}