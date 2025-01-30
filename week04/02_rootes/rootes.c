#include <stdio.h>
#include <math.h>

// Function prototypes
void printPrompt(char c);
int getCoefficient(void);
int countDiscriminanat(int a, int b, int c);
void printRootes(int a, int b, int c);

int main(void) {
    printPrompt('a');
    int a = getCoefficient();
    printPrompt('b');
    int b = getCoefficient();
    printPrompt('c');
    int c = getCoefficient();

    printRootes(a,b,c);

    return 0;
}

void printPrompt(char ch) {
    printf("Enter the coefficient %c: ", ch);
}

int getCoefficient(void) {
    int coef = 0;
    scanf("%d", &coef);

    return coef;
}

int countDiscriminanat(int a, int b, int c) {
    return (b * b) - (4 * a * c);
}


void printRootes(int a, int b, int c) {
    // Calculate discriminant
    int discrim = countDiscriminanat(a,b,c);

    // Check discriminant value
    if (discrim < 0) { 
        // No roots
        puts("No real roots");
    }
    if (discrim == 0) {
        // One root
        int x = -b / (2 * a);
        printf("x = %d\n", x);

    }
    if (discrim > 0) {
        // Two rootes
        double x1 = (-b + sqrt(discrim)) / (2 * a);
        double x2 = (-b - sqrt(discrim)) / (2 * a);

        printf("x1 = %f, x2 = %f\n", x1, x2);
    }

    // Positive = two real solutions
    // Zero: 1 solution
    // Negative: Complex
}