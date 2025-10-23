//simple_C_program
/* 
Name: MBUGUA zacheus karanja 
Reg no: CT100/G/26269/25
Description: Password_correctness
*/ 

#include <stdio.h>
#include <string.h>

int main() {
    char password[20];
    const char correct_password[] = "1234";
    
    printf("Password Authentication System\n");
    
    do {
        printf("Enter password: ");
        scanf("%s", password);
        
        if(strcmp(password, correct_password) != 0) {
            printf("Incorrect password. Try again.\n\n");
        }
        
    } while(strcmp(password, correct_password) != 0);
    
    printf("Access Granted!\n");
    
    return 0;
}