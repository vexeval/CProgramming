#include <stdio.h>

typedef struct {
    double width;
    double height;

} Rectangle;

Rectangle Initializer(double w, double h) {
    Rectangle newRect = { .width = w, .height = h };
    return newRect;
}

int getPerimeter(Rectangle *Initializer) {
    return (Initializer->width)*2 + (Initializer->height)*2;
}

int main(void) {
    Rectangle rect = Initializer(3,6);

    printf("Perimeter is %d\n", getPerimeter(&rect));

    return 0;
}