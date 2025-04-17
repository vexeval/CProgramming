#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLENGTH 256

int main(int argc, char *argv[]) {
    // Check for either basic usage (3 args) or with a custom delimiter (5 args)
    if (argc != 3 && argc != 5) {
        printf("Incorrect call!\n");
        return 1;
    }
    
    // Set default delimiter as a space
    char *delimiter = " ";
    if (argc == 5) {
        if (strcmp(argv[3], "-d") == 0) {
            delimiter = argv[4];
        } else {
            printf("Incorrect call!\n");
            return 1;
        }
    }
    
    // Convert the second argument into an integer
    int count = atoi(argv[2]);
    
    // Extract the base name from the given file name
    char *fileName = argv[1];
    char baseName[MAXLENGTH];
    int i = 0;
    
    // Copy characters until a dot or string end is reached, but never exceed MAXLENGTH-1.
    while (fileName[i] != '\0' && i < MAXLENGTH - 1) {
        if (fileName[i] == '.') {
            break;
        }
        baseName[i] = fileName[i];
        i++;
    }
    baseName[i] = '\0';  // Null-terminate the base name string

    // Open the file for writing
    FILE *fp = fopen(fileName, "w");
    if (fp == NULL) {
        puts("Error opening file");
        return 1;
    }
    
    // Write the base name into the file 'count' times
    for (i = 0; i < count; i++) {
        fprintf(fp, "%s", baseName);
        // Append the delimiter after each occurrence except the last one.
        if (i < count - 1) {
            fprintf(fp, "%s", delimiter);
        }
    }
    
    fclose(fp);
    return 0;
}
