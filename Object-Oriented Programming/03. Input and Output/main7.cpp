#include <iostream>
#include <iomanip>
using namespace std;

// Create a program that formats the output using setw(), setprecision(), and fixed
int main() {
    double value = 123.456789;

    cout << setw(10) << fixed << setprecision(3) << value << endl;

    return 0;
}