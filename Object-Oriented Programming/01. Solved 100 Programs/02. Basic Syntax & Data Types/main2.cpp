#include <iostream>
using namespace std;

// Write a program to take two integer inputs and perform all arithmetic operations on them
int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Sum: " << a + b << endl;
    cout << "Difference: " << a - b << endl;
    cout << "Product: " << a * b << endl;
    cout << "Quotient: " << a / b << endl;
    cout << "Modulus: " << a % b << endl;

    return 0;
}