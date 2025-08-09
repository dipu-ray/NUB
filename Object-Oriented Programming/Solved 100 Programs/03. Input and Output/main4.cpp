#include <iostream>
using namespace std;

// Write a program that reads a character and prints it along with its ASCII value
int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    cout << "Character: " << ch << ", ASCII Value: " << int(ch) << endl;
    return 0;
}