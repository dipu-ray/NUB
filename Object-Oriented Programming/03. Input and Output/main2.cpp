#include <iostream>
#include <iomanip>
using namespace std;

// Write a program to take a floating-point number as input and display it with two decimal places
int main() {
    float num;
    cout << "Enter a floating-point number: ";
    cin >> num;
    cout << fixed << setprecision(2);
    cout << "Number with 2 decimal places: " << num << endl;
    return 0;
}