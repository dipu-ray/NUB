#include <iostream>
using namespace std;

// Write a program to check if a number is positive, negative, or zero
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0)
        cout << "Positive number";
    else if (num < 0)
        cout << "Negative number";
    else
        cout << "Zero";

    return 0;
}