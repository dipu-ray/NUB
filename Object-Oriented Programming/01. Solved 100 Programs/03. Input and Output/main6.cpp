#include <iostream>
#include <iomanip>
using namespace std;

// Write a program to display a number in scientific notation using cout
int main() {
    double num;
    cout << "Enter a number: ";
    cin >> num;
    cout << scientific << num << endl;
    return 0;
}