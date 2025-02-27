#include <stdio.h>

void printCharsCombs(void);

int main(void) {
    printCharsCombs();

    return 0;
}

void printCharsCombs(void) {
    char outer = 'A';
    while (outer <= 'Z') {
        char inner = 'A';
        while (inner <= 'Z') {
            if (outer != inner) {
                printf("%c%c\n", outer, inner);
            }
            inner++;
        }
        outer++;
    }
}