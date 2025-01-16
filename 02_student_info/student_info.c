#include <stdio.h>

int main(void)
{
    int course_id = 2271;
    int student_id = 10234;
    int equation = student_id - course_id;

    printf("John Doe\n");
    printf("Course ID: %d\n", course_id);
    printf("Student ID: %d\n", student_id);
    printf("Course ID - Student ID is: %d\n",equation);

    for (int i = 0; i < 1000; i++)
    {
        printf("// ");
        if (i == 410)
        {
            printf(" THE UNIVERSE IS OPEN AND VAST ");
        }
    }

}