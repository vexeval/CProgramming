#include <stdio.h>
#include <stdlib.h>
#include <time.h> 


int main(void) {
    srand(time(0)); // Set a random seed every start

    // This is the core concept:
    // int randNum = rand() % (max - min + 1) + min;

    printf("%d\n", rand() % 100 + 5); // 0 through 99 possible

    // [-2, 5]
    printf("%d\n", rand() % ( 5 - (-2)+1) + (-2) );

    // [7, 33]
    printf("%d\n", rand() % (33 - 7 + 1) + 7);

    int x = 10;
    int* x_ptr = &x;

    return 0;
}