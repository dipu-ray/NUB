#include <iostream>
using namespace std;

// Write a c++ program to display the ASCII value of a character inter by the user
int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    cout << "The ASCII value of '" << ch << "' is: " << int(ch) << endl;

    return 0;
}