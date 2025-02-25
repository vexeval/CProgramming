#include <stdio.h>

void Print(void);

int main(void) {
    Print();

    return 0;
}

// print statement "I love coding" 10 times
void Print(void) {
    int counter = 1;
    while (counter <= 10) {
        puts("I love coding");
        counter++;
    }
}