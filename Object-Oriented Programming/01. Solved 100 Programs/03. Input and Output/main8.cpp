#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Write a program that takes user input and displays it in reverse order
int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    reverse(str.begin(), str.end());
    cout << "Reversed: " << str << endl;
    return 0;
}