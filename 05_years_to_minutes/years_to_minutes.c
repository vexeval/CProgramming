#include <stdio.h>

int main() {
    int ageInYears = 0;
    int ageInMinutes = 0;

    // Prompt for age
    puts("Enter your age in years:");

    // Scan for input
    scanf("%d", &ageInYears);

    // Calculate age in minutes
    ageInMinutes = ageInYears * 365 * 24 * 60;

    printf("\"%d\" years is \"%d\" minutes\n", ageInYears, ageInMinutes);

    return 0;
}