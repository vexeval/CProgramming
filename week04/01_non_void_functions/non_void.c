/*
Practice non-void functions

*/

#include <stdio.h>

// Function prototypes
// The function named getFive returns an integer and takes no arguments.
int getFive(void);

// Function prints the given value
// The function named printCourse returns nothing and takes
// one integer argument.
void printCourse(int course_number);

// Function that describes weather.
void describeWeather(int temp);

// Functions returns kilometers for the given miles
double milesToKms(int miles);
double kmsToMiles(int kms);

int main(void) {
    int var;
    var = getFive();

    int temp = 0;
    printf("The value of var is %d\n",var);
    printCourse(2271);
    puts("Enter a temperature: ");
    scanf("%d", &temp);
    describeWeather(temp);

    return 0;
}

int getFive(void) {
    int five = 5;

    return five;
}

void printCourse(int course_number)
{
    printf("Course ID %d detected.\n",course_number);
}

void describeWeather(int temp)
{
    if (temp >= 65) { printf("It's warm outside!\n"); }
    if (temp < 65) { printf("It's chilly outside!\n"); }
}

double milesToKms(int miles)
{
    // TODO
}