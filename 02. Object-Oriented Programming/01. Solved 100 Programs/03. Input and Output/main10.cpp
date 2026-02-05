#include <iostream>
using namespace std;

// Write a program that takes three inputs and displays them in different data types
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