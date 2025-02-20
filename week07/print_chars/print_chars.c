#include <stdio.h>

int main(void) {
    char input;
    char input2;
    int digit = 0;

    // Get the uppercase character
    // ASCII characters 65 through 90 are uppercase
    do {
        printf("Enter an uppercase character: ");
        scanf(" %c", &input);
    } while (input < 'A' || input > 'Z');

    // Get a positive integer
    do {
        printf("Enter a positive integer: ");
        scanf("%d", &digit);
    } while (digit < 1);

    // Print <number> of <inputs> in one line. Use for loop
    // A
    // 5
    // AAAAA
    

    // TODO
    // Scan a second character. It should be either * or # and nothing else
    // print the pattern
    // A 3 *
    // A*A*A*

    do {
        printf("Enter character * or #: ");
        scanf(" %c", &input);
    } while (input2 == '*' || input2 == '#');

    for (int i = 0; i < digit; i++) {
        printf(" %c%c", input, input2);
    }
    puts("");

    return 0;
}