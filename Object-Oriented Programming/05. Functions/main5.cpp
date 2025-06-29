#include <iostream>
using namespace std;

// Write a recursive function to calculate the Fibonacci series
int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++)
        cout << fibonacci(i) << " ";

    return 0;
}