// Create a structure to store the details of an employee and print them

#include <iostream>
using namespace std;

struct Employee {
    string name;
    int id;
    float salary;
};

int main() {
    Employee emp;

    cout << "Enter employee name: ";
    cin.ignore();
    getline(cin, emp.name);

    cout << "Enter employee ID: ";
    cin >> emp.id;

    cout << "Enter salary: ";
    cin >> emp.salary;

    cout << "\nEmployee Details:\n";
    cout << "Name: " << emp.name << endl;
    cout << "ID: " << emp.id << endl;
    cout << "Salary: " << emp.salary << endl;

    return 0;
}