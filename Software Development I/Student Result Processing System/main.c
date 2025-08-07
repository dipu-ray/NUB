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