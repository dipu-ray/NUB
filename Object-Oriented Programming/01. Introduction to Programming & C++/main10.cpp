#include <iostream>
using namespace std;

// Write a c++ program to find the square and cube of a given number
int main() {
    int num, square, cube;

    cout << "Enter a number: ";
    cin >> num;

    square = num * num;
    cube = num * num * num;

    cout << "Square of " << num << " is: " << square << endl;
    cout << "Cube of " << num << " is: " << cube << endl;

    return 0;
}