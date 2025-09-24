//simple C program 
/*
Name:karanja 
Reg: CT100/G/26269/25
des: showing my profile 
*/

#include <stdio.h>

int main() {
    float height, weight;
    long long phone_number;
    
    // Prompt for height
    printf("Enter your height (in meters): ");
    scanf("%f", &height);
    
    // Prompt for phone number
    printf("Enter your phone number: ");
    scanf("%lld", &phone_number);
    
    // Prompt for weight
    printf("Enter your weight (in kg): ");
    scanf("%f", &weight);
    
    // Display the entered information
    printf("\n--- Your Information ---\n");
    printf("Height: %.2f meters\n", height);
    printf("Phone Number: %lld\n", phone_number);
    printf("Weight: %.2f kg\n", weight);
    
    return 0;
}
