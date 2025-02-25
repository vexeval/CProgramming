#include <stdio.h>

void printTriangleTopLeftStars(int size);
void printTriangleTopLeftNumbers(int size);
void printTriangleBottomLeftStars(int size);

int main(void) {

    int n = 0;
    // Scan a positive integer
    do {
        printf("Enter an integer: ");
        scanf("%d", &n);

    } while (n <= 0);

    // printTriangleTopLeft(n);
    printTriangleBottomLeftStars(n);

    // unsigned - only positive values
    // printf("i  | iter.\n");
    // printf("===+===\n");
    // int iteration = 0;
    // for (int i = 20; i >= -10; i -= 6) {
    //     printf("%d | ", i);
    //     printf("%d \n", iteration);
    //     iteration++;
    // }

    // int c = 20;
    // do {
    //     printf("%d \n", c);
    //     c -= 6;
    // } while (c >= -10);

    return 0;
}

/*
    5
    *****
    ****
    ***
    **
    *
*/

void printTriangleTopLeftStars(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i; j++) {
            printf("%c", '*');
        }
        puts("");
    }
}

void printTriangleBottomLeftStars(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < i+1; j++) {
            printf("%c", '*');
        }
        puts("");
    }
}

void printTriangleTopLeftNumbersInc(int size) {

}

void printTriangleTopLeftNumbersDec(int size) {

}

// TODO printTriangleTopLeftStars