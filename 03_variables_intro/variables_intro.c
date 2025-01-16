#include <stdio.h>

int number = 55;
int sum = 0;

int main(void)
{
    // create variable
    int first_number;

    // assign initial value
    first_number = 1;

    // create & initialize
    int second_number = -15;

    // create a third variable combining the first two
    int num_sum = first_number + second_number;

    // print value of variable
    // %d - conversion specifier
    printf("The first number is %d\n", first_number);
    printf("The second number is %d\n", second_number);
    printf("%d + %d = %d\n", first_number, second_number, num_sum);
}