#include <iostream>
using namespace std;

struct Student {
    string name;
    int roll;
    float marks;
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student s[n];

    cin.ignore();  // To ignore leftover newline
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        cout << "Name: ";
        getline(cin, s[i].name);
        cout << "Roll: ";
        cin >> s[i].roll;
        cout << "Marks: ";
        cin >> s[i].marks;
        cin.ignore();
    }

    cout << "\nStudent Details:\n";
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        cout << "Name: " << s[i].name << endl;
        cout << "Roll: " << s[i].roll << endl;
        cout << "Marks: " << s[i].marks << endl;
    }

    return 0;
}