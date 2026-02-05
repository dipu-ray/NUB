// To make structure for a Student

#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student s1;

    s1.id = 1;
    strcpy(s1.name, "Dipu Ray");  // Use strcpy for strings
    s1.marks = 95.5;

    printf("Student ID: %d\n", s1.id);
    printf("Student Name: %s\n", s1.name);
    printf("Student Marks: %.2f\n", s1.marks);

    return 0;
}