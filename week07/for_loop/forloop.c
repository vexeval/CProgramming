#include <stdio.h>

void for1(void);
void for2(void);
void for3(void);

int main(void) {
    // for1();
    // for2();
    for3();
    
    return 0;
}
// unsigned int: positive only, no negatives

void for1(void) {
    // Print the values from 15 to 45 with a step size of 5
    for (unsigned int i = 15; i <= 45; i+=5)
        printf("%d\n", i);
}

void for2(void) {
    // Print all the even values from 100 to 2 (inclusive)
    for (unsigned int i = 100; i >= 2; i--) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }
}

void for3(void) {
    // Rewrite a while-loop into a for-loop
    for (int i = 0; i < 5; i++)
        printf("%d\n", i);
}