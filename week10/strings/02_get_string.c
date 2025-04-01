#include <stdio.h>
#include <string.h>

#define SIZE 1000

int main(void) {
    char str[SIZE];
    puts("Enter the string");
    // scan the string with scanf
    // scanf("%s", str); // This is problematic because it stops at the first space scanned
    // Scan with fgets function
    fgets(str, SIZE-1, stdin);

    // Replace the ending \n with \0
    //strlen - full length of the string including any new line escape
    str[strlen(str)-1] = '\0';

    // Remove the ending new line
    printf("%ld\n",strlen(str));

    char str2[SIZE];
    puts("Enter the string");
    // Scan the string character by character
    int i = 0;
    char c;
    while((i < SIZE -1) && (c = getchar()) != '\n') {
        str2[i] = c;
        i++;
    }
    str2[i] = '\0';

    printf("The first string \"%s\"\n", str);
    printf("The second string \"%s\"\n", str2);

    puts("");
    // Add the first string to the second
    strcat(str2, str);
    printf("The first string \"%s\"\n", str);
    printf("The second string \"%s\"\n", str2);

    puts("");
    strcpy(str, str2);
    printf("The first string \"%s\"\n", str);
    printf("The second string \"%s\"\n", str2);

    return 0;
}