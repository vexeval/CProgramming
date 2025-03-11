#include <stdio.h>

// Split the given integer n into tens and ones.
int splitDigits(int n, int *tens, int *ones);

sumAndAvg(double d1, double d2, double *sum, double *avg);

int main(void) {
    int n = 29;
    int tens = 0;
    int ones = 0;

    int result = splitDigits(n, &tens, &ones);
    // printf("%d\n", result);

    printf("%d is %d tens and %d ones\n", n, tens, ones);
    return 0;
}

int splitDigits(int n, int *tens, int *ones) {
    if (n < 10 || n > 99) {
        return 1; // Incorrect value
    }
    
    *tens = n / 10;
    *ones = n % 10;
    
    return 0;
}

sumAndAvg(double d1, double d2, double *sum, double *avg) {
    *sum = d1 + d2;
    *avg = (d1 + d2)/2;
    return 0;
}