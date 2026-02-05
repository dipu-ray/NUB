#include <stdio.h>

// Write a program to define a Student structure with fields id, name, and marks. Take input for one student and display the information.
struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student s;

    printf("Enter Student ID: ");
    scanf("%d", &s.id);

    printf("Enter Student Name: ");
    scanf("%s", s.name);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    printf("\n--- Student Information ---\n");
    printf("ID: %d\n", s.id);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}