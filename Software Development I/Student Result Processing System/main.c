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

// Function to add a student record
void addStudent(struct Student students[], int *count) {
    if (*count >= MAX_STUDENTS) {
        printf("Cannot add more students. Limit reached.\n");
        return;
    }

    struct Student s;

    printf("Enter Student ID: ");
    scanf("%d", &s.id);
    getchar(); // consume newline

    printf("Enter Student Name: ");
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = 0; // remove trailing newline

    printf("Enter marks for 3 subjects (separated by space): ");
    scanf("%d %d %d", &s.marks[0], &s.marks[1], &s.marks[2]);

    calculateResult(&s);

    students[*count] = s;
    (*count)++;

    printf("Student added successfully!\n");
}

// Function to display all students
void displayStudents(struct Student students[], int count) {
    if (count == 0) {
        printf("No student records found.\n");
        return;
    }

    printf("\n%-10s %-20s %-8s %-8s %-8s %-8s %-8s %-6s\n",
           "ID", "Name", "Sub1", "Sub2", "Sub3", "Total", "Average", "Grade");
    printf("--------------------------------------------------------------------------------\n");

    for (int i = 0; i < count; i++) {
        struct Student s = students[i];
        printf("%-10d %-20s %-8d %-8d %-8d %-8d %-8.2f %-6c\n",
               s.id, s.name, s.marks[0], s.marks[1], s.marks[2], s.total, s.average, s.grade);
    }
}