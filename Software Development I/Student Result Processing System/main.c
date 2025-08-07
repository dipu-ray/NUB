#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 100

// Structure to store student info and marks
struct Student {
    int id;
    char name[50];
    int marks[3];  // Marks for 3 subjects
    int total;
    float average;
    char grade;
};

// Function to calculate total, average and grade
void calculateResult(struct Student *s) {
    s->total = s->marks[0] + s->marks[1] + s->marks[2];
    s->average = s->total / 3.0;

    if (s->average >= 90)
        s->grade = 'A';
    else if (s->average >= 80)
        s->grade = 'B';
    else if (s->average >= 70)
        s->grade = 'C';
    else if (s->average >= 60)
        s->grade = 'D';
    else
        s->grade = 'F';
}