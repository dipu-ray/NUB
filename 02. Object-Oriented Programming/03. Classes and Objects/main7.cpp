// Model a Cat Object with Changing Attributes in C++

#include <iostream>
#include <string>
using namespace std;

class Cat {
public:
    string color = "White";
    string action = "sleeping";
    void printCat() {
        cout << "Color: " << color << ", Action: " << action << endl;
    }
};

int main() {
    Cat c1;
    cout << "===================\n";
    c1.printCat();

    c1.color = "Black";
    cout << "===================\n";
    c1.printCat();

    c1.color = "Brown";
    c1.action = "jumping";
    cout << "===================\n";
    c1.printCat();

    return 0;
}