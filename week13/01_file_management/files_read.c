#include <stdio.h>

int main(int argc, char *argv[]) {
    
    // Open a file. open modes: r, w, a, r+, w+, and more. 
    FILE *file = fopen("output.txt", "r");
    if (file == NULL) { puts("/!\\ Unable to open file."); return 1; }

    int i = 0;
    // feof - end of file
    while (!feof(file)) {
        // fscanf - read from a file
        fscanf(file, "%d", &i);
        printf("%d\n", i);
    }

    // fprintf();
    // fscanf();

    // Should close files as soon as they are no longer needed.
    fclose(file);

    return 0;
}