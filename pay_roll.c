//simple C program 
/*
Name: Mbugua zacheus karanja
Reg no: CT100/G/26269/25
Description:pay_roll
*/
 
 #include <stdio.h>

int main() {
    float hours, wage, gross, taxes, net;
    
    printf("Enter hours worked: ");
    scanf("%f", &hours);
    printf("Enter hourly wage: ");
    scanf("%f", &wage);
    
    // Calculate gross pay with overtime
    if (hours <= 40) {
        gross = hours * wage;
    } else {
        gross = (40 * wage) + ((hours - 40) * wage * 1.5);
    }
    
    // Calculate taxes
    if (gross <= 600) {
        taxes = gross * 0.15;
    } else {
        taxes = (600 * 0.15) + ((gross - 600) * 0.20);
    }
    
    net = gross - taxes;
    
    printf("\nGross Pay: $%.2f\n", gross);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", net);
    
    return 0;
}