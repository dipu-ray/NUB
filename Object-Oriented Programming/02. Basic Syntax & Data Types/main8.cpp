#include <iostream>
using namespace std;

// Create a program that calculates the power of a number without using the pow() function
int main() {
    int base, exponent, result = 1;
    cout << "Enter base and exponent: ";
    cin >> base >> exponent;

    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    cout << "Result: " << result << endl;

    return 0;
}