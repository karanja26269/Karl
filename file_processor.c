//simple C program 
/*
Name: Mbugua zacheus karanja
Reg no: CT100/G/26269/25
Description:file_processor
*/
 
 #include <stdio.h>
#include <stdlib.h>

// Function to write 10 integers to input.txt
void writeToFile() {
    FILE *file = fopen("input.txt", "w");
    if (file == NULL) {
        printf("Error opening input.txt for writing!\n");
        return;
    }
    
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        int num;
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &num);
        fprintf(file, "%d\n", num);
    }
    fclose(file);
    printf("Data successfully written to input.txt\n\n");
}

// Function to process integers and write results to output.txt
void processFile() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    
    if (input == NULL) {
        printf("Error opening input.txt for reading!\n");
        return;
    }
    if (output == NULL) {
        printf("Error opening output.txt for writing!\n");
        fclose(input);
        return;
    }
    
    int sum = 0, count = 0, num;
    
    // Read integers and calculate sum
    while (fscanf(input, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    
    double average = (double)sum / count;
    
    // Write results to output file
    fprintf(output, "Sum: %d\n", sum);
    fprintf(output, "Average: %.2f\n", average);
    
    fclose(input);
    fclose(output);
    printf("Processing complete. Results written to output.txt\n\n");
}

// Function to display contents of both files
void displayFiles() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "r");
    
    if (input == NULL || output == NULL) {
        printf("Error opening files for reading!\n");
        if (input) fclose(input);
        if (output) fclose(output);
        return;
    }
    
    printf("=== CONTENTS OF INPUT.TXT ===\n");
    int num, count = 0;
    while (fscanf(input, "%d", &num) == 1) {
        printf("Number %d: %d\n", ++count, num);
    }
    
    printf("\n=== CONTENTS OF OUTPUT.TXT ===\n");
    char line[100];
    while (fgets(line, sizeof(line), output)) {
        printf("%s", line);
    }
    
    fclose(input);
    fclose(output);
}

int main() {
    writeToFile();
    processFile();
    displayFiles();
    return 0;
}