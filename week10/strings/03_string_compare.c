#include <stdio.h>
#include <string.h>

#define SIZE 1000

int main(int argc, char *argv[]) {
    // for (int i = 0; i < argc; i++) {
    //     printf("%s\n", argv[i]);
    // }

    int result = strcmp(argv[1], argv[2]);
    printf("Comparing %s and %s\n", argv[1], argv[2]);

    // Dictionary-based ordering

    if (result == 0) { // They are equal
        puts("The words are identical");
    } else if (result < 0) { // The second one is smaller that the first
        printf("%s comes before %s\n", argv[1], argv[2]);
    } else { // The second one is larger than the first
        printf("%s comes after %s\n", argv[1], argv[2]);
    }

    return 0;
}

// 
// strcpy - copy s2 into s1, returning value of s1
// strcat - appends s2 to s1. The first character of s2 overwrites the terminating null chraacter of s1. Returns value of s1.
// strcmp - Compares strings s1 with s2. The function returns 0, less than 0, or greater than 0 if s1 is equal to, less than, or greater than s2, respectively.

// TODO: Compare two strings case insensitive