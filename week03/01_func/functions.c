/*

    Working with functions
    
    Format of a function
    <return type> <function_name>(<function_arguments>) {
        code of the function
    }

*/

#include <stdio.h>

// The function that doesn't return nor take a value, simply executes instructions
// Function definition
void print_course(void) {
    printf("You are in COP%d course\n", 2271);
}

void draw_circle() { // Function header
    printf("    * \n");
    printf("  *   *\n");
    printf("   * *  \n");
}

void draw_intersection()
{
    puts("   /|\\");
    puts("  / | \\");
    puts("    |   ");
}

void draw_legs()
{
    puts("   / \\    ");
    puts("  /   \\   ");
}

void draw_vertical(int length) {
    for (int i = 0; i < length; i++)
    {
        puts("|");
    }
}

void draw_stick_figure()
{
    draw_circle();
    draw_intersection();
    draw_legs();
}

int main() {
    draw_stick_figure();

    return 0;
}