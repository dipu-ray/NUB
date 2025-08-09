#include <iostream>
using namespace std;

// Create a program that prints the sum of two numbers entered by the user
int main() {
    int num1, num2, sum;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    sum = num1 + num2;

    cout << "Sum = " << sum << endl;

    return 0;
}