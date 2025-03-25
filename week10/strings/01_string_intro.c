#include <stdio.h>
#include <ctype.h>

int isLower(char c);
int isUpper(char c);
int isDigit(char c);
int isAlpha(char c);
int toLower(char c);
int toUpper(char c);
void printInLower(const char *str);

// TODO
void printInReversedCase(const char *str);

int main(void) {
    // \0 - Null Character

    char str[] = "bLUe";
    // 'b' 'L' 'U' 'e' '\0'
    // size is 5, length is 4.

    // 1: Print the string
    puts("Printing with printf");
    printf("%s\n\n", str);

    // 2:
    puts("Printing the string with a loop");
    for (int i = 0; i < str[i] != '\0'; i++) { // str[i] != '\0' - continue till null character
        // printf("%c", str[i]);
        putchar(str[i]);
    } puts("\n");

    // 3:
    puts("Printing with puts");
    puts(str);
    puts("");

    printf("isLower: %d\n", isLower(str[0]));
    printf("isUpper: %d\n", isUpper(str[0]));
    printf("isAlpha: %d\n", isAlpha(str[0]));
    printf("toLower: %d\n", toLower(str[0]));
    puts("");

    puts("Print a string in lowercase");
    printInLower(str);

    puts("Print string in reversed case");
    printInReversedCase(str);

    puts("");

    return 0;
}

int isLower(char c) {
    if (c >= 'a' && c <= 'z') {
        return 1;
    } else {
        return 0;
    }
}

int isUpper(char c) {
    if (c >= 'A' && c <= 'Z') {
        return 1;
    } else {
        return 0;
    }
}

int isDigit(char c) {
    if (c >= '0' && c <= '9') {
        return 1;
    } else {
        return 0;
    }
}

int isAlpha(char c) {
    if (isLower(c) || isUpper(c)) {
        return 1;
    } else {
        return 0;
    }
}

int toLower(char c) {
    if (isUpper(c)) {
        return c + 32;
    } else {
        return (int)c;
    }
}

int toUpper(char c) {
    if (isLower(c)) {
        return c - 32;
    } else {
        return (int)c;
    }
}

void printInLower(const char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        putchar(toLower(str[i]));
    }
}

void printInReversedCase(const char *str) {
    for(int i = 0; str[i] != '\0'; i++) {
        if (isLower(str[i])) { printf("%c", toUpper(str[i])); } // Switch lower to upper
        else if (isUpper(str[i])) { printf("%c", toLower(str[i])); } // Switch upper to lower
        else { printf("%c", str[i]); } // Print any non-characters (i.e numbers) as themselves
    }
    puts("");
}