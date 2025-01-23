/*
Convert seconds to a multi-time format (seconds -> hh:mm:ss)
*/

#include <stdio.h>

int main() {
    // Variables
    int seconds;
    int minutes;
    int hours;

    // Get input (aka seconds)
    printf("Tell your time in seconds:\n");
    scanf("%d",&seconds);

    // Perform the calculations (seconds -> hh:mm:ss)
    minutes = seconds / 60; //assume seconds is 63 -> minutes = 1
    seconds = seconds % 60; //seconds is still 63, so to format correctly, we divide by 60, and store the remainder using modulo. seconds becomes 3.
    
    hours = minutes / 60; // minutes 1 => hours = 0 (int division does not give partials.)
    minutes = minutes % 60; //minutes divided by 60 (aka, hours taken out.) minutes is the remainder left over, in this case, minutes stays as 1. 

    // Output the final result
    printf("Your final result is:\n\t %d hours: %d minutes: %d seconds\n", hours, minutes, seconds);

    return 0;
}