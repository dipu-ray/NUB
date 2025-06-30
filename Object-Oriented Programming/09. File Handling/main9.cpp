#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    string name;
    int roll;
    float marks;
};

int main() {
    Student s;

    ofstream outFile("student.txt");

    cout << "Enter student name: ";
    getline(cin, s.name);

    cout << "Enter roll: ";
    cin >> s.roll;

    cout << "Enter marks: ";
    cin >> s.marks;

    if (outFile.is_open()) {
        outFile << s.name << endl;
        outFile << s.roll << endl;
        outFile << s.marks << endl;
        outFile.close();
        cout << "Student record saved to file." << endl;
    }

    ifstream inFile("student.txt");
    cout << "\nReading student record from file:\n";
    if (inFile.is_open()) {
        getline(inFile, s.name);
        inFile >> s.roll >> s.marks;

        cout << "Name: " << s.name << endl;
        cout << "Roll: " << s.roll << endl;
        cout << "Marks: " << s.marks << endl;
        inFile.close();
    }

    return 0;
}