/*
Name : karanja
Reg: CT100/G/26269/25
description: loan and income  
*/

#include <stdio.h>

int main() {
    int age;
    float income;
    
    // Get customer's age
    printf("Please enter your age: ");
    scanf("%d", &age);
    
    // Get customer's annual income
    printf("Please enter your annual income: ksh");
    scanf("%f", &income);
    
    // Check if customer qualifies for a loan
    if (age >= 21 && income >= 21000) {
        printf("Congratulations you qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }
    
    return 0;
}