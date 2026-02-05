// Write a program to take user input and display the details using structures

#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
    string city;
};

int main() {
    Person p;

    cout << "Enter name: ";
    getline(cin, p.name);

    cout << "Enter age: ";
    cin >> p.age;
    cin.ignore();

    cout << "Enter city: ";
    getline(cin, p.city);

    cout << "\nPerson Details:\n";
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "City: " << p.city << endl;

    return 0;
}