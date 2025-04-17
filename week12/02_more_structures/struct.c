#include <stdio.h>
#include <string.h>
#define NAME_SIZE 30
#define STREET_SIZE 30
#define CITY_SIZE 30
#define CLASS_SIZE 48

// Create the address structure
typedef struct {
    char street[STREET_SIZE];
    char city[CITY_SIZE];
    int zip_code;
} Address;

typedef struct {
    char first_name[NAME_SIZE];
    int age;
    double GPA;
    Address home_address;
} Student;

typedef struct {
    int n_students;
    Student roster[CLASS_SIZE];
} Class;

Student createStudent(char *name, int age, float GPA, char *street, char *city, int zip);
void addStudentToClass(const Student *student, Class *class);

void printStudentInfo(const Student *st);
void printAddress(const Address *adr);
void printClassRoster(const Class *class);

int main(void) {
    // Create an Address object
    Address adr = { .city = "Lakeland", .street = "4540 Polytechnic Cir", .zip_code = 33805 };

    // Create Students
    Student st1 = createStudent("Elena Ross", 19, 3.8, "Rolan, NJ", "283 Northview Pt.", 30273);
    Student st2 = createStudent("Kai Solen", 18, 3.5, "Rolan, NJ", "283 Northview Pt.", 30273);
    Student st3 = createStudent("Romeo Veyran", 22, 2.9, "Kelvix, AX", "29 Locand Dir.", 92232);

    // printStudentInfo(&st2);

    // Create a Class object
    Class COP2271 = {.n_students = 2, .roster = {
        st1, st2
    }};

    addStudentToClass(&st3, &COP2271);

    printClassRoster(&COP2271);

    return 0;
}

void printAddress(const Address *adr) {
    printf("Address:\t\t%s\n\t\t\t%s\n\t\t\t%.1d\n", adr->street, adr->city, adr->zip_code);
}

void printStudentInfo(const Student *st) {
    printf("First name:\t\t%s\n", (*st).first_name);
    printf("Age:\t\t\t%d\n", (*st).age);
    printf("GPA:\t\t\t%.1lf\n", (*st).GPA);
    printAddress(&st->home_address);
}

Student createStudent(char *name, int age, float GPA, char *street, char *city, int zip) {
    Student st;

    strcpy(st.first_name, name);
    st.age = age;
    st.GPA = GPA;
    strcpy(st.home_address.city, city);
    strcpy(st.home_address.street, street);
    st.home_address.zip_code = zip;

    return st;
}

void printClassRoster(const Class *class) {
    for (int i = 0; i < class->n_students; i++) {
        printStudentInfo(&class->roster[i]);
    }
}

void addStudentToClass(const Student *student, Class *class) {
    if (class->n_students < CLASS_SIZE) {
        class->n_students += 1;
        class->roster[class->n_students - 1] = *student;
    }
    
}