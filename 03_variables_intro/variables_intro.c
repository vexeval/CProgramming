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

    // print values of variable
    printf("The first number is %d\n", first_number);
    printf("The second number is %d\n", second_number);

    // playground
    sum = number + 18;
    printf("I think this is a cool number: %d.\n", number);
    // printf("sure, I like doing anything!\n");
    printf("%d + 18 is %d.\n",number,(number+18));
    return 0;
}