#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Symbolic constant
#define SIZE 1000

// Create a function to work with arrays
void printArray(int *arr, int size);
void initArrayWithRandom(int *arr, int size, int left, int right);
void setNegativeToZero(); // TODO

int main(void) {
    srand(time(0));

    int arr[SIZE];

    // Initialize the first element
    arr[0] = 999;

    // Initialize the last element
    arr[SIZE-1] = 111;

    // Print first and last elements of the array
    printf("First %d; Last %d\n", arr[0], arr[SIZE-1]);

    // Initialize an array with a loop
    for (int i = 0; i < SIZE; i++) {
        arr[i] = 1;
    }

    printArray(arr, SIZE);

    // Reinitialize an array with the values from 10 to 100
    // 10 20 30 40 ... 100
    int bump = 10;
    for (int i = 0; i <= SIZE; i++) {
        arr[i] = bump;
        bump += 10;
    }

    printArray(arr, SIZE);

    // Reinitialize with random numbers from -20 to 20
    initArrayWithRandom(arr, SIZE, -100, 100);

    printArray(arr, SIZE);

    return 0;
}

void printArray(int *arr, int size) {
    // Print an array
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    puts("");
}

void initArrayWithRandom(int *arr, int size, int left, int right) {
    for (int i = 0; i < size; i++) {
        // int randNum = rand() % (max - min + 1) + min;
        arr[i] = rand() % (right - left + 1) + left;
    }
}