#include <stdio.h>

void one_three() {
    printf("one\n");
    two();
}

void two() {
    printf("two\n");
    three();
}

void three() {
    printf("three\n");
}


int main() {
    printf("starting now:\n");
    one_three();
    printf("done!\n");
    return 0;
}