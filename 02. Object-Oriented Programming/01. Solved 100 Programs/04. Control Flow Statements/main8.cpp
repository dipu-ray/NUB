#include <iostream>
using namespace std;

// Write a program to print the sum of all numbers from 1 to N using a while loop
int main() {
    int n, sum = 0, i = 1;
    cout << "Enter value of N: ";
    cin >> n;

    while (i <= n) {
        sum += i;
        i++;
    }

    cout << "Sum = " << sum;
    return 0;
}