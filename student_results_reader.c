//simple C program 
/*
Name: Mbugua zacheus karanja
Reg no: CT100/G/26269/25
Description:student_results_management
*/
 
 #include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define structure for student information
struct Student {
    char name[50];
    int regNumber;
    float totalMarks;
};

int main() {
    FILE *file;
    struct Student student;
    
    // Open binary file for reading
    file = fopen("results.dat", "rb");
    
    if (file == NULL) {
        printf("Error opening file! File may not exist.\n");
        return 1;
    }
    
    printf("Student Results:\n");
    printf("----------------\n");
    
    // Read and display all records
    while (fread(&student, sizeof(struct Student), 1, file)) {
        printf("Name: %s\n", student.name);
        printf("Registration Number: %d\n", student.regNumber);
        printf("Total Marks: %.2f\n", student.totalMarks);
        printf("----------------\n");
    }
    
    fclose(file);
    return 0;
}