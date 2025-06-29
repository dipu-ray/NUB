#include <iostream>
using namespace std;

int main() {
    int intVal;
    float floatVal;
    char charVal;

    cout << "Enter an integer, a float, and a character: ";
    cin >> intVal >> floatVal >> charVal;

    cout << "Integer: " << intVal << endl;
    cout << "Float: " << floatVal << endl;
    cout << "Character: " << charVal << endl;

    return 0;
}