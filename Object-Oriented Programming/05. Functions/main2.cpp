#include <iostream>
using namespace std;

// Write a function to find the factorial of a number
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Factorial = " << factorial(num);
    return 0;
}