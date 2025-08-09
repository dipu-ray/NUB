#include <iostream>
using namespace std;

// Write a c++ program to take a user input for two integers and display their product
int main() {
    int num1, num2, product;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    product = num1 * num2;

    cout << "Product = " << product << endl;

    return 0;
}