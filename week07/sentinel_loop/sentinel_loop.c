#include <stdio.h>

// TODO no negative numbers should be accepted (except -1)
// consider the case with no grades entered

double avgStudentGradesSentinel(void);

int main(void)
{
    printf("%.2lf\n", avgStudentGradesSentinel());
    return 0;
}

double avgStudentGradesSentinel(void) {
    double grade = 0; // The current student grade
    double totalGrade = 0;
    int n_grades = 0;

    while (grade != -1) { // -1 - sentinel value
        // Get the grade
        grade = getGrade();
        n_grades++;

        // Add scanned grade to total grade
        totalGrade += grade;
    }
    return totalGrade / n_grades;
}

double getGrade(void) {
    // Do Not return grades < -1 or greater than 100

    double grade;
    do {
        printf("Enter a grade (-1 to exit): ");
        scanf("%lf", &grade); 
        if (grade < -1 || grade > 100) {
            puts("The grade should be in [-1; 100]");
        }
    } while (grade < -1 || grade > 100);

    

    return grade;
}