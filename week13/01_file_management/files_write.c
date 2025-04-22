#include <stdio.h>

int main(int argc, char *argv[]) {
    
    // Open a file. open modes: r, w, a, r+, w+, and more. 
    FILE *file = fopen("output.txt", "w");
    if (file == NULL) { puts("/!\\ Unable to open file."); return 1; }

    int i = 0;
    while (i < 100) {
        // fprintf - write into a file
        fprintf(file, "%d", i++); // post-increment
        if (i != 100) { fprintf(file, "\n"); }
    }

    // fprintf(file, "Hey %s", name);

    // fprintf();
    // fscanf();

    // Should close files as soon as they are no longer needed.
    fclose(file);

    return 0;
}