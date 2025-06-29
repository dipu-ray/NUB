#include <iostream>
using namespace std;

int main() {
    int dividend, divisor;
    cout << "Enter dividend and divisor: ";
    cin >> dividend >> divisor;

    cout << "Remainder = " << dividend % divisor << endl;

    return 0;
}