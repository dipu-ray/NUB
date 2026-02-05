#include <iostream>
using namespace std;

// Write a C++ program to swap two numbers using a temporary variable
int main() {
    int a, b, temp;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}