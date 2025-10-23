//simple_C_program
/*
Name : MBUGUA zacheus karanja 
Reg no: CT100/G/26269/25
Description: number_guesing
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret_number, guess, attempts = 0;
    
    // Seed the random number generator
    srand(time(NULL));
    
    // Generate random number between 1 and 20
    secret_number = (rand() % 20) + 1;
    
    printf("Welcome to the Number Guessing Game!\n");
    printf("I'm thinking of a number between 1 and 20.\n\n");
    
    while(1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;
        
        if(guess > secret_number) {
            printf("Too high!\n\n");
        } else if(guess < secret_number) {
            printf("Too low!\n\n");
        } else {
            printf("Congratulations! You guessed the number %d correctly!\n", secret_number);
            printf("Total attempts: %d\n", attempts);
            break;
        }
    }
    
    return 0;
}