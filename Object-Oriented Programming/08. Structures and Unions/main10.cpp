// Write a program to compare two structures

#include <iostream>
using namespace std;

struct Student {
    string name;
    int roll;
};

int main() {
    Student s1, s2;

    cout << "Enter name and roll for student 1: ";
    getline(cin, s1.name);
    cin >> s1.roll;
    cin.ignore();

    cout << "Enter name and roll for student 2: ";
    getline(cin, s2.name);
    cin >> s2.roll;

    if (s1.name == s2.name && s1.roll == s2.roll) {
        cout << "Both students are the same." << endl;
    } else {
        cout << "Students are different." << endl;
    }

    return 0;
}