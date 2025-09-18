#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 100

struct Student {
    int id;
    char name[50];
    int marks[3];
    int total;
    float average;
    char grade;
};

// calculateResult()
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

// addStudent()
void addStudent(struct Student students[], int *count) {
    if (*count >= MAX_STUDENTS) {
        printf("Cannot add more students. Limit reached.\n");
        return;
    }
    struct Student s;
    printf("Enter Student ID: ");
    scanf("%d", &s.id);
    getchar();
    printf("Enter Student Name: ");
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = 0;
    printf("Enter marks for 3 subjects: ");
    scanf("%d %d %d", &s.marks[0], &s.marks[1], &s.marks[2]);
    calculateResult(&s);
    students[*count] = s;
    (*count)++;
    printf("Student added successfully!\n");
}

// displayStudents()
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

// searchStudent()
void searchStudent(struct Student students[], int count) {
    if (count == 0) {
        printf("No student records found.\n");
        return;
    }
    int id;
    printf("Enter Student ID to search: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            struct Student s = students[i];
            printf("\nStudent Found:\n");
            printf("ID: %d\n", s.id);
            printf("Name: %s\n", s.name);
            printf("Marks: %d, %d, %d\n", s.marks[0], s.marks[1], s.marks[2]);
            printf("Total: %d\n", s.total);
            printf("Average: %.2f\n", s.average);
            printf("Grade: %c\n", s.grade);
            return;
        }
    }
    printf("Student with ID %d not found.\n", id);
}

// editStudent()
void editStudent(struct Student students[], int count) {
    if (count == 0) {
        printf("No student records to edit.\n");
        return;
    }
    int id;
    printf("Enter Student ID to edit: ");
    scanf("%d", &id);
    getchar();
    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            printf("Editing student ID %d\n", id);

            printf("Enter new name: ");
            fgets(students[i].name, sizeof(students[i].name), stdin);
            students[i].name[strcspn(students[i].name, "\n")] = 0;

            printf("Enter new marks for 3 subjects: ");
            scanf("%d %d %d", &students[i].marks[0], &students[i].marks[1], &students[i].marks[2]);

            calculateResult(&students[i]);
            printf("Student record updated successfully!\n");
            return;
        }
    }
    printf("Student with ID %d not found.\n", id);
}

// deleteStudent()
void deleteStudent(struct Student students[], int *count) {
    if (*count == 0) {
        printf("No student records to delete.\n");
        return;
    }
    int id;
    printf("Enter Student ID to delete: ");
    scanf("%d", &id);
    for (int i = 0; i < *count; i++) {
        if (students[i].id == id) {
            // Shift remaining students up one slot
            for (int j = i; j < *count - 1; j++) {
                students[j] = students[j + 1];
            }
            (*count)--;
            printf("Student with ID %d deleted successfully!\n", id);
            return;
        }
    }
    printf("Student with ID %d not found.\n", id);
}

int main() {
    struct Student students[MAX_STUDENTS];
    int count = 0;
    int choice;
    while (1) {
        printf("\n=== Student Result Processing System ===\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by ID\n");
        printf("4. Edit Student by ID\n");
        printf("5. Delete Student by ID\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                addStudent(students, &count);
                break;
            case 2:
                displayStudents(students, count);
                break;
            case 3:
                searchStudent(students, count);
                break;
            case 4:
                editStudent(students, count);
                break;
            case 5:
                deleteStudent(students, &count);
                break;
            case 6:
                printf("Exiting program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
} 