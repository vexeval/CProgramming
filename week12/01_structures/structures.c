#include <stdio.h>
#include <string.h>

#define NAME_SIZE 30

// Create a structure
struct Student {
    // Structure members
    char first_name[NAME_SIZE];
    int age;
    double GPA;
};

void printStudentInfo(const struct Student *st);

int main(int argc, char *argv[]) {
    // Create the object of type int and call it a
    int a;

    // Create an object of another type (type Student)
    struct Student student1;

    // Initialize the structure members
    strcpy(student1.first_name, "Nick");
    student1.age = 19;
    student1.GPA = 4.0;

    // Print the members of the structure through a function
    printStudentInfo(&student1);

    // Create a pointer to int
    int b;
    int *b_ptr = &b;
    *b_ptr; // access

    // Create a pointer to a student structure
    struct Student *student_ptr = &student1;

    // Access the members of the structure through the pointer
    (*student_ptr).first_name; // Access with dereferencing
    student_ptr->age;          // Access with arrow operator

    // Create another student
    struct Student student2 = {.first_name = "Jack", .age = 20, .GPA = 3.6};

    printStudentInfo(&student2);

    return 0;
}

void printStudentInfo(const struct Student *st) {
    printf("First name:\t\t%s\n", (*st).first_name);
    printf("Age:\t\t\t%d\n", (*st).age);
    printf("GPA:\t\t\t%.1lf\n", (*st).GPA);
}