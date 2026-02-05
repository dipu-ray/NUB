#include <stdio.h>

// Write a program using an array of Student structures and a function that returns the student with the highest marks.
struct Student {
    int id;
    char name[50];
    float marks;
};

struct Student findTopper(struct Student s[], int n) {
    struct Student top = s[0];
    for (int i = 1; i < n; i++) {
        if (s[i].marks > top.marks) {
            top = s[i];
        }
    }
    return top;
}

int main() {
    struct Student students[3];

    // Input
    for (int i = 0; i < 3; i++) {
        printf("Enter ID, Name, and Marks for student %d: ", i + 1);
        scanf("%d %s %f", &students[i].id, students[i].name, &students[i].marks);
    }

    // Find Topper
    struct Student topper = findTopper(students, 3);
    printf("\nTopper: %s with %.2f marks\n", topper.name, topper.marks);

    return 0;
}