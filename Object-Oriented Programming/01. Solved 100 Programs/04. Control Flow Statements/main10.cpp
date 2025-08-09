#include <iostream>
using namespace std;

// Write a program to check if a number is prime
int main() {
    int n, flag = 0;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1)
        cout << "Not prime";
    else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << "Prime number";
        else
            cout << "Not prime";
    }

    return 0;
}