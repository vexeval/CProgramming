#include <stdio.h>

/*
    Function that prints the description of the temperature
*/

// Prototype
void describeTemperature(double temp);
void checkRange(int number);
int largest(int num1, int num2, int num3);

int main(void)
{
    double newTempearture = 0;
    int numberToCheck = 0;

    int large1 = 0;
    int large2 = 0;
    int large3 = 0;

    // printf("Enter your temperature: ");
    // scanf("%lf", &newTempearture);
    // describeTemperature(newTempearture);

    // printf("Enter number to check: ");
    // scanf("%d", &numberToCheck);
    // checkRange(numberToCheck);

    printf("Enter number 1 to check largesticity: ");
    scanf("%d", &large1);
    printf("Enter number 2 to check largesticity: ");
    scanf("%d", &large2);
    printf("Enter number 3 to check largesticity: ");
    scanf("%d", &large3);
    largest(large1, large2, large3);

    // printf("%d is the largest of 9, 4, and 29.",largest(9,4,29));

    return 0;
}

void describeTemperature(double temp)
{
    if (temp > 101) {
        puts ("High Fever");
    } else if (temp > 99) {
        puts("Low Fever");
    } else if (temp > 97) {
        puts("Normal");
    } else {
        puts("Low Temperature");
    }
}

void checkRange(int number)
{
    // Check if number is between 0 and 10.
    if (number >= 0 && number <= 10) {
        puts("YES");
        return;
    }
    puts("NO");
}

int largest(int num1, int num2, int num3)
{
    int largest = 0;

    // Devise a "bracket" system where num1 faces off against num2, and if it wins it takes the bracket.
    // If it loses, num2 gets it.
    if (num1 > num2) { largest = num1; }
    else { largest = num2; }

    // num3 will challenge the victor of the bracket, with the highest taking the final spot.
    if (largest < num3) { largest = num3; }

    printf("%d is the largest of the three.\n", largest);
    return largest;
}