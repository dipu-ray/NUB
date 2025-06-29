#include <iostream>
using namespace std;

// Write a program to demonstrate the use of the modulus operator
int main() {
    int dividend, divisor;
    cout << "Enter dividend and divisor: ";
    cin >> dividend >> divisor;

    cout << "Remainder = " << dividend % divisor << endl;

    return 0;
}