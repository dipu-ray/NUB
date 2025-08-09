#include <iostream>
using namespace std;

// Write a program that checks if a number is even or odd using the if-else statement
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0)
        cout << "Even number";
    else
        cout << "Odd number";

    return 0;
}