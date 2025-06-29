#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double value = 123.456789;

    cout << setw(10) << fixed << setprecision(3) << value << endl;

    return 0;
}