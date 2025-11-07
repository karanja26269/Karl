//simple C program 
/*
Name: Mbugua zacheus karanja
Reg no: CT100/G/26269/25
Description:book_titl3 _ management a
*/
 
 #include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char title[100];
    char choice;
    
    // Open file in append mode to preserve existing data
    file = fopen("borrowed_books.txt", "a");
    
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    do {
        printf("Enter book title: ");
        fgets(title, sizeof(title), stdin);
        
        // Remove newline character if present
        title[strcspn(title, "\n")] = 0;
        
        // Write to file
        fprintf(file, "%s\n", title);
        printf("Title '%s' successfully stored in borrowed_books.txt\n", title);
        
        printf("Do you want to add another title? (y/n): ");
        scanf(" %c", &choice);
        getchar(); // Clear input buffer
        
    } while (choice == 'y' || choice == 'Y');
    
    fclose(file);
    return 0;
}