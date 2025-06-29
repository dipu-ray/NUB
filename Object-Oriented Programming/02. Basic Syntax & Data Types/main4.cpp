#include <iostream>
using namespace std;

// Write a program to demonstrate the use of relational operators
int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << (a == b) << " (a == b)" << endl;
    cout << (a != b) << " (a != b)" << endl;
    cout << (a > b) << " (a > b)" << endl;
    cout << (a < b) << " (a < b)" << endl;
    cout << (a >= b) << " (a >= b)" << endl;
    cout << (a <= b) << " (a <= b)" << endl;

    return 0;
}