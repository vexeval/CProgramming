#include <stdio.h>
#include <unistd.h> // usleep function
#include <stdlib.h> // rand

void whatIf(void);
int checkDivisibility(int first, int second);
void printHello(int n);
int fahrenheightToCelsius(int temp);
void printTemperatures(int min, int max);
void printRandom(int n);


int main(void) {
    // whatIf();
    // printf("How many people we gonna say hello to: ");
    // int tmphello;
    // scanf("%d",&tmphello);
    // printHello(tmphello);

    // printTemperatures(0, 50);

    // Set the seed of random numbers
    srand(2);
    printRandom(2);

    return 0;
}

void whatIf(void) {
    int i = 10;
    if (i == 10) {
        puts("LK9LU");
    }
    else {
        puts("XL7XJ");
    }
}

int checkDivisibility(int first, int second) {
    if (second == 0 || (second - 3) == 0) {
        puts("No solution");
        return -1;
    }
    // Check if the first number is divisble by the second and by (second - 3)
    else if ((first % second == 0) && (first % (second - 3) == 0)) {
        printf("Divisible by %d and by %d\n", second, second - 3);
        return 1;
    }
    // Check if the first number is divisible by the second or by (second - 3)
    else if ((first % second == 0) || (first % (second - 3) == 0)) {
        printf("Divisible by %d or by %d\n", second, second - 3);
        return 1;
    }
    // Check if the first number is not divisibe by the second number nad by (second - 3)
    else if (first % second != 0 && first % (second - 3) != 0) {
        printf("Not divisible by %d and %d\n", second, second - 3);
        return 0;
    }
}

void printHello(int n) {
    int counter = 1;
    while (counter <= n) {
        printf("%d - HELLO!\n", counter);
        usleep(99999);
        counter++;
    }

    // Count down without a counter variable
    // while (n > 0) {
    //     printf("%d - HELLO!\n", n);
    //     usleep(99999);
    //     n--;
    // }
}

int fahrenheightToCelsius(int temp) {
    return (temp - 32) * 5/9;
}

void printTemperatures(int min, int max) {
    int t = min;

    while (t <= max) {
        printf("%+4d - %+d\n", t, fahrenheightToCelsius(t));
        t++;
    }
}

void printRandom(int n) {
    int i = 1;
    while (i <= n) {
        printf("%d\n", rand());
        i++;
    }
}