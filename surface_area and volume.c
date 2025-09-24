/*
Name : karanja
Reg: CT100/G/26269/25
description: C program  to find volume and surface are
*/

#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main() {
    double radius, height, volume, surface_area;
    
    // Prompt user for input
    printf("Enter the radius of the cylinder: ");
    scanf("%lf", &radius);
    
    printf("Enter the height of the cylinder: ");
    scanf("%lf", &height);
    
    // Calculate volume and surface area
    volume = PI * pow(radius, 2) * height;
    surface_area = (2 * PI * pow(radius, 2)) + (2 * PI * radius * height);
    
    // Display results
    printf("\nCylinder Calculations:\n");
    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surface_area);
    
    return 0;
}
