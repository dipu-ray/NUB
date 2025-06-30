#include <iostream>
using namespace std;

struct Employee {
    string name;
    int id;
    float salary;
};

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    Employee emp[n];
    cin.ignore();

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for employee " << i + 1 << ":\n";
        cout << "Name: ";
        getline(cin, emp[i].name);
        cout << "ID: ";
        cin >> emp[i].id;
        cout << "Salary: ";
        cin >> emp[i].salary;
        cin.ignore();
    }

    cout << "\nEmployee Details:\n";
    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << i + 1 << ":\n";
        cout << "Name: " << emp[i].name << endl;
        cout << "ID: " << emp[i].id << endl;
        cout << "Salary: " << emp[i].salary << endl;
    }

    return 0;
}