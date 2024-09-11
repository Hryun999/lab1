#include <stdio.h>
#include <string.h>

typedef struct {
    char lastName[50];
    char firstName[50];
    int age;
    int studentID;
} Student;

void findStudent(Student students[], int size, const char* lastName, const char* firstName) {
    for (int i = 0; i < size; i++) {
        if (strcmp(students[i].lastName, lastName) == 0 && strcmp(students[i].firstName, firstName) == 0) {
            printf("Student found:\n");
            printf("Last Name: %s\n", students[i].lastName);
            printf("First Name: %s\n", students[i].firstName);
            printf("Age: %d\n", students[i].age);
            printf("Student ID: %d\n", students[i].studentID);
            return;
        }
    }
    printf("Student not found\n");
}

int main() {
    Student students[] = {
        {"Habarov", "Ilya", 20, 1001},
        {"Vasykina", "Diana", 22, 1002},
        {"Durov", "Pavel", 21, 1003}
    };

    int size = sizeof(students) / sizeof(students[0]);

    findStudent(students, size, "Doe", "Jane");

    return 0;
}
