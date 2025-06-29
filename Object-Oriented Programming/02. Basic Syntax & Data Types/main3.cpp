#include <iostream>
using namespace std;

// Create a program that checks whether a given number is even or odd
int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num % 2 == 0)
        cout << "Even number";
    else
        cout << "Odd number";

    return 0;
}