#include <iostream>
using namespace std;

// Write a program to take an integer input and display its binary equivalent
int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    cout << "Binary equivalent: ";
    for (int i = 31; i >= 0; i--) {
        cout << ((num >> i) & 1);
    }
    cout << endl;

    return 0;
}