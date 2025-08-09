#include <iostream>
using namespace std;

// Write a program that takes a character as input and prints its ASCII value
int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    cout << "ASCII value of '" << ch << "' is: " << int(ch) << endl;

    return 0;
}