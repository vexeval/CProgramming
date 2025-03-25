#include <stdio.h>

#define SIZE 10

// Prints the doubled values of the given array
void printDoubledArray(const int *arr, int size);

// Searching in arrays
/*
    Return the index of the first zero element in the given array
    Return -1 if there are no zeros
*/
int firstZero(const int *arr, int size);

// TODO -- On Final
int lastZero(const int *arr, int size);
int secondZero(const int *arr, int size);
int nthZero(const int *arr, int size, int n);
// Return 1 if there is even number of 0s
// Return 0 if there are no zeros or odd number of 0s
int hasEvenZeros(const int *arr, int size);

int main(void) {

    int a[SIZE] = {9, 0, -4, 0, 987, 6};
    printDoubledArray(a, SIZE);

    // Linear search
    int has_zeros = firstZero(a, SIZE);
    if (has_zeros == -1) {
        puts("There are no zeros");
    } else {
        printf("The first zero has %d index\n", has_zeros);
    }

    printf("\n\n");
    int c[5] = {-45, 6, 0, 72, 1543};
    printf("First + Third of c: %d\n", c[0]+c[2]);

    double d_arr[SIZE];
    for (int i = 0; i < SIZE; i++) { d_arr[i] = 0; }
    printf("Fourth element of d_arr: %lf\n", d_arr[3]);
    d_arr[5] = 4.53;

    printf("First of d_arr: %.2lf, last of d_arr: %.2lf\n", d_arr[1], d_arr[SIZE-1]);

    return 0;
}

void printDoubledArray(const int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]*2);
    }
    puts("");
}

int firstZero(const int *arr, int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            return i;
        }
    }
    // no zeros
    return -1;
}

int lastZero(const int *arr, int size) {
    for (int i = size - 1; i >= 0; i--) {
        if (arr[i] == 0) {
            return i;
        }
    }
    
    // no zeros
    return -1;
}

