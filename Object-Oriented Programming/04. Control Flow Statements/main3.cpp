#include <iostream>
using namespace std;

// Create a program that finds the maximum of three numbers using if-else
int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c)
        cout << "Maximum: " << a;
    else if (b >= a && b >= c)
        cout << "Maximum: " << b;
    else
        cout << "Maximum: " << c;

    return 0;
}