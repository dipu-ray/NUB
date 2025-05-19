#include <stdio.h>

// Write a program to define an Employee structure. Take input for two employees and print who has a higher salary.
struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e1, e2;

    printf("Enter ID, Name, and Salary for Employee 1: ");
    scanf("%d %s %f", &e1.id, e1.name, &e1.salary);

    printf("Enter ID, Name, and Salary for Employee 2: ");
    scanf("%d %s %f", &e2.id, e2.name, &e2.salary);

    printf("\n--- Salary Comparison ---\n");
    if (e1.salary > e2.salary) {
        printf("%s has a higher salary: %.2f\n", e1.name, e1.salary);
    } else if (e2.salary > e1.salary) {
        printf("%s has a higher salary: %.2f\n", e2.name, e2.salary);
    } else {
        printf("Both have the same salary: %.2f\n", e1.salary);
    }

    return 0;
}