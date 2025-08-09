// Program for Derived Class Constructor Overloading and Base Class Member Access

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name = "Just a Student";
    string department = "nothing";

public:
    void updateDepartment(string dpt) {
        department = dpt;
    }
    void updateName(string name) {
        this->name = name;
    }
    void details() {
        cout << "Name: " << name << " Department: " << department << endl;
    }
};

class BBAStudent : public Student {
public:
    BBAStudent() {
        updateDepartment("BBA");
    }
    BBAStudent(string name) {
        updateDepartment("BBA");
        updateName(name);
    }
};

int main() {
    BBAStudent b1;
    BBAStudent b2("Humty Dumty");
    BBAStudent b3("Little Bo Peep");

    b1.details();
    cout << "1--------------- " << endl;
    b2.details();
    cout << "2--------------- " << endl;
    b3.details();

    return 0;
}