// Write a program to define a structure for student details (name, roll, marks) and display them

#include <iostream>
using namespace std;

struct Student {
    string name;
    int roll;
    float marks;
};

int main() {
    Student s;

    cout << "Enter student name: ";
    getline(cin, s.name);

    cout << "Enter roll number: ";
    cin >> s.roll;

    cout << "Enter marks: ";
    cin >> s.marks;

    cout << "\nStudent Details:\n";
    cout << "Name: " << s.name << endl;
    cout << "Roll: " << s.roll << endl;
    cout << "Marks: " << s.marks << endl;

    return 0;
}