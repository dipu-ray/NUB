#include <stdio.h>

// Write a program to store and display data of 3 students using an array of structures.
struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student students[3];

    // Input
    for (int i = 0; i < 3; i++) {
        printf("Enter ID, Name, and Marks for student %d: ", i + 1);
        scanf("%d %s %f", &students[i].id, students[i].name, &students[i].marks);
    }

    // Output
    printf("\n--- Student Details ---\n");
    for (int i = 0; i < 3; i++) {
        printf("ID: %d, Name: %s, Marks: %.2f\n", students[i].id, students[i].name, students[i].marks);
    }

    return 0;
}